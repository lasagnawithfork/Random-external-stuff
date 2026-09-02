#include "mouse_service.h"

// added a bool so can be not stored in own incase we need that for some reason
// stores in self by default
rbx::instance rbx::mouse_service::get_input_object(bool store_self) {
	auto input_obj = read<uintptr_t>(this->addr + Offsets::MouseService::InputObject);
	if (store_self) this->input_object = input_obj;
	return rbx::instance(input_obj);
}

// added a variable so you can pass an input object or use the one the class has
// uses its own by default
bool rbx::mouse_service::set_mouse_pos(rbx::vector2_t pos, instance* input_obj) {
	if (!input_obj) return write(this->input_object.addr + Offsets::InputObject::MousePosition, pos);
	return write(input_obj->addr + Offsets::InputObject::MousePosition, pos);
}