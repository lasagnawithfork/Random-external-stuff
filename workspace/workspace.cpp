#include "workspace.h"

rbx::camera rbx::workspace::get_current_camera() {
	if (!this->addr) return camera();
	auto cam = read<uintptr_t>(this->addr + Offsets::Workspace::CurrentCamera);
	return camera(cam);
}

rbx::world rbx::workspace::get_world() {
	if (!this->addr) return world();
	auto wrld = read<uintptr_t>(this->addr + Offsets::Workspace::World);
	return world(wrld);
}