// the raycast rva is  a fflag offset in version-ad5d3e2906444472.
// This is a raycast silent aim uploaded by me cidkans on unknowncheats;
// I've decided to add it for fun

#include <iostream>
#include <windows.h>
 
typedef struct
{
    float x,y,z; // vec3 struct because direction is vec3
} vec3;
 
int main() 
{
    uint64_t base = memory->get_base("RobloxPlayerBeta.exe");
    uintptr_t raycast_rva = memory->read<vec3>(base + 0x79f22d8);
    vec3 direction = memory->read<vec3>(raycast_rva + 0x28);
    
    std::cout << direction.x << direction.y << direction.z;
    
    vec3 test_val = {10,10,10};
    // write now
    memory->write<vec3>(raycast_rva + 0x28, test_val);
    
    //gg
    return FLT_MAX;
}
