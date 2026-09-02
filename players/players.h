#pragma once
#include "classes/entity/entity.h"

namespace rbx {
	struct players : instance {
		entity get_local_player();
		std::vector<entity> get_active_players();
		int get_player_count();
	};
}