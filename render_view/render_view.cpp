#include "render_view.h"

bool rbx::render_view::set_lighting_valid(bool valid) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::RenderView::LightingValid, valid);
}

bool rbx::render_view::set_skybox_valid(bool valid) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::RenderView::SkyboxValid, valid);
}