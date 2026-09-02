#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct gui_object : instance {
		vector2_t get_absolute_position();
		vector2_t get_absolute_size();
		vector2_t get_anchor_point();
		color3_t get_background_color3();
		float get_background_transparency();
		color3_t get_border_color3();
		int get_border_size_pixel();
		std::string get_image();
		int get_layout_order();
		udim2_t get_position();
		bool get_rich_text();
		float get_rotation();
		bool get_screen_gui_enabled();
		udim2_t get_size();
		std::string get_text();
		color3_t get_text_color3();
		bool get_visible();
		int get_z_index();

		bool set_absolute_position(const vector2_t& val);
		bool set_absolute_size(const vector2_t& val);
		bool set_anchor_point(const vector2_t& val);
		bool set_background_color3(const color3_t& val);
		bool set_background_transparency(float val);
		bool set_border_color3(const color3_t& val);
		bool set_border_size_pixel(int val);
		bool set_image(const std::string& val);
		bool set_layout_order(int val);
		bool set_position(const udim2_t& val);
		bool set_rich_text(bool val);
		bool set_rotation(float val);
		bool set_screen_gui_enabled(bool val);
		bool set_size(const udim2_t& val);
		bool set_text(const std::string& val);
		bool set_text_color3(const color3_t& val);
		bool set_visible(bool val);
		bool set_z_index(int val);
	};
}