#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct mouse_service : instance {
		instance input_object;
		instance get_input_object(bool store_self = true);
		bool set_mouse_pos(vector2_t screen, instance* input_object = nullptr);
	};
}