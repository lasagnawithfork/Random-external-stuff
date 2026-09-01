if (globals::instances::gamename == "RIVALS") {
    auto vp = globals::instances::camera.calculateViewport({partpos.x, partpos.y}, {cached_screen_size.x, cached_screen_size.y});
    globals::instances::camera.setViewport(vp);
}
