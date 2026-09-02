#include "gui_object.h"

rbx::vector2_t rbx::gui_object::get_absolute_position() {
	if (!addr) return vector2_t();
	return read<rbx::vector2_t>(addr + Offsets::GuiBase2D::AbsolutePosition);
}

rbx::vector2_t rbx::gui_object::get_absolute_size() {
	if (!addr) return vector2_t();
	return read<rbx::vector2_t>(addr + Offsets::GuiBase2D::AbsoluteSize);
}

rbx::vector2_t rbx::gui_object::get_anchor_point() {
	if (!addr) return vector2_t();
	return read<rbx::vector2_t>(addr + Offsets::GuiObject::AnchorPoint);
}

rbx::color3_t rbx::gui_object::get_background_color3() {
	if (!addr) return color3_t();
	return read<rbx::color3_t>(addr + Offsets::GuiObject::BackgroundColor3);
}

float rbx::gui_object::get_background_transparency() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::GuiObject::BackgroundTransparency);
}

rbx::color3_t rbx::gui_object::get_border_color3() {
	if (!addr) return color3_t();
	return read<rbx::color3_t>(addr + Offsets::GuiObject::BorderColor3);
}

int rbx::gui_object::get_border_size_pixel() {
	if (!addr) return 0;
	return read<int>(addr + Offsets::GuiObject::BorderSizePixel);
}

std::string rbx::gui_object::get_image() {
	if (!addr) return "";
	return read_string(addr + Offsets::GuiObject::Image);
}

int rbx::gui_object::get_layout_order() {
	if (!addr) return 0;
	return read<int>(addr + Offsets::GuiObject::LayoutOrder);
}

rbx::udim2_t rbx::gui_object::get_position() {
	if (!addr) return udim2_t();
	return read<rbx::udim2_t>(addr + Offsets::GuiObject::Position);
}

bool rbx::gui_object::get_rich_text() {
	if (!addr) return false;
	return read<bool>(addr + Offsets::GuiObject::RichText);
}

float rbx::gui_object::get_rotation() {
	if (!addr) return 0.f;
	return read<float>(addr + Offsets::GuiObject::Rotation);
}

bool rbx::gui_object::get_screen_gui_enabled() {
	if (!addr) return false;
	return read<bool>(addr + Offsets::GuiObject::ScreenGui_Enabled);
}

rbx::udim2_t rbx::gui_object::get_size() {
	if (!addr) return udim2_t();
	return read<rbx::udim2_t>(addr + Offsets::GuiObject::Size);
}

std::string rbx::gui_object::get_text() {
	if (!addr) return "";
	return read_string(addr + Offsets::GuiObject::Text);
}

rbx::color3_t rbx::gui_object::get_text_color3() {
	if (!addr) return color3_t();
	return read<rbx::color3_t>(addr + Offsets::TextLabel::TextColor3);
}

bool rbx::gui_object::get_visible() {
	if (!addr) return false;
	return read<bool>(addr + Offsets::GuiObject::Visible);
}

int rbx::gui_object::get_z_index() {
	if (!addr) return 0;
	return read<int>(addr + Offsets::GuiObject::ZIndex);
}

bool rbx::gui_object::set_absolute_position(const vector2_t& val) {
	if (!addr) return false;
	return write<rbx::vector2_t>(addr + Offsets::GuiBase2D::AbsolutePosition, val);
}

bool rbx::gui_object::set_absolute_size(const vector2_t& val) {
	if (!addr) return false;
	return write<rbx::vector2_t>(addr + Offsets::GuiBase2D::AbsoluteSize, val);
}

bool rbx::gui_object::set_anchor_point(const vector2_t& val) {
	if (!addr) return false;
	return write<rbx::vector2_t>(addr + Offsets::GuiObject::AnchorPoint, val);
}

bool rbx::gui_object::set_background_color3(const color3_t& val) {
	if (!addr) return false;
	return write<rbx::color3_t>(addr + Offsets::GuiObject::BackgroundColor3, val);
}

bool rbx::gui_object::set_background_transparency(float val) {
	if (!addr) return false;
	return write<float>(addr + Offsets::GuiObject::BackgroundTransparency, val);
}

bool rbx::gui_object::set_border_color3(const color3_t& val) {
	if (!addr) return false;
	return write<rbx::color3_t>(addr + Offsets::GuiObject::BorderColor3, val);
}

bool rbx::gui_object::set_border_size_pixel(int val) {
	if (!addr) return false;
	return write<int>(addr + Offsets::GuiObject::BorderSizePixel, val);
}

bool rbx::gui_object::set_image(const std::string& val) {
	if (!addr) return false;
	return write_string(addr + Offsets::GuiObject::Image, val);
}

bool rbx::gui_object::set_layout_order(int val) {
	if (!addr) return false;
	return write<int>(addr + Offsets::GuiObject::LayoutOrder, val);
}

bool rbx::gui_object::set_position(const udim2_t& val) {
	if (!addr) return false;
	return write<rbx::udim2_t>(addr + Offsets::GuiObject::Position, val);
}

bool rbx::gui_object::set_rich_text(bool val) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::GuiObject::RichText, val);
}

bool rbx::gui_object::set_rotation(float val) {
	if (!addr) return false;
	return write<float>(addr + Offsets::GuiObject::Rotation, val);
}

bool rbx::gui_object::set_screen_gui_enabled(bool val) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::GuiObject::ScreenGui_Enabled, val);
}

bool rbx::gui_object::set_size(const udim2_t& val) {
	if (!addr) return false;
	return write<rbx::udim2_t>(addr + Offsets::GuiObject::Size, val);
}

bool rbx::gui_object::set_text(const std::string& val) {
	if (!addr) return false;
	return write_string(addr + Offsets::GuiObject::Text, val);
}

bool rbx::gui_object::set_text_color3(const color3_t& val) {
	if (!addr) return false;
	return write<rbx::color3_t>(addr + Offsets::TextLabel::TextColor3, val);
}

bool rbx::gui_object::set_visible(bool val) {
	if (!addr) return false;
	return write<bool>(addr + Offsets::GuiObject::Visible, val);
}

bool rbx::gui_object::set_z_index(int val) {
	if (!addr) return false;
	return write<int>(addr + Offsets::GuiObject::ZIndex, val);
}