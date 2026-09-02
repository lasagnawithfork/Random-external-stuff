#include "camera.h"

rbx::vector3_t rbx::camera::get_camera_position() {
    auto pos = read<vector3_t>(this->addr + Offsets::Camera::Position);
    return pos;
}

bool rbx::camera::set_camera_position(vector3_t pos) {
    auto res = write<vector3_t>(this->addr + Offsets::Camera::Position, pos);
    return res;
}

rbx::matrix3_t rbx::camera::get_camera_rotation() {
    auto rot = read<matrix3_t>(this->addr + Offsets::Camera::Rotation);
    return rot;
}

bool rbx::camera::set_camera_rotation(matrix3_t rot) {
    auto res = write<matrix3_t>(this->addr + Offsets::Camera::Rotation, rot);
    return res;
}

rbx::instance rbx::camera::get_camera_subject() {
    auto sub = read<uintptr_t>(this->addr + Offsets::Camera::CameraSubject);
    return instance(sub);
}

bool rbx::camera::set_camera_subject(instance subject) {
    auto res = write<uintptr_t>(this->addr + Offsets::Camera::CameraSubject, subject.addr);
    return res;
}

int rbx::camera::get_camera_type() {
    auto type = read<int>(this->addr + Offsets::Camera::CameraType);
    return type;
}

bool rbx::camera::set_camera_type(int type) {
    auto res = write<int>(this->addr + Offsets::Camera::CameraType, type);
    return res;
}

int rbx::camera::get_camera_mode() {
    auto mode = read<int>(this->addr + Offsets::Player::CameraMode);
    return mode;
}

bool rbx::camera::set_camera_mode(int mode) {
    auto res = write<int>(this->addr + Offsets::Player::CameraMode, mode);
    return res;
}

rbx::vector2_t rbx::camera::get_viewport_size() {
    auto size = read<vector2_t>(this->addr + Offsets::Camera::ReadOnlyViewportSize);
    return size;
}

rbx::vector2_t_int16 rbx::camera::get_viewport_size_int16() {
    auto size = read<vector2_t_int16>(this->addr + Offsets::Camera::ViewportSize);
    return size;
}

bool rbx::camera::set_viewport_size(vector2_t_int16 val) {
    auto res = write<vector2_t_int16>(this->addr + Offsets::Camera::ViewportSize, val);
    return res;
}