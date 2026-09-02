#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct world : instance {
		bool set_tickrate(float tickrate);
	};
}