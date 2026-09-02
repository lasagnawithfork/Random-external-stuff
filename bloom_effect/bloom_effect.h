#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct bloom_effect : instance {
		float get_intensity();
		float get_size();
		float get_threshold();

		bool set_intensity(float intensity);
		bool set_size(float size);
		bool set_threshold(float threshold);
	};
}