#pragma once
#include "classes/instance/instance.h"

#include "classes/players/players.h"
#include "classes/workspace/workspace.h"
#include "classes/mouse_service/mouse_service.h"
#include "classes/lighting/lighting.h"

namespace rbx {
	struct datamodel : instance {
		instance get_service(std::string service_name);
		workspace get_workspace();
		players get_players();
		mouse_service get_mouse_service();
		lighting get_lighting();

		uint64_t get_game_id();
		uint64_t get_place_id();
		uint64_t get_creator_id();
		uint64_t get_job_id();
	};
}