#include "visual_engine.h"
#include "misc/globals.h"

rbx::matrix4_t rbx::visual_engine::get_view_matrix() {
	if (!addr) return matrix4_t();
	auto vm = read<matrix4_t>(this->addr + Offsets::VisualEngine::ViewMatrix);
	return vm;
}

rbx::vector2_t rbx::visual_engine::get_dimensions() {
	if (!addr) return vector2_t();
	auto dimensions = ImGui::GetIO().DisplaySize;
	return vector2_t(dimensions.x, dimensions.y);
}

rbx::render_view rbx::visual_engine::get_render_view() {
	if (!addr) return render_view();
	auto rv = read<uintptr_t>(this->addr + Offsets::VisualEngine::RenderView);
	return render_view(rv);
}

rbx::vector2_t rbx::visual_engine::world_to_screen(vector3_t world) {
	if (!addr) return vector2_t();

	vector2_t screen { -1, -1 };
	//auto vm = get_view_matrix();
	//auto dimensions = get_dimensions();
	auto vm = rbx::globals::instances::g_view_matrix;
	auto dimensions = rbx::globals::instances::g_dimensions;
	vector4_t vec4;

	vec4.x = (world.x * vm.data[0]) + (world.y * vm.data[1]) + (world.z * vm.data[2]) + vm.data[3];
	vec4.y = (world.x * vm.data[4]) + (world.y * vm.data[5]) + (world.z * vm.data[6]) + vm.data[7];
	vec4.z = (world.x * vm.data[8]) + (world.y * vm.data[9]) + (world.z * vm.data[10]) + vm.data[11];
	vec4.w = (world.x * vm.data[12]) + (world.y * vm.data[13]) + (world.z * vm.data[14]) + vm.data[15];

	if (vec4.w < 0.1f)
		return screen;

	vector3_t ndc;
	ndc.x = vec4.x / vec4.w;
	ndc.y = vec4.y / vec4.w;
	ndc.z = vec4.z / vec4.w;

	screen.x = (dimensions.x / 2.f * ndc.x) + (dimensions.x / 2.f);
	screen.y = -(dimensions.y / 2.f * ndc.y) + (dimensions.y / 2.f);

	return screen;
}

bool rbx::visual_engine::on_screen(vector2_t screen) {
	if (!addr) return false;
	auto dimensions = rbx::globals::instances::g_dimensions;
	auto on_screen = screen.x >= 0 && screen.x <= dimensions.x &&
		screen.y >= 0 && screen.y <= dimensions.y;
	return on_screen;
}

rbx::vector2_t_int16 rbx::visual_engine::calculate_viewport(vector2_t target, vector2_t dimensions) {
	return {
		(int16_t)(2 * (dimensions.x - target.x)),
		(int16_t)(2 * (dimensions.y - target.y))
	};
}