#include "lighting.h"

rbx::atmosphere rbx::lighting::get_atmosphere() {
	if (!addr) return atmosphere();
	auto a = read<uintptr_t>(addr + Offsets::Lighting::Atmosphere);
	return atmosphere(a);
}

rbx::sky rbx::lighting::get_sky() {
	if (!addr) return sky();
	auto s = read<uintptr_t>(addr + Offsets::Lighting::Sky);
	return sky(s);
}

rbx::bloom_effect rbx::lighting::get_bloom_effect() {
	if (!addr) return bloom_effect();
	auto b = find_first_child_of_class("BloomEffect");
	if (!b.addr) find_first_child("BloomEffect");
	return bloom_effect(b);
}

rbx::color3_t rbx::lighting::get_ambient() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::Ambient);
}

float rbx::lighting::get_brightness() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::Brightness);
}

float rbx::lighting::get_clear_alpha() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::ClearAlpha);
}

rbx::color3_t rbx::lighting::get_clear_color() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::ClearColor);
}

float rbx::lighting::get_clock_time() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::ClockTime);
}

rbx::color3_t rbx::lighting::get_color_shift_bottom() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::ColorShift_Bottom);
}

rbx::color3_t rbx::lighting::get_color_shift_top() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::ColorShift_Top);
}

float rbx::lighting::get_environment_diffuse_scale() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::EnvironmentDiffuseScale);
}

float rbx::lighting::get_environment_specular_scale() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::EnvironmentSpecularScale);
}

float rbx::lighting::get_exposure_compensation() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::ExposureCompensation);
}

rbx::color3_t rbx::lighting::get_fog_color() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::FogColor);
}

float rbx::lighting::get_fog_end() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::FogEnd);
}

float rbx::lighting::get_fog_start() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::FogStart);
}

float rbx::lighting::get_geographic_latitude() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::GeographicLatitude);
}

bool rbx::lighting::get_global_shadows() {
	if (!addr) return false;
	return read<bool>(addr + Offsets::Lighting::GlobalShadows);
}

bool rbx::lighting::get_has_sky() {
	if (!addr) return false;
	return read<bool>(addr + Offsets::Lighting::HasSky);
}

rbx::color3_t rbx::lighting::get_outdoor_ambient() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::Lighting::OutdoorAmbient);
}

float rbx::lighting::get_shadow_softness() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::Lighting::ShadowSoftness);
}

bool rbx::lighting::set_ambient(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::Ambient, color);
}

bool rbx::lighting::set_brightness(float brightness) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::Brightness, brightness);
}

bool rbx::lighting::set_clear_alpha(float alpha) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::ClearAlpha, alpha);
}

bool rbx::lighting::set_clear_color(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::ClearColor, color);
}

bool rbx::lighting::set_clock_time(float time) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::ClockTime, time);
}

bool rbx::lighting::set_color_shift_bottom(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::ColorShift_Bottom, color);
}

bool rbx::lighting::set_color_shift_top(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::ColorShift_Top, color);
}

bool rbx::lighting::set_environment_diffuse_scale(float scale) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::EnvironmentDiffuseScale, scale);
}

bool rbx::lighting::set_environment_specular_scale(float scale) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::EnvironmentSpecularScale, scale);
}

bool rbx::lighting::set_exposure_compensation(float compensation) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::ExposureCompensation, compensation);
}

bool rbx::lighting::set_fog_color(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::FogColor, color);
}

bool rbx::lighting::set_fog_end(float end) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::FogEnd, end);
}

bool rbx::lighting::set_fog_start(float start) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::FogStart, start);
}

bool rbx::lighting::set_geographic_latitude(float latitude) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::GeographicLatitude, latitude);
}

bool rbx::lighting::set_global_shadows(bool enabled) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::Lighting::GlobalShadows, enabled);
}

bool rbx::lighting::set_has_sky(bool has_sky) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::Lighting::HasSky, has_sky);
}

bool rbx::lighting::set_outdoor_ambient(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::Lighting::OutdoorAmbient, color);
}

bool rbx::lighting::set_shadow_softness(float softness) {
	if (!addr) return false;
	return write<float>(addr + Offsets::Lighting::ShadowSoftness, softness);
}

// sky parameters

rbx::color3_t rbx::lighting::get_light_color() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::SkyParameters::LightColor);
}

rbx::vector3_t rbx::lighting::get_light_direction() {
	if (!addr) return vector3_t();
	return read<vector3_t>(addr + Offsets::SkyParameters::LightDirection);
}

rbx::color3_t rbx::lighting::get_sky_ambient() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::SkyParameters::SkyAmbient);
}

rbx::color3_t rbx::lighting::get_sky_ambient_2() {
	if (!addr) return color3_t();
	return read<color3_t>(addr + Offsets::SkyParameters::SkyAmbient2);
}

rbx::vector3_t rbx::lighting::get_moon_position() {
	if (!addr) return vector3_t();
	return read<vector3_t>(addr + Offsets::SkyParameters::MoonPosition);
}

rbx::vector3_t rbx::lighting::get_sun_position() {
	if (!addr) return vector3_t();
	return read<vector3_t>(addr + Offsets::SkyParameters::SunPosition);
}

rbx::lighting_source rbx::lighting::get_source() {
	if (!addr) return lighting_source::sun;
	return (lighting_source)(read<int>(addr + Offsets::SkyParameters::Source));
}

bool rbx::lighting::set_light_color(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::SkyParameters::LightColor, color);
}

bool rbx::lighting::set_light_direction(const vector3_t& direction) {
	if (!addr) return false;
	return write<vector3_t>(addr + Offsets::SkyParameters::LightDirection, direction);
}

bool rbx::lighting::set_sky_ambient(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::SkyParameters::SkyAmbient, color);
}

bool rbx::lighting::set_sky_ambient_2(const color3_t& color) {
	if (!addr) return false;
	return write<color3_t>(addr + Offsets::SkyParameters::SkyAmbient2, color);
}

bool rbx::lighting::set_moon_position(const vector3_t& position) {
	if (!addr) return false;
	return write<vector3_t>(addr + Offsets::SkyParameters::MoonPosition, position);
}

bool rbx::lighting::set_sun_position(const vector3_t& position) {
	if (!addr) return false;
	return write<vector3_t>(addr + Offsets::SkyParameters::SunPosition, position);
}

bool rbx::lighting::set_source(lighting_source source) {
	if (!addr) return false;
	return write<int>(addr + Offsets::SkyParameters::Source, (int)(source));
}