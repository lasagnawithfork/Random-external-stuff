#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct camera : instance {
        vector3_t get_camera_position();
        bool set_camera_position(vector3_t position);

        matrix3_t get_camera_rotation();
        bool set_camera_rotation(matrix3_t rotation);

        instance get_camera_subject();
        bool set_camera_subject(instance subject);

        int get_camera_type();
        bool set_camera_type(int type);

        int get_camera_mode();
        bool set_camera_mode(int mode);

        vector2_t get_viewport_size();
        vector2_t_int16 get_viewport_size_int16();
        bool set_viewport_size(vector2_t_int16 size);
	};
}