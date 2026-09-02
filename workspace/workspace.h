#pragma once
#include "classes/instance/instance.h"

#include "classes/camera/camera.h"
#include "classes/world/world.h"

namespace rbx {
	struct workspace : instance {
		camera get_current_camera();
		world get_world();
	};
}