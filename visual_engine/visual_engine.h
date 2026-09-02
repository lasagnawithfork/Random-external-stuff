#pragma once
#include "classes/instance/instance.h"
#include "classes/render_view/render_view.h"
#include <imgui/imgui.h>

namespace rbx {
	struct visual_engine : instance {
		matrix4_t get_view_matrix();
		vector2_t get_dimensions();
		render_view get_render_view();
		vector2_t world_to_screen(vector3_t world_pos);
		vector2_t_int16 calculate_viewport(vector2_t target, vector2_t dimensions);
		bool on_screen(vector2_t screen);
	};
}