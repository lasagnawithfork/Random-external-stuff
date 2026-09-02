#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct render_view : instance {
		bool set_lighting_valid(bool valid);
		bool set_skybox_valid(bool valid);
	};
}