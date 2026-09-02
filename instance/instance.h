#pragma once
#include <vector>

#include "memory/mem.h"
#include "misc/offsets.h"
#include "misc/math.h"

namespace rbx {
	struct instance {
		uintptr_t addr;

		instance() : addr(0) {}
		instance(uintptr_t x) : addr(x) {}

		std::string get_name();
		std::string get_class_name();

		std::vector<instance> get_children();
		instance find_first_child(std::string name);
		instance find_first_child_of_class(std::string class_name);

		std::vector<instance> get_descendants();
		instance find_first_descendant(std::string name);
		instance find_first_descendant_of_class(std::string class_name);

		instance get_parent() {
			if (!this->addr) return instance();
			auto parent = read<uintptr_t>(this->addr + Offsets::Instance::Parent);
			return instance(parent);
		}

		bool set_name(std::string name) {
			if (!this->addr) return false;
			auto allocated = allocate(0x20); // 0x10 + 0x8 + 0x8
			if (!allocated) return false;
			if (!write<uintptr_t>(addr + Offsets::Instance::Name, allocated)) return false;
			return write_string(allocated, name);
		}
	};
}