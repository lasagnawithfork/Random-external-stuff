#pragma once
/* =============================================================
/*                       theo's offsets                         
/*                  https://offsets.imtheo.lol                  
/* -------------------------------------------------------------
/*  Dumped With     : RbxDumperV2                               
/*  Roblox Version  : version-f5a60436d48947d3
/*  Dumper Version  : 2.1.7
/*  Dumped At       : 19:36 27/08/2026 (GMT)
/*  Total Offsets   : 388
/* -------------------------------------------------------------
/*  Join the discord!                                           
/*  https://offsets.imtheo.lol/discord                          
/* =============================================================
*/

#include <cstdint>
#include <string>
namespace Structs {
    inline std::string ClientVersion = "version-f5a60436d48947d3";

    struct AirProperties {
        float AirDensity;
        Vector3 GlobalWind;
    }; // sizeof = 16

    struct AnimationTrack {
        char pad_0[184];
        uintptr_t Animation;
        char pad_1[20];
        float Speed;
        float TimePosition;
        char pad_2[9];
        bool Looped;
        char pad_3[42];
        uintptr_t Animator;
        char pad_4[2368];
        bool IsPlaying;
    }; // sizeof = 2649

    struct Animator {
        char pad_0[2896];
        uintptr_t ActiveAnimations;
    }; // sizeof = 2904

    struct Atmosphere {
        char pad_0[208];
        float Density;
        float Glare;
        float Haze;
        float Offset;
    }; // sizeof = 224

    struct Attachment {
        char pad_0[196];
        Vector3 Position;
    }; // sizeof = 208

    struct BasePart {
        char pad_0[268];
        float Reflectance;
        char pad_1[32];
        float Transparency;
        char pad_2[1];
        bool CastShadow;
        bool Locked;
        bool Massless;
        char pad_3[80];
        uintptr_t Primitive;
        char pad_4[41];
        int Shape;
    }; // sizeof = 445

    struct Beam {
        char pad_0[352];
        uintptr_t Attachment0;
        char pad_1[8];
        uintptr_t Attachment1;
        char pad_2[8];
        float Brightness;
        float CurveSize0;
        float CurveSize1;
        float LightEmission;
        float LightInfluence;
        char pad_3[8];
        float TextureLength;
        char pad_4[4];
        float TextureSpeed;
        float Width0;
        float Width1;
        float ZOffset;
    }; // sizeof = 436

