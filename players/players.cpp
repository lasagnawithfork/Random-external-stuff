#include "players.h"

rbx::entity rbx::players::get_local_player() {
	if (!this->addr) return entity();
	auto lp = read<uintptr_t>(this->addr + Offsets::Players::LocalPlayer);
	return entity(lp);
}

std::vector<rbx::entity> rbx::players::get_active_players() {
	std::vector<entity> players;
	if (!this->addr) return players;
	auto children = this->get_children();
	for (auto p : children) {
		if (!p.addr) continue;
		players.emplace_back(entity(p.addr));
	}
	return players;
}

int rbx::players::get_player_count() {
	auto children = this->get_children();
	return (int)(children.size());
}