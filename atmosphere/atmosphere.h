#pragma once
#include "classes/instance/instance.h"

#include "classes/sky/sky.h"

namespace rbx {
    struct atmosphere : instance {
		color3_t get_color();
		color3_t get_decay();
		float get_density();
		float get_glare();
		float get_haze();
		float get_offset();

		bool set_color(const color3_t& color);
		bool set_decay(const color3_t& decay);
		bool set_density(float density);
		bool set_glare(float glare);
		bool set_haze(float haze);
		bool set_offset(float offset);
    };
}