#include "world.h"

bool rbx::world::set_tickrate(float tickrate) {
	auto res = write<float>(this->addr + Offsets::World::SteppingParameters::m_worldStepsPerSec, tickrate);
	return res;
}