    struct BloomEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[7];
        float Intensity;
        float Size;
        float Threshold;
    }; // sizeof = 196

    struct BlurEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[7];
        float Size;
    }; // sizeof = 188

    struct ByteCode {
        char pad_0[16];
        uintptr_t Pointer;
        char pad_1[8];
        uintptr_t Size;
    }; // sizeof = 40

    struct Camera {
        char pad_0[200];
        uintptr_t CameraSubject;
        char pad_1[8];
        Matrix3x3 Rotation;
        Vector3 Position;
        char pad_2[48];
        int CameraType;
        char pad_3[4];
        float FieldOfView;
        char pad_4[392];
        Vector2 ViewportSize;
        float ImagePlaneDepth;
    }; // sizeof = 728

    struct CharacterMesh {
        char pad_0[328];
        int BodyPart;
    }; // sizeof = 332

    struct ClickDetector {
        char pad_0[232];
        float MaxActivationDistance;
    }; // sizeof = 236

    struct Clothing {
    }; // sizeof = 0

    struct ColorCorrectionEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[19];
        float Brightness;
        float Contrast;
    }; // sizeof = 204

    struct ColorGradingEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[7];
        int TonemapperPreset;
    }; // sizeof = 188

    struct DataModel {
        char pad_0[8];
        uintptr_t ToRenderView2;
        char pad_1[24];
        uintptr_t ToRenderView3;
        char pad_2[296];
        uintptr_t Workspace;
        char pad_3[32];
        uintptr_t CreatorId;
        uintptr_t GameId;
        uintptr_t PlaceId;
        char pad_4[20];
        int PlaceVersion;
        char pad_5[24];
        uintptr_t ToRenderView1;
        char pad_6[584];
        int PrimitiveCount;
        char pad_7[36];
        uintptr_t ScriptContext;
        char pad_8[392];
        uintptr_t GameLoaded;
    }; // sizeof = 1496

    struct DepthOfFieldEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[7];
        float FarIntensity;
        float FocusDistance;
        float InFocusRadius;
        float NearIntensity;
    }; // sizeof = 200

    struct DragDetector {
        char pad_0[232];
        float MaxActivationDistance;
        char pad_1[260];
        uintptr_t ReferenceInstance;
        char pad_2[116];
        Vector3 MaxDragTranslation;
        Vector3 MinDragTranslation;
        char pad_3[36];
        float MaxDragAngle;
        float MaxForce;
        float MaxTorque;
        float MinDragAngle;
        char pad_4[8];
        float Responsiveness;
    }; // sizeof = 708

    struct FakeDataModel {
        char pad_0[504];
        uintptr_t RealDataModel;
    }; // sizeof = 512

    struct GuiBase2D {
        char pad_0[232];
        float AbsoluteRotation;
        char pad_1[32];
        Vector2 AbsolutePosition;
        Vector2 AbsoluteSize;
    }; // sizeof = 284

    struct GuiObject {
        char pad_0[232];
        float Rotation;
        char pad_1[984];
        bool ScreenGui_Enabled;
        char pad_2[75];
        UDim2 Position;
        char pad_3[16];
        UDim2 Size;
        char pad_4[12];
        float BackgroundTransparency;
        char pad_5[48];
        int LayoutOrder;
        char pad_6[32];
        int ZIndex;
        char pad_7[5];
        bool Visible;
    }; // sizeof = 1454

    struct Humanoid {
        char pad_0[32];
        int HumanoidStateID;
        char pad_1[228];
        uintptr_t SeatPart;
        char pad_2[8];
        uintptr_t MoveToPart;
        char pad_3[8];
        Vector3 CameraOffset;
        char pad_4[12];
        Vector3 MoveDirection;
        Vector3 TargetPoint;
        char pad_5[12];
        Vector3 MoveToPoint;
        char pad_6[16];
        int DisplayDistanceType;
        int FloorMaterial;
        float HealthDisplayDistance;
        int HealthDisplayType;
        float Health;
        float HipHeight;
        char pad_7[8];
        float JumpHeight;
        float JumpPower;
        float MaxHealth;
        float MaxSlopeAngle;
        float NameDisplayDistance;
        int NameOcclusion;
        char pad_8[8];
        int RigType;
        char pad_9[12];
        float Walkspeed;
        bool AutoJumpEnabled;
        bool AutoRotate;
        bool AutomaticScalingEnabled;
        bool BreakJointsOnDeath;
        bool EvaluateStateMachine;
        char pad_10[1];
        bool Jump;
        char pad_11[1];
        bool PlatformStand;
        bool Sit;
        bool RequiresNeck;
        char pad_12[1];
        bool UseJumpPower;
        char pad_13[475];
        float WalkspeedCheck;
        char pad_14[72];
        double WalkTimer;
        char pad_15[104];
        uintptr_t HumanoidRootPart;
        char pad_16[1088];
        int HumanoidState;
        char pad_17[163];
        bool IsWalking;
    }; // sizeof = 2408

    struct Instance {
        char pad_0[8];
        uintptr_t This;
        uintptr_t Name;
        uintptr_t ChildrenEnd;
        uintptr_t ClassDescriptor;
        char pad_1[64];
        uintptr_t Parent;
        uintptr_t NameContainer;
        uintptr_t ChildrenStart;
        char pad_2[304];
        uintptr_t ClassBase;
    }; // sizeof = 440

    struct Lighting {
        char pad_0[200];
        float ClockTime;
        char pad_1[76];
        float Brightness;
        float EnvironmentDiffuseScale;
        float EnvironmentSpecularScale;
        float ExposureCompensation;
        char pad_2[4];
        float FogEnd;
        float FogStart;
        float GeographicLatitude;
        char pad_3[12];
        bool GlobalShadows;
        char pad_4[35];
        Vector3 LightDirection;
        int Source;
        Vector3 SunPosition;
        Vector3 MoonPosition;
        char pad_5[56];
        uintptr_t Sky;
    }; // sizeof = 464

    struct LocalScript {
        uintptr_t ByteCode;
    }; // sizeof = 8

    struct MaterialColors {
    }; // sizeof = 0

    struct MeshContentProvider {
        char pad_0[32];
        uintptr_t LRUCache;
        char pad_1[24];
        uintptr_t MeshData;
        uintptr_t ToMeshData;
        char pad_2[160];
        uintptr_t Cache;
    }; // sizeof = 248

    struct MeshData {
        uintptr_t VertexStart;
        uintptr_t VertexEnd;
        char pad_0[32];
        uintptr_t FaceStart;
        uintptr_t FaceEnd;
    }; // sizeof = 64

    struct MeshPart {
    }; // sizeof = 0

    struct Misc {
        char pad_0[16];
        int StringLength;
        char pad_1[220];
        uintptr_t Adornee;
    }; // sizeof = 248

    struct Model {
        char pad_0[324];
        float Scale;
        char pad_1[272];
        uintptr_t PrimaryPart;
    }; // sizeof = 608

    struct ModuleScript {
        uintptr_t ByteCode;
    }; // sizeof = 8

    struct MouseService {
        float SensitivityPointer;
        char pad_0[208];
        Vector2 MousePosition;
        char pad_1[20];
        uintptr_t InputObject;
        char pad_2[8];
        uintptr_t InputObject2;
    }; // sizeof = 264

    struct ParticleEmitter {
        char pad_0[480];
        Vector3 Acceleration;
        char pad_1[8];
        Vector2 Lifetime;
        float RotSpeed;
        char pad_2[4];
        float Rotation;
        char pad_3[4];
        float Speed;
        char pad_4[4];
        Vector2 SpreadAngle;
        float Brightness;
        float Drag;
        char pad_5[20];
        float LightEmission;
        float LightInfluence;
        char pad_6[8];
        float Rate;
        char pad_7[16];
        float TimeScale;
        float VelocityInheritance;
        float ZOffset;
    }; // sizeof = 616

    struct Player {
        char pad_0[208];
        uintptr_t UserId;
        char pad_1[88];
        uintptr_t LocalPlayer;
        char pad_2[352];
        uintptr_t ModelInstance;
        char pad_3[56];
        uintptr_t Team;
        char pad_4[124];
        int AccountAge;
        char pad_5[8];
        float MaxZoomDistance;
        float MinZoomDistance;
        int CameraMode;
        char pad_6[32];
        float HealthDisplayDistance;
        char pad_7[12];
        float NameDisplayDistance;
        char pad_8[8];
        int TeamColor;
        char pad_9[3668];
        uintptr_t Mouse;
    }; // sizeof = 4624

    struct PlayerConfigurer {
        uintptr_t Pointer;
    }; // sizeof = 8

    struct PlayerMouse {
        char pad_0[336];
        uintptr_t Workspace;
    }; // sizeof = 344

    struct Primitive {
        int Material;
        char pad_0[2];
        uintptr_t Validate;
        char pad_1[186];
        Matrix3x3 Rotation;
        Vector3 Position;
        Vector3 AssemblyLinearVelocity;
        Vector3 AssemblyAngularVelocity;
        char pad_2[166];
        BYTE Flags;
        char pad_3[5];
        Vector3 Size;
        char pad_4[72];
        uintptr_t Owner;
    }; // sizeof = 536

    struct PrimitiveFlags {
    }; // sizeof = 0

    struct ProximityPrompt {
        char pad_0[284];
        int GamepadKeyCode;
        float HoldDuration;
        int KeyCode;
        float MaxActivationDistance;
        char pad_1[10];
        bool Enabled;
        bool RequiresLineOfSight;
    }; // sizeof = 312

    struct RenderJob {
        char pad_0[56];
        uintptr_t FakeDataModel;
        char pad_1[408];
        uintptr_t RenderView;
        char pad_2[16];
        uintptr_t RealDataModel;
    }; // sizeof = 504

    struct RenderView {
        char pad_0[8];
        uintptr_t DeviceD3D11;
        uintptr_t VisualEngine;
        char pad_1[312];
        bool LightingValid;
        char pad_2[316];
        bool SkyValid;
    }; // sizeof = 654

    struct RunService {
        char pad_0[244];
        double HeartbeatFPS;
        char pad_1[700];
        uintptr_t HeartbeatTask;
    }; // sizeof = 960

    struct Script {
        uintptr_t ByteCode;
    }; // sizeof = 8

    struct ScriptContext {
    }; // sizeof = 0

    struct Seat {
        char pad_0[528];
        uintptr_t Occupant;
    }; // sizeof = 536

    struct Sky {
        char pad_0[568];
        Vector3 SkyboxOrientation;
        float SunAngularSize;
        float MoonAngularSize;
        int StarCount;
    }; // sizeof = 592

    struct Sound {
        char pad_0[232];
        uintptr_t SoundGroup;
        char pad_1[44];
        float PlaybackSpeed;
        float RollOffMaxDistance;
        float RollOffMinDistance;
        char pad_2[8];
        float Volume;
        char pad_3[9];
        bool Looped;
        char pad_4[2];
        bool IsPlaying;
    }; // sizeof = 321

    struct SpawnLocation {
        char pad_0[480];
        int ForcefieldDuration;
        int TeamColor;
        bool AllowTeamChangeOnTouch;
        bool Enabled;
        bool Neutral;
    }; // sizeof = 491

    struct SpecialMesh {
        char pad_0[196];
        Vector3 Scale;
    }; // sizeof = 208

    struct StatsItem {
        char pad_0[200];
        double Value;
    }; // sizeof = 208

    struct SunRaysEffect {
        char pad_0[176];
        bool Enabled;
        char pad_1[7];
        float Intensity;
        float Spread;
    }; // sizeof = 192

    struct SurfaceAppearance {
        char pad_0[496];
        int AlphaMode;
        float EmissiveStrength;
    }; // sizeof = 504

    struct TaskScheduler {
        char pad_0[176];
        double MaxFPS;
        char pad_1[16];
        uintptr_t JobStart;
        uintptr_t JobEnd;
    }; // sizeof = 216

    struct Team {
        char pad_0[184];
        int BrickColor;
    }; // sizeof = 188

    struct Terrain {
        char pad_0[488];
        float GrassLength;
        char pad_1[4];
        float WaterReflectance;
        float WaterTransparency;
        float WaterWaveSize;
        float WaterWaveSpeed;
        char pad_2[688];
        uintptr_t MaterialColors;
    }; // sizeof = 1208

    struct Textures {
    }; // sizeof = 0

    struct Tool {
        char pad_0[1196];
        Vector3 Grip;
        bool CanBeDropped;
        bool Enabled;
        bool ManualActivationOnly;
        bool RequiresHandle;
    }; // sizeof = 1212

    struct UnionOperation {
    }; // sizeof = 0

    struct UserInputService {
        char pad_0[704];
        uintptr_t WindowInputState;
    }; // sizeof = 712

    struct VehicleSeat {
        char pad_0[552];
        float MaxSpeed;
        float SteerFloat;
        float ThrottleFloat;
        float Torque;
        float TurnSpeed;
    }; // sizeof = 572

    struct VisualEngine {
        char pad_0[384];
        ViewMatrix_t ViewMatrix;
        char pad_1[2304];
        uintptr_t FakeDataModel;
        char pad_2[24];
        Vector2 Dimensions;
    }; // sizeof = 2792

    struct Weld {
        char pad_0[280];
        uintptr_t Part0;
        char pad_1[8];
        uintptr_t Part1;
    }; // sizeof = 304

    struct WeldConstraint {
        char pad_0[184];
        uintptr_t Part0;
        char pad_1[8];
        uintptr_t Part1;
    }; // sizeof = 208

    struct WindowInputState {
        char pad_0[64];
        bool CapsLock;
        char pad_1[7];
        uintptr_t CurrentTextBox;
    }; // sizeof = 80

    struct Workspace {
        char pad_0[872];
        uintptr_t World;
        char pad_1[296];
        uintptr_t CurrentCamera;
        char pad_2[24];
        double DistributedGameTime;
        char pad_3[1288];
        float ReadOnlyGravity;
    }; // sizeof = 2508

    struct World {
        float worldStepsPerSec;
        float FallenPartsDestroyHeight;
        uintptr_t AirProperties;
        char pad_0[420];
        float Gravity;
    }; // sizeof = 440

}
