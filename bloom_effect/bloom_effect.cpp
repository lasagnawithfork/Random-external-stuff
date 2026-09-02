#include "bloom_effect.h"

float rbx::bloom_effect::get_intensity() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::BloomEffect::Intensity);
}

float rbx::bloom_effect::get_size() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::BloomEffect::Size);
}

float rbx::bloom_effect::get_threshold() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::BloomEffect::Threshold);
}

bool rbx::bloom_effect::set_intensity(float intensity) {
	if (!addr) return false;
	return write<float>(addr + Offsets::BloomEffect::Intensity, intensity);
}

bool rbx::bloom_effect::set_size(float size) {
	if (!addr) return false;
	return write<float>(addr + Offsets::BloomEffect::Size, size);
}

bool rbx::bloom_effect::set_threshold(float threshold) {
	if (!addr) return false;
	return write<float>(addr + Offsets::BloomEffect::Threshold, threshold);
}