#pragma once
#include "classes/instance/instance.h"

namespace rbx {
	struct value_object : instance {
		template <typename t>
		t read_value() {
			if (!this->addr) return t();
			return read<t>(this->addr + Offsets::ValueObject::Value);
		}

		std::string read_string_value() {
			if (!this->addr) return "";
			return read_string(this->addr + Offsets::ValueObject::Value);
		}

		template <typename t>
		bool write_value(t val) {
			if (!this->addr) return false;
			return write<t>(this->addr + Offsets::ValueObject::Value, val);
		}

		bool write_string_value(std::string str) {
			if (!this->addr) return false;
			return write_string(this->addr + Offsets::ValueObject::Value, str);
		}
	};
}