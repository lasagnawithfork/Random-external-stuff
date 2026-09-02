#pragma once
#include "classes/instance/instance.h"

#include "classes/atmosphere/atmosphere.h"
#include "classes/sky/sky.h"
#include "classes/bloom_effect/bloom_effect.h"

namespace rbx {
	enum lighting_source : int {
		sun = 0,
		moon = 1
	};

	struct lighting : instance {
        atmosphere get_atmosphere();
		sky get_sky();
		bloom_effect get_bloom_effect();

		color3_t get_ambient();
		float get_brightness();
		float get_clear_alpha();
		color3_t get_clear_color();
		float get_clock_time(); // seconds
		color3_t get_color_shift_bottom();
		color3_t get_color_shift_top();
		float get_environment_diffuse_scale();
		float get_environment_specular_scale();
		float get_exposure_compensation();
		color3_t get_fog_color();
		float get_fog_end();
		float get_fog_start();
		float get_geographic_latitude();
		bool get_global_shadows();
		bool get_has_sky();
		color3_t get_outdoor_ambient();
		float get_shadow_softness();

		bool set_ambient(const color3_t& color);
		bool set_brightness(float brightness);
		bool set_clear_alpha(float alpha);
		bool set_clear_color(const color3_t& color);
		bool set_clock_time(float time); // seconds // ts doesnt even do shit idfk why i added
		bool set_color_shift_bottom(const color3_t& color);
		bool set_color_shift_top(const color3_t& color);
		bool set_environment_diffuse_scale(float scale);
		bool set_environment_specular_scale(float scale);
		bool set_exposure_compensation(float compensation);
		bool set_fog_color(const color3_t& color);
		bool set_fog_end(float end);
		bool set_fog_start(float start);
		bool set_geographic_latitude(float latitude);
		bool set_global_shadows(bool enabled);
		bool set_has_sky(bool has_sky);
		bool set_outdoor_ambient(const color3_t& color);
		bool set_shadow_softness(float softness);

		// skyparameters
		color3_t get_light_color();
		vector3_t get_light_direction();
		vector3_t get_moon_position();
		color3_t get_sky_ambient();
		color3_t get_sky_ambient_2();
		vector3_t get_sun_position();
		lighting_source get_source();

		bool set_light_color(const color3_t& color);
		bool set_light_direction(const vector3_t& direction);
		bool set_moon_position(const vector3_t& position);
		bool set_sky_ambient(const color3_t& color);
		bool set_sky_ambient_2(const color3_t& color);
		bool set_sun_position(const vector3_t& position);
		bool set_source(lighting_source source);
	};
}