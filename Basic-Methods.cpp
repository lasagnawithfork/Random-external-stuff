// For skids make sure you have the latest offsets available at 
// https://offsets.imtheo.lol/ 


// VisualEngine
uint64_t GetVisualEngine() {
    return read<std::uint64_t>(GetRenderView() + Offsets::RenderViewToVisualEngine);
}

// RenderView
uint64_t GetRenderView() {
    uint64_t DataModelRenderView1 = read<uint64_t>(GetDataModel() + Offsets::DataModelToRenderView1);
    uint64_t DataModelRenderView2 = read<uint64_t>(DataModelRenderView1 + Offsets::DataModelToRenderView2);
    uint64_t DataModelRenderView3 = read<uint64_t>(DataModelRenderView2 + Offsets::DataModelRenderView3);
    return DataModelRenderView3;
}

// DataModel
uint64_t GetDataModel() {
    uint64_t fakedm = read<uint64_t>(GetBase() + Offsets::FakeDataModelPointer);
    uint64_t realdm = read<uint64_t>(fakedm + Offsets::FakeDataModelToRealDataModel);
    return realdm;
}


Vector2int16 roblox::camera::calculateViewport(Vector2 target_screen_pos, Vector2 screen_size) {
    Vector2int16 result;
    result.x = (int16_t)(2 * (screen_size.x - target_screen_pos.x));
    result.y = (int16_t)(2 * (screen_size.y - target_screen_pos.y));
    return result;
}

void roblox::camera::setViewport(Vector2int16 val) {
    write<Vector2int16>(this->address + Offsets::Camera::Viewport, val);
}
