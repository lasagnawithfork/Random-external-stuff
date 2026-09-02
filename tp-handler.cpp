#include "tp_handler.h"

using namespace rbx::globals::instances;

void rbx::tp_handler::thread() {
	g_task_scheduler = task_scheduler(mem::rbx_base);

	while (true) {
		if (!globals::g_running) break;

		auto rbx = FindWindow("WINDOWSCLIENT", nullptr);
		if (!rbx) { globals::g_running = false; break; }

		g_datamodel = g_task_scheduler.get_datamodel();
		g_visual_engine = g_task_scheduler.get_visual_engine();
		if (!g_datamodel.addr || !g_visual_engine.addr) {
			printf("[-] failed to get datamodel and/or visualengine.\n");
			sleep_ms(100);
			continue;
		}
		game::game_id = g_datamodel.get_game_id();
		game::place_id = g_datamodel.get_place_id();
		game::job_id = g_datamodel.get_job_id();
		game::creator_id = g_datamodel.get_creator_id();
		if (!game::game_id || !game::place_id || !game::job_id || !game::creator_id)  {
			printf("[-] failed to get gameid/placeid/jobid/creatorid or not ingame.\n");
			game::curr_game = supported_game::none;
			sleep_ms(100);
			continue;
		}
		switch (game::game_id) {
		case 111958650: game::curr_game = supported_game::arsenal; break;
		case 6035872082: game::curr_game = supported_game::rivals; break;
		case 1168263273: game::curr_game = supported_game::bad_business; break;
		case 1008451066: game::curr_game = supported_game::da_hood; break;
		case 3634139746: game::curr_game = supported_game::hood_customs; break;
		case 113491250: game::curr_game = supported_game::phantom_forces; break;
		default: game::curr_game = supported_game::universal; break;
		}
		g_lighting = g_datamodel.get_lighting();
		g_render_view = g_visual_engine.get_render_view();
		g_workspace = g_datamodel.get_workspace();
		g_players = g_datamodel.get_players();
		g_camera = g_workspace.get_current_camera();
		g_mouse_service = g_datamodel.get_mouse_service();
		g_world = g_workspace.get_world();
		g_local_player = g_players.get_local_player();
		sleep_ms(1000);
	}
}
