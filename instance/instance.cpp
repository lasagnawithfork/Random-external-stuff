#include "instance.h"

std::string rbx::instance::get_name() {
	auto name_ptr = read<uintptr_t>(this->addr + Offsets::Instance::Name);
	if (!name_ptr) return "???";
	return read_string(name_ptr);
}

std::string rbx::instance::get_class_name() {
	auto c1 = read<uintptr_t>(this->addr + Offsets::Instance::ClassDescriptor);
	if (!c1) return "???_class1";
	auto c2 = read<uintptr_t>(c1 + Offsets::Instance::ClassName);
	if (!c2) return "???_class2";
	return read_string(c2);
}

std::vector<rbx::instance> rbx::instance::get_children() {
	std::vector<instance> children;
	if (!this->addr) return children;
	auto start = read<uintptr_t>(this->addr + Offsets::Instance::ChildrenStart);
	if (!start) return children;
	auto end = read<uintptr_t>(start + Offsets::Instance::ChildrenEnd);
	if (!end) return children;
	for (auto child = read<uintptr_t>(start); child < end; child += 0x10) {
		if (!child) continue;
		children.emplace_back(read<instance>(child));
	}
	return children;
}

rbx::instance rbx::instance::find_first_child(std::string name) {
	auto children = this->get_children();
	for (auto& child : children) if (child.get_name() == name) return child;
	return instance();
}

rbx::instance rbx::instance::find_first_child_of_class(std::string name) {
	auto children = this->get_children();
	for (auto& child : children) if (child.get_class_name() == name) return child;
	return instance();
}

void descendant_helper(std::vector<rbx::instance>& output, rbx::instance& current) {
	auto children = current.get_children();
	for (auto& child : children) {
		output.emplace_back(child);
		descendant_helper(output, child);
	}
}

std::vector<rbx::instance> rbx::instance::get_descendants() {
	std::vector<instance> descendants;
	descendant_helper(descendants, *this);
	return descendants;
}

rbx::instance rbx::instance::find_first_descendant(std::string name) {
	for (auto descendant : this->get_descendants())
		if (descendant.get_name() == name) return descendant;
	return instance();
}

rbx::instance rbx::instance::find_first_descendant_of_class(std::string name) {
	for (auto descendant : this->get_descendants())
		if (descendant.get_class_name() == name) return descendant;
	return instance();
}