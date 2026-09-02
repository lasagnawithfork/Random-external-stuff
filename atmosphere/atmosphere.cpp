#include "atmosphere.h"

rbx::color3_t rbx::atmosphere::get_color() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Atmosphere::Color);
}

rbx::color3_t rbx::atmosphere::get_decay() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Atmosphere::Decay);
}

float rbx::atmosphere::get_density() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Atmosphere::Density);
}

float rbx::atmosphere::get_glare() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Atmosphere::Glare);
}

float rbx::atmosphere::get_haze() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Atmosphere::Haze);
}

float rbx::atmosphere::get_offset() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Atmosphere::Offset);
}