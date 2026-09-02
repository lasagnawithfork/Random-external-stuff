#include "part.h"

rbx::instance rbx::part::get_part_primtive() {
	if (!this->addr) return instance();
	if (!this->primitive) {
		this->primitive = read<uintptr_t>(this->addr + Offsets::BasePart::Primitive);
	}
	return instance(this->primitive);
}

rbx::vector3_t rbx::part::get_part_position() {
	if (!this->addr) return vector3_t();
	auto prim = this->get_part_primtive();
	if (!prim.addr) return vector3_t();
	auto pos = read<vector3_t>(prim.addr + Offsets::Primitive::Position);
	return pos;
}

rbx::cframe_t rbx::part::get_part_cframe() {
	if (!this->addr) return cframe_t();
	auto prim = this->get_part_primtive();
	if (!prim.addr) return cframe_t();
	auto cframe = read<cframe_t>(prim.addr + Offsets::Primitive::Rotation);
	return cframe;
}

rbx::vector3_t rbx::part::get_part_size() {
	if (!this->addr) return vector3_t();
	auto prim = this->get_part_primtive();
	if (!prim.addr) return vector3_t();
	auto size = read<vector3_t>(prim.addr + Offsets::Primitive::Size);
	return size;
}

rbx::matrix3_t rbx::part::get_part_rotation() {
	if (!this->addr) return matrix3_t();
	auto prim = this->get_part_primtive();
	if (!prim.addr) return matrix3_t();
	auto rot = read<matrix3_t>(prim.addr + Offsets::Primitive::Rotation);
	return rot;
}

rbx::vector3_t rbx::part::get_part_velocity() {
	if (!this->addr) return vector3_t();
	auto prim = this->get_part_primtive();
	if (!prim.addr) return vector3_t();
	auto vel = read<vector3_t>(prim.addr + Offsets::Primitive::AssemblyLinearVelocity);
	return vel;
}

uint16_t rbx::part::get_part_material() {
	if (!this->addr) return 0;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return 0;
	auto mat = read<uint16_t>(prim.addr + Offsets::Primitive::Material);
	return mat;
}

rbx::color3_t rbx::part::get_part_color() {
	if (!this->addr) return color3_t();
	auto col = read<color3_t>(addr + Offsets::BasePart::Color3);
	return col;
}

bool rbx::part::get_part_can_collide() {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto prim_flags = read<uintptr_t>(prim.addr + Offsets::Primitive::Flags);
	if (!prim_flags) return false;
	auto can_collide = read<bool>(prim_flags + Offsets::PrimitiveFlags::CanCollide);
	return can_collide;
}

float rbx::part::get_part_transparency() {
	if (!this->addr) return 0;
	auto transparency = read<float>(this->addr + Offsets::BasePart::Transparency);
	return transparency;
}

float rbx::part::get_part_distance(part& other) {
	if (!this->addr) return 0;
	auto a = this->get_part_position();
	auto b = other.get_part_position();
	return a.distance(b);
}

bool rbx::part::set_part_primtive(instance val) {
	if (!this->addr) return false;
	auto res = write<uintptr_t>(this->addr + Offsets::BasePart::Primitive, val.addr);
	return res;
}

bool rbx::part::set_part_position(vector3_t val) {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto res = write<vector3_t>(prim.addr + Offsets::Primitive::Position, val);
	return res;
}

bool rbx::part::set_part_size(vector3_t val) {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto res = write<vector3_t>(prim.addr + Offsets::Primitive::Size, val);
	return res;
}

bool rbx::part::set_part_rotation(matrix3_t val) {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto res = write<matrix3_t>(prim.addr + Offsets::Primitive::Rotation, val);
	return res;
}

bool rbx::part::set_part_velocity(vector3_t val) {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto res = write<vector3_t>(prim.addr + Offsets::Primitive::AssemblyLinearVelocity, val);
	return res;
}

bool rbx::part::set_part_color(color3_t val) {
	if (!this->addr) return false;
	auto res = write<color3_t>(addr + Offsets::BasePart::Color3, val);
	return res;
}

bool rbx::part::set_part_can_collide(bool val) {
	if (!this->addr) return false;
	auto prim = this->get_part_primtive();
	if (!prim.addr) return false;
	auto prim_flags = read<uintptr_t>(prim.addr + Offsets::Primitive::Flags);
	if (!prim_flags) return false;
	auto res = write<bool>(prim_flags + Offsets::PrimitiveFlags::CanCollide, val);
	return res;
}

bool rbx::part::set_part_transparency(float val) {
	if (!this->addr) return false;
	auto res = write<float>(this->addr + Offsets::BasePart::Transparency, val);
	return res;
}