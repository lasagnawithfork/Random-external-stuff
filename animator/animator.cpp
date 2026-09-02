#include "animator.h"

uintptr_t rbx::animator::get_animation_id(entity player, animation animation) {
	if (!player.addr) return 0;
	auto character = player.get_character();
	if (!character.addr) return 0;
	auto animate = character.find_first_child("Animate");
	if (!animate.addr) return 0;
	instance animation_obj;
	switch (animation) {
	case animation::run: animation_obj = animate.find_first_child("run").find_first_child("RunAnim"); break;
	case animation::walk: animation_obj = animate.find_first_child("walk").find_first_child("WalkAnim"); break;
	case animation::jump: animation_obj = animate.find_first_child("jump").find_first_child("JumpAnim"); break;
	case animation::idle1: animation_obj = animate.find_first_child("idle").find_first_child("Animation1"); break;
	case animation::idle2: animation_obj = animate.find_first_child("idle").find_first_child("Animation2"); break;
	case animation::fall: animation_obj = animate.find_first_child("fall").find_first_child("FallAnim"); break;
	case animation::swim: animation_obj = animate.find_first_child("swim").find_first_child("Swim"); break;
	case animation::swim_idle: animation_obj = animate.find_first_child("swimidle").find_first_child("SwimIdle"); break;
	case animation::climb: animation_obj = animate.find_first_child("climb").find_first_child("ClimbAnim"); break;
	default: break;
	}
	if (!animation_obj.addr) return 0;
	auto animation_id_ptr = read<uintptr_t>(animation_obj.addr + Offsets::Misc::AnimationId);
	if (!animation_id_ptr) return 0;
	auto animation_str = read_string(animation_id_ptr);
	if (animation_str.empty()) return 0;
	auto url_start = animation_str.find("http");
	if (url_start == std::string::npos) return 0;
	auto id_pos = animation_str.find("?id=", url_start);
	if (id_pos == std::string::npos) return 0;
	size_t id_start = id_pos + 4;
	size_t id_end = id_start;
	while (id_end < animation_str.length() && isdigit(animation_str[id_end])) id_end++;
	if (id_end == id_start) return 0;
	auto id_str = animation_str.substr(id_start, id_end - id_start);
	return stoull(id_str);
}

bool rbx::animator::set_animation_id(entity player, animation animation, uintptr_t animation_id) {
	auto character = read<uintptr_t>(player.addr + Offsets::Player::ModelInstance);
	if (!character) return 0;
	auto animate = instance(character).find_first_child("Animate");
	if (!animate.addr) return 0;
	instance animation_obj;
	switch (animation) {
	case animation::run: animation_obj = animate.find_first_child("run").find_first_child("RunAnim"); break;
	case animation::walk: animation_obj = animate.find_first_child("walk").find_first_child("WalkAnim"); break;
	case animation::jump: animation_obj = animate.find_first_child("jump").find_first_child("JumpAnim"); break;
	case animation::idle1: animation_obj = animate.find_first_child("idle").find_first_child("Animation1"); break;
	case animation::idle2: animation_obj = animate.find_first_child("idle").find_first_child("Animation2"); break;
	case animation::fall: animation_obj = animate.find_first_child("fall").find_first_child("FallAnim"); break;
	case animation::swim: animation_obj = animate.find_first_child("swim").find_first_child("Swim"); break;
	case animation::swim_idle: animation_obj = animate.find_first_child("swimidle").find_first_child("SwimIdle"); break;
	case animation::climb: animation_obj = animate.find_first_child("climb").find_first_child("ClimbAnim"); break;
	default: return false;
	}
	if (!animation_obj.addr) return false;
	auto animation_str = "http://www.roblox.com/asset/?id=" + std::to_string(animation_id);
	return write_string(animation_obj.addr + Offsets::Misc::AnimationId, animation_str);
}

bool rbx::animator::apply_pack(entity player, animation_pack pack) {
	auto animations_pack = animations{};
	switch (pack) {
	case animation_pack::original: animations_pack = animation_packs::original; break;
	case animation_pack::astronaut: animations_pack = animation_packs::astronaut; break;
	case animation_pack::bubbly: animations_pack = animation_packs::bubbly; break;
	case animation_pack::cartoony: animations_pack = animation_packs::cartoony; break;
	case animation_pack::elder: animations_pack = animation_packs::elder; break;
	case animation_pack::knight: animations_pack = animation_packs::knight; break;
	case animation_pack::levitation: animations_pack = animation_packs::levitation; break;
	case animation_pack::mage: animations_pack = animation_packs::mage; break;
	case animation_pack::ninja: animations_pack = animation_packs::ninja; break;
	case animation_pack::pirate: animations_pack = animation_packs::pirate; break;
	case animation_pack::robot: animations_pack = animation_packs::robot; break;
	case animation_pack::rthro: animations_pack = animation_packs::rthro; break;
	case animation_pack::stylish: animations_pack = animation_packs::stylish; break;
	case animation_pack::superhero: animations_pack = animation_packs::superhero; break;
	case animation_pack::toy: animations_pack = animation_packs::toy; break;
	case animation_pack::vampire: animations_pack = animation_packs::vampire; break;
	case animation_pack::werewolf: animations_pack = animation_packs::werewolf; break;
	case animation_pack::zombie: animations_pack = animation_packs::zombie; break;
	default: return false;
	}

	if (!set_animation_id(player, animation::run, animations_pack.run)) return false;
	if (!set_animation_id(player, animation::walk, animations_pack.walk)) return false;
	if (!set_animation_id(player, animation::jump, animations_pack.jump)) return false;
	if (!set_animation_id(player, animation::idle1, animations_pack.idle1)) return false;
	if (!set_animation_id(player, animation::idle2, animations_pack.idle2)) return false;
	if (!set_animation_id(player, animation::fall, animations_pack.fall)) return false;
	if (!set_animation_id(player, animation::swim, animations_pack.swim)) return false;
	if (!set_animation_id(player, animation::swim_idle, animations_pack.swim_idle)) return false;
	if (!set_animation_id(player, animation::climb, animations_pack.climb)) return false;

	return true;
}