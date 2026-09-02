#include "datamodel.h"

rbx::instance rbx::datamodel::get_service(std::string service_name) {
	if (!this->addr) return instance();
	auto srvc = this->find_first_child_of_class(service_name);
	if (!srvc.addr) srvc = this->find_first_child(service_name);
	return srvc;
}

rbx::workspace rbx::datamodel::get_workspace() {
	if (!this->addr) return workspace();
	auto w = get_service("Workspace");
	return workspace(w.addr);
}

rbx::players rbx::datamodel::get_players() {
	if (!this->addr) return players();
	auto p = get_service("Players");
	return players(p.addr);
}

rbx::mouse_service rbx::datamodel::get_mouse_service() {
	if (!this->addr) return mouse_service();
	auto m = get_service("MouseService");
	return mouse_service(m.addr);
}

rbx::lighting rbx::datamodel::get_lighting() {
	if (!this->addr) return lighting();
	auto l = get_service("Lighting");
	return lighting(l.addr);
}

uint64_t rbx::datamodel::get_game_id() {
	if (!this->addr) return 0;
	auto game_id = read<uint64_t>(this->addr + Offsets::DataModel::GameId);
	return game_id;
}

uint64_t rbx::datamodel::get_place_id() {
	if (!this->addr) return 0;
	auto place_id = read<uint64_t>(this->addr + Offsets::DataModel::PlaceId);
	return place_id;
}

uint64_t rbx::datamodel::get_creator_id() {
	if (!this->addr) return 0;
	auto creator_id = read<uint64_t>(this->addr + Offsets::DataModel::CreatorId);
	return creator_id;
}

uint64_t rbx::datamodel::get_job_id() {
	if (!this->addr) return 0;
	auto job_id = read<uint64_t>(this->addr + Offsets::DataModel::JobId);
	return job_id;
}