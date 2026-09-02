#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct part : instance {
		uintptr_t primitive = 0x0;
		instance get_part_primtive();
		vector3_t get_part_position();
		vector3_t get_part_size();
		matrix3_t get_part_rotation();
		cframe_t get_part_cframe();
		vector3_t get_part_velocity();
		uint16_t get_part_material();
		color3_t get_part_color();
		bool get_part_can_collide();
		float get_part_transparency();
		float get_part_distance(part& other);

		bool set_part_primtive(instance val);
		bool set_part_position(vector3_t val);
		bool set_part_size(vector3_t val);
		bool set_part_rotation(matrix3_t val);
		bool set_part_velocity(vector3_t val);
		bool set_part_color(color3_t val);
		bool set_part_can_collide(bool val);
		bool set_part_transparency(float val);
	};
}