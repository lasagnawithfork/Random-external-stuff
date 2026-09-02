#pragma once
#include "misc/globals.h"
#include "classes/instance/instance.h"
#include "classes/entity/entity.h"

namespace rbx {
	struct animator {
		uintptr_t get_animation_id(entity player, animation animation);
		bool set_animation_id(entity player, animation animation, uintptr_t animation_id);

		bool apply_pack(entity player, animation_pack pack);
	};
}