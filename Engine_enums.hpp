enum class AnimPhysCollisionType {
    CoM = 0,
    CustomSphere = 1,
    InnerSphere = 2,
    OuterSphere = 3,
    AnimPhysCollisionType_MAX = 4,
};

enum class AnimPhysTwistAxis {
    AxisX = 0,
    AxisY = 1,
    AxisZ = 2,
    AnimPhysTwistAxis_MAX = 3,
};

enum AnimationCompressionFormat {
    ACF_None = 0,
    ACF_Float96NoW = 1,
    ACF_Fixed48NoW = 2,
    ACF_IntervalFixed32NoW = 3,
    ACF_Fixed32NoW = 4,
    ACF_Float32NoW = 5,
    ACF_Identity = 6,
    ACF_MAX = 7,
};

enum AnimationKeyFormat {
    AKF_ConstantKeyLerp = 0,
    AKF_VariableKeyLerp = 1,
    AKF_PerTrackCompression = 2,
    AKF_MAX = 3,
};

enum Beam2SourceTargetMethod {
    PEB2STM_Default = 0,
    PEB2STM_UserSet = 1,
    PEB2STM_Emitter = 2,
    PEB2STM_Particle = 3,
    PEB2STM_Actor = 4,
    PEB2STM_MAX = 5,
};

enum Beam2SourceTargetTangentMethod {
    PEB2STTM_Direct = 0,
    PEB2STTM_UserSet = 1,
    PEB2STTM_Distribution = 2,
    PEB2STTM_Emitter = 3,
    PEB2STTM_MAX = 4,
};

enum BeamModifierType {
    PEB2MT_Source = 0,
    PEB2MT_Target = 1,
    PEB2MT_MAX = 2,
};

enum CylinderHeightAxis {
    PMLPC_HEIGHTAXIS_X = 0,
    PMLPC_HEIGHTAXIS_Y = 1,
    PMLPC_HEIGHTAXIS_Z = 2,
    PMLPC_HEIGHTAXIS_MAX = 3,
};

enum Default__UserDefinedEnum {
};

enum DistributionParamMode {
    DPM_Normal = 0,
    DPM_Abs = 1,
    DPM_Direct = 2,
    DPM_MAX = 3,
};

enum class EActorUpdateOverlapsMethod {
    UseConfigDefault = 0,
    AlwaysUpdate = 1,
    OnlyUpdateMovable = 2,
    NeverUpdate = 3,
    EActorUpdateOverlapsMethod_MAX = 4,
};

enum EAdManagerDelegate {
    AMD_ClickedBanner = 0,
    AMD_UserClosedAd = 1,
    AMD_MAX = 2,
};

enum EAdditiveAnimationType {
    AAT_None = 0,
    AAT_LocalSpaceBase = 1,
    AAT_RotationOffsetMeshSpace = 2,
    AAT_MAX = 3,
};

enum EAdditiveBasePoseType {
    ABPT_None = 0,
    ABPT_RefPose = 1,
    ABPT_AnimScaled = 2,
    ABPT_AnimFrame = 3,
    ABPT_LocalAnimFrame = 4,
    ABPT_MAX = 5,
};

enum class EAirAbsorptionMethod {
    Linear = 0,
    CustomCurve = 1,
    EAirAbsorptionMethod_MAX = 2,
};

enum class EAlphaBlendOption {
    Linear = 0,
    Cubic = 1,
    HermiteCubic = 2,
    Sinusoidal = 3,
    QuadraticInOut = 4,
    CubicInOut = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    Custom = 14,
    EAlphaBlendOption_MAX = 15,
};

namespace EAlphaChannelMode {
    enum Type {
        Disabled = 0,
        LinearColorSpaceOnly = 1,
        AllowThroughTonemapper = 2,
        EAlphaChannelMode_MAX = 3,
    };
}

namespace EAngularDriveMode {
    enum Type {
        SLERP = 0,
        TwistAndSwing = 1,
        EAngularDriveMode_MAX = 2,
    };
}

enum class EAnimAlphaInputType {
    Float = 0,
    Bool = 1,
    Curve = 2,
    EAnimAlphaInputType_MAX = 3,
};

enum EAnimAssetCurveFlags {
    AACF_NONE = 0,
    AACF_DriveMorphTarget_DEPRECATED = 1,
    AACF_DriveAttribute_DEPRECATED = 2,
    AACF_Editable = 4,
    AACF_DriveMaterial_DEPRECATED = 8,
    AACF_Metadata = 16,
    AACF_DriveTrack = 32,
    AACF_Disabled = 64,
    AACF_MAX = 65,
};

enum class EAnimCurveType {
    AttributeCurve = 0,
    MaterialCurve = 1,
    MorphTargetCurve = 2,
    MaxAnimCurveType = 3,
    EAnimCurveType_MAX = 4,
};

enum class EAnimDataModelNotifyType {
    BracketOpened = 0,
    BracketClosed = 1,
    TrackAdded = 2,
    TrackChanged = 3,
    TrackRemoved = 4,
    SequenceLengthChanged = 5,
    FrameRateChanged = 6,
    CurveAdded = 7,
    CurveChanged = 8,
    CurveRemoved = 9,
    CurveFlagsChanged = 10,
    CurveRenamed = 11,
    CurveScaled = 12,
    CurveColorChanged = 13,
    AttributeAdded = 14,
    AttributeRemoved = 15,
    AttributeChanged = 16,
    Populated = 17,
    Reset = 18,
    Invalid = 19,
    EAnimDataModelNotifyType_MAX = 20,
};

enum class EAnimExecutionContextConversionResult {
    Succeeded = 1,
    Failed = 0,
    EAnimExecutionContextConversionResult_MAX = 2,
};

namespace EAnimGroupRole {
    enum Type {
        CanBeLeader = 0,
        AlwaysFollower = 1,
        AlwaysLeader = 2,
        TransitionLeader = 3,
        TransitionFollower = 4,
        EAnimGroupRole_MAX = 5,
    };
}

enum class EAnimInterpolationType {
    Linear = 0,
    Step = 1,
    EAnimInterpolationType_MAX = 2,
};

namespace EAnimLinkMethod {
    enum Type {
        Absolute = 0,
        Relative = 1,
        Proportional = 2,
        EAnimLinkMethod_MAX = 3,
    };
}

enum class EAnimNodeDataFlags {
    None = 0,
    HasInitialUpdateFunction = 1,
    HasBecomeRelevantFunction = 2,
    HasUpdateFunction = 4,
    EAnimNodeDataFlags_MAX = 5,
};

enum class EAnimNodeReferenceConversionResult {
    Succeeded = 1,
    Failed = 0,
    EAnimNodeReferenceConversionResult_MAX = 2,
};

namespace EAnimNotifyEventType {
    enum Type {
        Begin = 0,
        End = 1,
        EAnimNotifyEventType_MAX = 2,
    };
}

enum class EAnimPropertyAccessCallSite {
    WorkerThread_Unbatched = 0,
    WorkerThread_Batched_PreEventGraph = 1,
    WorkerThread_Batched_PostEventGraph = 2,
    GameThread_Batched_PreEventGraph = 3,
    GameThread_Batched_PostEventGraph = 4,
    EAnimPropertyAccessCallSite_MAX = 5,
};

enum class EAnimSyncGroupScope {
    Local = 0,
    Component = 1,
    EAnimSyncGroupScope_MAX = 2,
};

enum class EAnimSyncMethod {
    DoNotSync = 0,
    SyncGroup = 1,
    Graph = 2,
    EAnimSyncMethod_MAX = 3,
};

namespace EAnimationMode {
    enum Type {
        AnimationBlueprint = 0,
        AnimationSingleNode = 1,
        AnimationCustomMode = 2,
        EAnimationMode_MAX = 3,
    };
}

enum EAntiAliasingMethod {
    AAM_None = 0,
    AAM_FXAA = 1,
    AAM_TemporalAA = 2,
    AAM_MSAA = 3,
    AAM_TSR = 4,
    AAM_MAX = 5,
};

namespace EApplicationState {
    enum Type {
        Unknown = 0,
        Inactive = 1,
        Background = 2,
        Active = 3,
        EApplicationState_MAX = 4,
    };
}

enum EAspectRatioAxisConstraint {
    AspectRatio_MaintainYFOV = 0,
    AspectRatio_MaintainXFOV = 1,
    AspectRatio_MajorAxisFOV = 2,
    AspectRatio_MAX = 3,
};

namespace EAttachLocation {
    enum Type {
        KeepRelativeOffset = 0,
        KeepWorldPosition = 1,
        SnapToTarget = 2,
        SnapToTargetIncludingScale = 3,
        EAttachLocation_MAX = 4,
    };
}

enum class EAttachmentRule {
    KeepRelative = 0,
    KeepWorld = 1,
    SnapToTarget = 2,
    EAttachmentRule_MAX = 3,
};

enum class EAttenuationDistanceModel {
    Linear = 0,
    Logarithmic = 1,
    Inverse = 2,
    LogReverse = 3,
    NaturalSound = 4,
    Custom = 5,
    EAttenuationDistanceModel_MAX = 6,
};

namespace EAttenuationShape {
    enum Type {
        Sphere = 0,
        Capsule = 1,
        Box = 2,
        Cone = 3,
        EAttenuationShape_MAX = 4,
    };
}

enum EAttractorParticleSelectionMethod {
    EAPSM_Random = 0,
    EAPSM_Sequential = 1,
    EAPSM_MAX = 2,
};

enum class EAudioBusChannels {
    Mono = 0,
    Stereo = 1,
    Quad = 3,
    FivePointOne = 5,
    SevenPointOne = 7,
    EAudioBusChannels_MAX = 8,
};

enum class EAudioComponentPlayState {
    Playing = 0,
    Stopped = 1,
    Paused = 2,
    FadingIn = 3,
    FadingOut = 4,
    Count = 5,
    EAudioComponentPlayState_MAX = 6,
};

enum class EAudioFaderCurve {
    Linear = 0,
    Logarithmic = 1,
    SCurve = 2,
    Sin = 3,
    Count = 4,
    EAudioFaderCurve_MAX = 5,
};

namespace EAudioOutputTarget {
    enum Type {
        Speaker = 0,
        Controller = 1,
        ControllerFallbackToSpeaker = 2,
        EAudioOutputTarget_MAX = 3,
    };
}

enum class EAudioRecordingExportType {
    SoundWave = 0,
    WavFile = 1,
    EAudioRecordingExportType_MAX = 2,
};

enum class EAudioSpectrumBandPresetType {
    KickDrum = 0,
    SnareDrum = 1,
    Voice = 2,
    Cymbals = 3,
    EAudioSpectrumBandPresetType_MAX = 4,
};

enum class EAudioSpectrumType {
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    Decibel = 2,
    EAudioSpectrumType_MAX = 3,
};

enum class EAudioVolumeLocationState {
    InsideTheVolume = 0,
    OutsideTheVolume = 1,
    EAudioVolumeLocationState_MAX = 2,
};

enum EAutoExposureMethod {
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
};

namespace EAutoExposureMethodUI {
    enum Type {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3,
    };
}

enum class EAutoPossessAI {
    Disabled = 0,
    PlacedInWorld = 1,
    Spawned = 2,
    PlacedInWorldOrSpawned = 3,
    EAutoPossessAI_MAX = 4,
};

namespace EAutoReceiveInput {
    enum Type {
        Disabled = 0,
        Player0 = 1,
        Player1 = 2,
        Player2 = 3,
        Player3 = 4,
        Player4 = 5,
        Player5 = 6,
        Player6 = 7,
        Player7 = 8,
        EAutoReceiveInput_MAX = 9,
    };
}

namespace EAxisOption {
    enum Type {
        X = 0,
        Y = 1,
        Z = 2,
        X_Neg = 3,
        Y_Neg = 4,
        Z_Neg = 5,
        Custom = 6,
        EAxisOption_MAX = 7,
    };
}

enum EBeam2Method {
    PEB2M_Distance = 0,
    PEB2M_Target = 1,
    PEB2M_Branch = 2,
    PEB2M_MAX = 3,
};

enum EBeamTaperMethod {
    PEBTM_None = 0,
    PEBTM_Full = 1,
    PEBTM_Partial = 2,
    PEBTM_MAX = 3,
};

enum EBlendMode {
    BLEND_Opaque = 0,
    BLEND_Masked = 1,
    BLEND_Translucent = 2,
    BLEND_Additive = 3,
    BLEND_Modulate = 4,
    BLEND_AlphaComposite = 5,
    BLEND_AlphaHoldout = 6,
    BLEND_MAX = 7,
};

enum class EBlendProfileMode {
    TimeFactor = 0,
    WeightFactor = 1,
    BlendMask = 2,
    EBlendProfileMode_MAX = 3,
};

enum EBlendSpaceAxis {
    BSA_None = 0,
    BSA_X = 1,
    BSA_Y = 2,
    BSA_MAX = 3,
};

enum EBlendableLocation {
    BL_AfterTonemapping = 0,
    BL_BeforeTonemapping = 1,
    BL_BeforeTranslucency = 2,
    BL_ReplacingTonemapper = 3,
    BL_SSRInput = 4,
    BL_MAX = 5,
};

enum EBloomMethod {
    BM_SOG = 0,
    BM_FFT = 1,
    BM_MAX = 2,
};

enum class EBlueprintCompileMode {
    Default = 0,
    Development = 1,
    FinalRelease = 2,
    EBlueprintCompileMode_MAX = 3,
};

enum class EBlueprintNativizationFlag {
    Disabled = 0,
    Dependency = 1,
    ExplicitlyEnabled = 2,
    EBlueprintNativizationFlag_MAX = 3,
};

enum EBlueprintPinStyleType {
    BPST_Original = 0,
    BPST_VariantA = 1,
    BPST_MAX = 2,
};

enum EBlueprintStatus {
    BS_Unknown = 0,
    BS_Dirty = 1,
    BS_Error = 2,
    BS_UpToDate = 3,
    BS_BeingCreated = 4,
    BS_UpToDateWithWarnings = 5,
    BS_MAX = 6,
};

enum EBlueprintType {
    BPTYPE_Normal = 0,
    BPTYPE_Const = 1,
    BPTYPE_MacroLibrary = 2,
    BPTYPE_Interface = 3,
    BPTYPE_LevelScript = 4,
    BPTYPE_FunctionLibrary = 5,
    BPTYPE_MAX = 6,
};

enum EBoneAxis {
    BA_X = 0,
    BA_Y = 1,
    BA_Z = 2,
    BA_MAX = 3,
};

enum EBoneControlSpace {
    BCS_WorldSpace = 0,
    BCS_ComponentSpace = 1,
    BCS_ParentBoneSpace = 2,
    BCS_BoneSpace = 3,
    BCS_MAX = 4,
};

enum class EBoneFilterActionOption {
    Remove = 0,
    Keep = 1,
    Invalid = 2,
    EBoneFilterActionOption_MAX = 3,
};

enum EBoneRotationSource {
    BRS_KeepComponentSpaceRotation = 0,
    BRS_KeepLocalSpaceRotation = 1,
    BRS_CopyFromTarget = 2,
    BRS_MAX = 3,
};

namespace EBoneSpaces {
    enum Type {
        WorldSpace = 0,
        ComponentSpace = 1,
        EBoneSpaces_MAX = 2,
    };
}

namespace EBoneTranslationRetargetingMode {
    enum Type {
        Animation = 0,
        Skeleton = 1,
        AnimationScaled = 2,
        AnimationRelative = 3,
        OrientAndScale = 4,
        EBoneTranslationRetargetingMode_MAX = 5,
    };
}

enum EBoneVisibilityStatus {
    BVS_HiddenByParent = 0,
    BVS_Visible = 1,
    BVS_ExplicitlyHidden = 2,
    BVS_MAX = 3,
};

enum EBrushType {
    Brush_Default = 0,
    Brush_Add = 1,
    Brush_Subtract = 2,
    Brush_MAX = 3,
};

namespace ECameraAlphaBlendMode {
    enum Type {
        CABM_Linear = 0,
        CABM_Cubic = 1,
        CABM_MAX = 2,
    };
}

namespace ECameraProjectionMode {
    enum Type {
        Perspective = 0,
        Orthographic = 1,
        ECameraProjectionMode_MAX = 2,
    };
}

enum class ECameraShakeAttenuation {
    Linear = 0,
    Quadratic = 1,
    ECameraShakeAttenuation_MAX = 2,
};

enum class ECameraShakeDurationType {
    Fixed = 0,
    Infinite = 1,
    Custom = 2,
    ECameraShakeDurationType_MAX = 3,
};

enum class ECameraShakePlaySpace {
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraShakePlaySpace_MAX = 3,
};

enum class ECameraShakeUpdateResultFlags {
    ApplyAsAbsolute = 1,
    SkipAutoScale = 2,
    SkipAutoPlaySpace = 4,
    Default = 0,
    ECameraShakeUpdateResultFlags_MAX = 5,
};

enum ECanBeCharacterBase {
    ECB_No = 0,
    ECB_Yes = 1,
    ECB_Owner = 2,
    ECB_MAX = 3,
};

enum ECanCreateConnectionResponse {
    CONNECT_RESPONSE_MAKE = 0,
    CONNECT_RESPONSE_DISALLOW = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
    CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
    CONNECT_RESPONSE_MAX = 7,
};

namespace ECastRayTracedShadow {
    enum Type {
        Disabled = 0,
        UseProjectSetting = 1,
        Enabled = 2,
        ECastRayTracedShadow_MAX = 3,
    };
}

namespace EChannelMaskParameterColor {
    enum Type {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        EChannelMaskParameterColor_MAX = 4,
    };
}

enum EClampMode {
    CMODE_Clamp = 0,
    CMODE_ClampMin = 1,
    CMODE_ClampMax = 2,
    CMODE_MAX = 3,
};

namespace EClearSceneOptions {
    enum Type {
        NoClear = 0,
        HardwareClear = 1,
        QuadAtMaxZ = 2,
        EClearSceneOptions_MAX = 3,
    };
}

enum class EClothLODBiasMode {
    MappingsToSameLOD = 0,
    MappingsToMinLOD = 1,
    MappingsToAnyLOD = 2,
    EClothLODBiasMode_MAX = 3,
};

enum ECloudStorageDelegate {
    CSD_KeyValueReadComplete = 0,
    CSD_KeyValueWriteComplete = 1,
    CSD_ValueChanged = 2,
    CSD_DocumentQueryComplete = 3,
    CSD_DocumentReadComplete = 4,
    CSD_DocumentWriteComplete = 5,
    CSD_DocumentConflictDetected = 6,
    CSD_MAX = 7,
};

enum ECollisionChannel {
    ECC_WorldStatic = 0,
    ECC_WorldDynamic = 1,
    ECC_Pawn = 2,
    ECC_Visibility = 3,
    ECC_Camera = 4,
    ECC_PhysicsBody = 5,
    ECC_Vehicle = 6,
    ECC_Destructible = 7,
    ECC_EngineTraceChannel1 = 8,
    ECC_EngineTraceChannel2 = 9,
    ECC_EngineTraceChannel3 = 10,
    ECC_EngineTraceChannel4 = 11,
    ECC_EngineTraceChannel5 = 12,
    ECC_EngineTraceChannel6 = 13,
    ECC_GameTraceChannel1 = 14,
    ECC_GameTraceChannel2 = 15,
    ECC_GameTraceChannel3 = 16,
    ECC_GameTraceChannel4 = 17,
    ECC_GameTraceChannel5 = 18,
    ECC_GameTraceChannel6 = 19,
    ECC_GameTraceChannel7 = 20,
    ECC_GameTraceChannel8 = 21,
    ECC_GameTraceChannel9 = 22,
    ECC_GameTraceChannel10 = 23,
    ECC_GameTraceChannel11 = 24,
    ECC_GameTraceChannel12 = 25,
    ECC_GameTraceChannel13 = 26,
    ECC_GameTraceChannel14 = 27,
    ECC_GameTraceChannel15 = 28,
    ECC_GameTraceChannel16 = 29,
    ECC_GameTraceChannel17 = 30,
    ECC_GameTraceChannel18 = 31,
    ECC_OverlapAll_Deprecated = 32,
    ECC_MAX = 33,
};

namespace ECollisionEnabled {
    enum Type {
        NoCollision = 0,
        QueryOnly = 1,
        PhysicsOnly = 2,
        QueryAndPhysics = 3,
        ProbeOnly = 4,
        QueryAndProbe = 5,
        ECollisionEnabled_MAX = 6,
    };
}

enum ECollisionResponse {
    ECR_Ignore = 0,
    ECR_Overlap = 1,
    ECR_Block = 2,
    ECR_MAX = 3,
};

enum class EComponentCreationMethod {
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
    EComponentCreationMethod_MAX = 4,
};

namespace EComponentMobility {
    enum Type {
        Static = 0,
        Stationary = 1,
        Movable = 2,
        EComponentMobility_MAX = 3,
    };
}

enum class EComponentPhysicsStateChange {
    Created = 0,
    Destroyed = 1,
    EComponentPhysicsStateChange_MAX = 2,
};

namespace EComponentSocketType {
    enum Type {
        Invalid = 0,
        Bone = 1,
        Socket = 2,
        EComponentSocketType_MAX = 3,
    };
}

namespace EComponentType {
    enum Type {
        None = 0,
        TranslationX = 1,
        TranslationY = 2,
        TranslationZ = 3,
        RotationX = 4,
        RotationY = 5,
        RotationZ = 6,
        Scale = 7,
        ScaleX = 8,
        ScaleY = 9,
        ScaleZ = 10,
        EComponentType_MAX = 11,
    };
}

enum ECompositeTextureMode {
    CTM_Disabled = 0,
    CTM_NormalRoughnessToRed = 1,
    CTM_NormalRoughnessToGreen = 2,
    CTM_NormalRoughnessToBlue = 3,
    CTM_NormalRoughnessToAlpha = 4,
    CTM_MAX = 5,
};

namespace ECompositingSampleCount {
    enum Type {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        ECompositingSampleCount_MAX = 9,
    };
}

enum class EConcurrencyVolumeScaleMode {
    Default = 0,
    Distance = 1,
    Priority = 2,
    EConcurrencyVolumeScaleMode_MAX = 3,
};

namespace EConstraintTransform {
    enum Type {
        Absolute = 0,
        Relative = 1,
        EConstraintTransform_MAX = 2,
    };
}

enum class EConstraintTransformComponentFlags {
    None = 0,
    ChildPosition = 1,
    ChildRotation = 2,
    ParentPosition = 4,
    ParentRotation = 8,
    AllChild = 3,
    AllParent = 12,
    AllPosition = 5,
    AllRotation = 10,
    All = 15,
    EConstraintTransformComponentFlags_MAX = 16,
};

enum class EContentBundleClientState {
    Unregistered = 0,
    Registered = 1,
    ContentInjectionRequested = 2,
    ContentRemovalRequested = 3,
    RegistrationFailed = 4,
    EContentBundleClientState_MAX = 5,
};

enum class EContentBundleStatus {
    Registered = 0,
    ReadyToInject = 1,
    FailedToInject = 2,
    ContentInjected = 3,
    Unknown = -1,
    EContentBundleStatus_MAX = 4,
};

namespace EControlConstraint {
    enum Type {
        Orientation = 0,
        Translation = 1,
        MAX = 2,
    };
}

namespace EControllerAnalogStick {
    enum Type {
        CAS_LeftStick = 0,
        CAS_RightStick = 1,
        CAS_MAX = 2,
    };
}

enum ECsgOper {
    CSG_Active = 0,
    CSG_Add = 1,
    CSG_Subtract = 2,
    CSG_Intersect = 3,
    CSG_Deintersect = 4,
    CSG_None = 5,
    CSG_MAX = 6,
};

namespace ECurveBlendOption {
    enum Type {
        Override = 0,
        DoNotOverride = 1,
        NormalizeByWeight = 2,
        BlendByWeight = 3,
        UseBasePose = 4,
        UseMaxValue = 5,
        UseMinValue = 6,
        ECurveBlendOption_MAX = 7,
    };
}

enum class ECurveTableMode {
    Empty = 0,
    SimpleCurves = 1,
    RichCurves = 2,
    ECurveTableMode_MAX = 3,
};

enum class ECustomAttributeBlendType {
    Override = 0,
    Blend = 1,
    ECustomAttributeBlendType_MAX = 2,
};

enum class ECustomBoneAttributeLookup {
    BoneOnly = 0,
    ImmediateParent = 1,
    ParentHierarchy = 2,
    ECustomBoneAttributeLookup_MAX = 3,
};

namespace ECustomDepthStencil {
    enum Type {
        Disabled = 0,
        Enabled = 1,
        EnabledOnDemand = 2,
        EnabledWithStencil = 3,
        ECustomDepthStencil_MAX = 4,
    };
}

enum ECustomMaterialOutputType {
    CMOT_Float1 = 0,
    CMOT_Float2 = 1,
    CMOT_Float3 = 2,
    CMOT_Float4 = 3,
    CMOT_MaterialAttributes = 4,
    CMOT_MAX = 5,
};

enum class ECustomTimeStepSynchronizationState {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ECustomTimeStepSynchronizationState_MAX = 4,
};

enum EDBufferTextureId {
    DBT_A = 0,
    DBT_B = 1,
    DBT_C = 2,
    DBT_MAX = 3,
};

namespace EDOFMode {
    enum Type {
        Default = 0,
        SixDOF = 1,
        YZPlane = 2,
        XZPlane = 3,
        XYPlane = 4,
        CustomPlane = 5,
        None = 6,
        EDOFMode_MAX = 7,
    };
}

enum class EDataLayerRuntimeState {
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EDataLayerRuntimeState_MAX = 3,
};

enum class EDataLayerState {
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EDataLayerState_MAX = 3,
};

enum class EDataLayerType {
    Runtime = 0,
    Editor = 1,
    Unknown = 2,
    Size = 3,
    EDataLayerType_MAX = 4,
};

enum EDecalBlendMode {
    DBM_Translucent = 0,
    DBM_Stain = 1,
    DBM_Normal = 2,
    DBM_Emissive = 3,
    DBM_DBuffer_ColorNormalRoughness = 4,
    DBM_DBuffer_Color = 5,
    DBM_DBuffer_ColorNormal = 6,
    DBM_DBuffer_ColorRoughness = 7,
    DBM_DBuffer_Normal = 8,
    DBM_DBuffer_NormalRoughness = 9,
    DBM_DBuffer_Roughness = 10,
    DBM_DBuffer_Emissive = 11,
    DBM_DBuffer_AlphaComposite = 12,
    DBM_DBuffer_EmissiveAlphaComposite = 13,
    DBM_Volumetric_DistanceFunction = 14,
    DBM_AlphaComposite = 15,
    DBM_AmbientOcclusion = 16,
    DBM_MAX = 17,
};

enum EDecompressionType {
    DTYPE_Setup = 0,
    DTYPE_Invalid = 1,
    DTYPE_Preview = 2,
    DTYPE_Native = 3,
    DTYPE_RealTime = 4,
    DTYPE_Procedural = 5,
    DTYPE_Xenon = 6,
    DTYPE_Streaming = 7,
    DTYPE_MAX = 8,
};

enum class EDefaultAudioCompressionType {
    BinkAudio = 0,
    ADPCM = 1,
    PCM = 2,
    PlatformSpecific = 3,
    EDefaultAudioCompressionType_MAX = 4,
};

namespace EDefaultBackBufferPixelFormat {
    enum Type {
        DBBPF_B8G8R8A8 = 0,
        DBBPF_A16B16G16R16_DEPRECATED = 1,
        DBBPF_FloatRGB_DEPRECATED = 2,
        DBBPF_FloatRGBA = 3,
        DBBPF_A2B10G10R10 = 4,
        DBBPF_MAX = 5,
    };
}

namespace EDemoPlayFailure {
    enum Type {
        Generic = 0,
        DemoNotFound = 1,
        Corrupt = 2,
        InvalidVersion = 3,
        InitBase = 4,
        GameSpecificHeader = 5,
        ReplayStreamerInternal = 6,
        LoadMap = 7,
        Serialization = 8,
        EDemoPlayFailure_MAX = 9,
    };
}

enum EDepthOfFieldFunctionValue {
    TDOF_NearAndFarMask = 0,
    TDOF_NearMask = 1,
    TDOF_FarMask = 2,
    TDOF_CircleOfConfusionRadius = 3,
    TDOF_MAX = 4,
};

enum EDepthOfFieldMethod {
    DOFM_BokehDOF = 0,
    DOFM_Gaussian = 1,
    DOFM_CircleDOF = 2,
    DOFM_MAX = 3,
};

enum class EDetachmentRule {
    KeepRelative = 0,
    KeepWorld = 1,
    EDetachmentRule_MAX = 2,
};

enum EDetailMode {
    DM_Low = 0,
    DM_Medium = 1,
    DM_High = 2,
    DM_MAX = 3,
};

enum EDistributionVectorLockFlags {
    EDVLF_None = 0,
    EDVLF_XY = 1,
    EDVLF_XZ = 2,
    EDVLF_YZ = 3,
    EDVLF_XYZ = 4,
    EDVLF_MAX = 5,
};

enum EDistributionVectorMirrorFlags {
    EDVMF_Same = 0,
    EDVMF_Different = 1,
    EDVMF_Mirror = 2,
    EDVMF_MAX = 3,
};

namespace EDrawDebugItemType {
    enum Type {
        DirectionalArrow = 0,
        Sphere = 1,
        Line = 2,
        OnScreenMessage = 3,
        CoordinateSystem = 4,
        Point = 5,
        Circle = 6,
        Cone = 7,
        EDrawDebugItemType_MAX = 8,
    };
}

namespace EDrawDebugTrace {
    enum Type {
        None = 0,
        ForOneFrame = 1,
        ForDuration = 2,
        Persistent = 3,
        EDrawDebugTrace_MAX = 4,
    };
}

namespace EDynamicForceFeedbackAction {
    enum Type {
        Start = 0,
        Update = 1,
        Stop = 2,
        EDynamicForceFeedbackAction_MAX = 3,
    };
}

namespace EDynamicGlobalIlluminationMethod {
    enum Type {
        None = 0,
        Lumen = 1,
        ScreenSpace = 2,
        RayTraced = 3,
        Plugin = 4,
        EDynamicGlobalIlluminationMethod_MAX = 5,
    };
}

namespace EEarlyZPass {
    enum Type {
        None = 0,
        OpaqueOnly = 1,
        OpaqueAndMasked = 2,
        Auto = 3,
        EEarlyZPass_MAX = 4,
    };
}

namespace EEasingFunc {
    enum Type {
        Linear = 0,
        Step = 1,
        SinusoidalIn = 2,
        SinusoidalOut = 3,
        SinusoidalInOut = 4,
        EaseIn = 5,
        EaseOut = 6,
        EaseInOut = 7,
        ExpoIn = 8,
        ExpoOut = 9,
        ExpoInOut = 10,
        CircularIn = 11,
        CircularOut = 12,
        CircularInOut = 13,
        EEasingFunc_MAX = 14,
    };
}

enum EEdGraphPinDirection {
    EGPD_Input = 0,
    EGPD_Output = 1,
    EGPD_MAX = 2,
};

enum EEmitterDynamicParameterValue {
    EDPV_UserSet = 0,
    EDPV_AutoSet = 1,
    EDPV_VelocityX = 2,
    EDPV_VelocityY = 3,
    EDPV_VelocityZ = 4,
    EDPV_VelocityMag = 5,
    EDPV_MAX = 6,
};

enum EEmitterNormalsMode {
    ENM_CameraFacing = 0,
    ENM_Spherical = 1,
    ENM_Cylindrical = 2,
    ENM_MAX = 3,
};

enum EEmitterRenderMode {
    ERM_Normal = 0,
    ERM_Point = 1,
    ERM_Cross = 2,
    ERM_LightsOnly = 3,
    ERM_None = 4,
    ERM_MAX = 5,
};

namespace EEndPlayReason {
    enum Type {
        Destroyed = 0,
        LevelTransition = 1,
        EndPlayInEditor = 2,
        RemovedFromWorld = 3,
        Quit = 4,
        EEndPlayReason_MAX = 5,
    };
}

namespace EEvaluateCurveTableResult {
    enum Type {
        RowFound = 0,
        RowNotFound = 1,
        EEvaluateCurveTableResult_MAX = 2,
    };
}

namespace EEvaluatorDataSource {
    enum Type {
        EDS_SourcePose = 0,
        EDS_DestinationPose = 1,
        EDS_MAX = 2,
    };
}

namespace EEvaluatorMode {
    enum Type {
        EM_Standard = 0,
        EM_Freeze = 1,
        EM_DelayedFreeze = 2,
        EM_MAX = 3,
    };
}

enum class EFFTPeakInterpolationMethod {
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    ConstantQ = 3,
    EFFTPeakInterpolationMethod_MAX = 4,
};

enum class EFFTSize {
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    Max = 6,
};

enum class EFFTWindowType {
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
    EFFTWindowType_MAX = 4,
};

enum EFilterInterpolationType {
    BSIT_Average = 0,
    BSIT_Linear = 1,
    BSIT_Cubic = 2,
    BSIT_EaseInOut = 3,
    BSIT_ExponentialDecay = 4,
    BSIT_SpringDamper = 5,
    BSIT_MAX = 6,
};

namespace EFixedFoveationLevels {
    enum Type {
        Disabled = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        HighTop = 4,
        EFixedFoveationLevels_MAX = 5,
    };
}

enum class EFontCacheType {
    Offline = 0,
    Runtime = 1,
    EFontCacheType_MAX = 2,
};

enum EFontImportCharacterSet {
    FontICS_Default = 0,
    FontICS_Ansi = 1,
    FontICS_Symbol = 2,
    FontICS_MAX = 3,
};

namespace EFormatArgumentType {
    enum Type {
        Int = 0,
        UInt = 1,
        Float = 2,
        Double = 3,
        Text = 4,
        Gender = 5,
        EFormatArgumentType_MAX = 6,
    };
}

enum EFullyLoadPackageType {
    FULLYLOAD_Map = 0,
    FULLYLOAD_Game_PreLoadClass = 1,
    FULLYLOAD_Game_PostLoadClass = 2,
    FULLYLOAD_Always = 3,
    FULLYLOAD_Mutator = 4,
    FULLYLOAD_MAX = 5,
};

enum EFunctionInputType {
    FunctionInput_Scalar = 0,
    FunctionInput_Vector2 = 1,
    FunctionInput_Vector3 = 2,
    FunctionInput_Vector4 = 3,
    FunctionInput_Texture2D = 4,
    FunctionInput_TextureCube = 5,
    FunctionInput_Texture2DArray = 6,
    FunctionInput_VolumeTexture = 7,
    FunctionInput_StaticBool = 8,
    FunctionInput_MaterialAttributes = 9,
    FunctionInput_TextureExternal = 10,
    FunctionInput_MAX = 11,
};

namespace EGBufferFormat {
    enum Type {
        Force8BitsPerChannel = 0,
        Default = 1,
        HighPrecisionNormals = 3,
        Force16BitsPerChannel = 5,
        EGBufferFormat_MAX = 6,
    };
}

enum class EGainParamMode {
    Linear = 0,
    Decibels = 1,
    EGainParamMode_MAX = 2,
};

namespace EGrammaticalGender {
    enum Type {
        Neuter = 0,
        Masculine = 1,
        Feminine = 2,
        Mixed = 3,
        EGrammaticalGender_MAX = 4,
    };
}

namespace EGrammaticalNumber {
    enum Type {
        Singular = 0,
        Plural = 1,
        EGrammaticalNumber_MAX = 2,
    };
}

namespace EGraphAxisStyle {
    enum Type {
        Lines = 0,
        Notches = 1,
        Grid = 2,
        EGraphAxisStyle_MAX = 3,
    };
}

namespace EGraphDataStyle {
    enum Type {
        Lines = 0,
        Filled = 1,
        EGraphDataStyle_MAX = 2,
    };
}

enum EGraphType {
    GT_Function = 0,
    GT_Ubergraph = 1,
    GT_Macro = 2,
    GT_Animation = 3,
    GT_StateMachine = 4,
    GT_MAX = 5,
};

enum class EHISMViewRelevanceType {
    Grass = 0,
    Foliage = 1,
    HISM = 2,
    EHISMViewRelevanceType_MAX = 3,
};

enum class EHLODBatchingPolicy {
    None = 0,
    MeshSection = 1,
    Instancing = 2,
    EHLODBatchingPolicy_MAX = 3,
};

enum class EHLODLayerType {
    Instancing = 0,
    MeshMerge = 1,
    MeshSimplify = 2,
    MeshApproximate = 3,
    Custom = 4,
    EHLODLayerType_MAX = 5,
};

namespace EHasCustomNavigableGeometry {
    enum Type {
        No = 0,
        Yes = 1,
        EvenIfNotCollidable = 2,
        DontExport = 3,
        EHasCustomNavigableGeometry_MAX = 4,
    };
}

enum class EHierarchicalSimplificationMethod {
    None = 0,
    Merge = 1,
    Simplify = 2,
    Approximate = 3,
    EHierarchicalSimplificationMethod_MAX = 4,
};

enum EHitProxyPriority {
    HPP_World = 0,
    HPP_Wireframe = 1,
    HPP_Foreground = 2,
    HPP_UI = 3,
    HPP_MAX = 4,
};

enum EHorizTextAligment {
    EHTA_Left = 0,
    EHTA_Center = 1,
    EHTA_Right = 2,
    EHTA_MAX = 3,
};

enum EImportanceLevel {
    IL_Off = 0,
    IL_Lowest = 1,
    IL_Low = 2,
    IL_Normal = 3,
    IL_High = 4,
    IL_Highest = 5,
    TEMP_BROKEN2 = 6,
    EImportanceLevel_MAX = 7,
};

namespace EImportanceWeight {
    enum Type {
        Luminance = 0,
        Red = 1,
        Green = 2,
        Blue = 3,
        Alpha = 4,
        EImportanceWeight_MAX = 5,
    };
}

enum EIndirectLightingCacheQuality {
    ILCQ_Off = 0,
    ILCQ_Point = 1,
    ILCQ_Volume = 2,
    ILCQ_MAX = 3,
};

enum class EInertializationBoneState {
    Invalid = 0,
    Valid = 1,
    Excluded = 2,
    EInertializationBoneState_MAX = 3,
};

enum class EInertializationSpace {
    Default = 0,
    WorldSpace = 1,
    WorldRotation = 2,
    EInertializationSpace_MAX = 3,
};

enum class EInertializationState {
    Inactive = 0,
    Pending = 1,
    Active = 2,
    EInertializationState_MAX = 3,
};

enum EInputEvent {
    IE_Pressed = 0,
    IE_Released = 1,
    IE_Repeat = 2,
    IE_DoubleClick = 3,
    IE_Axis = 4,
    IE_MAX = 5,
};

enum class EInterfaceValidResult {
    Valid = 0,
    Invalid = 1,
    EInterfaceValidResult_MAX = 2,
};

enum class EInterpToBehaviourType {
    OneShot = 0,
    OneShot_Reverse = 1,
    Loop_Reset = 2,
    PingPong = 3,
    EInterpToBehaviourType_MAX = 4,
};

namespace EKinematicBonesUpdateToPhysics {
    enum Type {
        SkipSimulatingBones = 0,
        SkipAllBones = 1,
        EKinematicBonesUpdateToPhysics_MAX = 2,
    };
}

namespace ELandscapeCullingPrecision {
    enum Type {
        High = 0,
        Medium = 1,
        Low = 2,
        ELandscapeCullingPrecision_MAX = 3,
    };
}

namespace ELegendPosition {
    enum Type {
        Outside = 0,
        Inside = 1,
        ELegendPosition_MAX = 2,
    };
}

namespace ELerpInterpolationMode {
    enum Type {
        QuatInterp = 0,
        EulerInterp = 1,
        DualQuatInterp = 2,
        ELerpInterpolationMode_MAX = 3,
    };
}

enum class ELevelInstanceCreationType {
    LevelInstance = 0,
    PackedLevelActor = 1,
    ELevelInstanceCreationType_MAX = 2,
};

enum class ELevelInstancePivotType {
    CenterMinZ = 0,
    Center = 1,
    Actor = 2,
    WorldOrigin = 3,
    ELevelInstancePivotType_MAX = 4,
};

enum class ELevelInstanceRuntimeBehavior {
    None = 0,
    Embedded_Deprecated = 1,
    Partitioned = 2,
    LevelStreaming = 3,
    ELevelInstanceRuntimeBehavior_MAX = 4,
};

enum ELightMapPaddingType {
    LMPT_NormalPadding = 0,
    LMPT_PrePadding = 1,
    LMPT_NoPadding = 2,
    LMPT_MAX = 3,
};

enum class ELightUnits {
    Unitless = 0,
    Candelas = 1,
    Lumens = 2,
    ELightUnits_MAX = 3,
};

enum ELightingBuildQuality {
    Quality_Preview = 0,
    Quality_Medium = 1,
    Quality_High = 2,
    Quality_Production = 3,
    Quality_MAX = 4,
};

enum class ELightmapType {
    Default = 0,
    ForceSurface = 1,
    ForceVolumetric = 2,
    ELightmapType_MAX = 3,
};

enum ELocationBoneSocketSelectionMethod {
    BONESOCKETSEL_Sequential = 0,
    BONESOCKETSEL_Random = 1,
    BONESOCKETSEL_MAX = 2,
};

enum ELocationBoneSocketSource {
    BONESOCKETSOURCE_Bones = 0,
    BONESOCKETSOURCE_Sockets = 1,
    BONESOCKETSOURCE_MAX = 2,
};

enum ELocationEmitterSelectionMethod {
    ELESM_Random = 0,
    ELESM_Sequential = 1,
    ELESM_MAX = 2,
};

enum ELocationSkelVertSurfaceSource {
    VERTSURFACESOURCE_Vert = 0,
    VERTSURFACESOURCE_Surface = 1,
    VERTSURFACESOURCE_MAX = 2,
};

enum class ELumenRayLightingMode {
    SurfaceCache = 0,
    HitLighting = 2,
    ELumenRayLightingMode_MAX = 3,
};

enum class ELumenRayLightingModeOverride {
    Default = 0,
    SurfaceCache = 1,
    HitLighting = 2,
    ELumenRayLightingModeOverride_MAX = 3,
};

namespace ELumenSoftwareTracingMode {
    enum Type {
        DetailTracing = 1,
        GlobalTracing = 0,
        ELumenSoftwareTracingMode_MAX = 2,
    };
}

enum class EMIDCreationFlags {
    None = 0,
    Transient = 1,
    EMIDCreationFlags_MAX = 2,
};

namespace EMaterialAttributeBlend {
    enum Type {
        Blend = 0,
        UseA = 1,
        UseB = 2,
        EMaterialAttributeBlend_MAX = 3,
    };
}

enum EMaterialDecalResponse {
    MDR_None = 0,
    MDR_ColorNormalRoughness = 1,
    MDR_Color = 2,
    MDR_ColorNormal = 3,
    MDR_ColorRoughness = 4,
    MDR_Normal = 5,
    MDR_NormalRoughness = 6,
    MDR_Roughness = 7,
    MDR_MAX = 8,
};

enum EMaterialDomain {
    MD_Surface = 0,
    MD_DeferredDecal = 1,
    MD_LightFunction = 2,
    MD_Volume = 3,
    MD_PostProcess = 4,
    MD_UI = 5,
    MD_RuntimeVirtualTexture = 6,
    MD_MAX = 7,
};

enum EMaterialExposedTextureProperty {
    TMTM_TextureSize = 0,
    TMTM_TexelSize = 1,
    TMTM_MAX = 2,
};

enum EMaterialExposedViewProperty {
    MEVP_BufferSize = 0,
    MEVP_FieldOfView = 1,
    MEVP_TanHalfFieldOfView = 2,
    MEVP_ViewSize = 3,
    MEVP_WorldSpaceViewPosition = 4,
    MEVP_WorldSpaceCameraPosition = 5,
    MEVP_ViewportOffset = 6,
    MEVP_TemporalSampleCount = 7,
    MEVP_TemporalSampleIndex = 8,
    MEVP_TemporalSampleOffset = 9,
    MEVP_RuntimeVirtualTextureOutputLevel = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative = 11,
    MEVP_PreExposure = 12,
    MEVP_RuntimeVirtualTextureMaxLevel = 13,
    MEVP_ResolutionFraction = 14,
    MEVP_MAX = 15,
};

enum EMaterialFloatPrecisionMode {
    MFPM_Default = 0,
    MFPM_Full_MaterialExpressionOnly = 1,
    MFPM_Full = 2,
    MFPM_Half = 3,
    MFPM_MAX = 4,
};

enum class EMaterialFunctionUsage {
    Default = 0,
    MaterialLayer = 1,
    MaterialLayerBlend = 2,
    EMaterialFunctionUsage_MAX = 3,
};

enum class EMaterialLayerLinkState {
    Uninitialized = 0,
    LinkedToParent = 1,
    UnlinkedFromParent = 2,
    NotFromParent = 3,
    EMaterialLayerLinkState_MAX = 4,
};

enum EMaterialMergeType {
    MaterialMergeType_Default = 0,
    MaterialMergeType_Simplygon = 1,
    MaterialMergeType_MAX = 2,
};

enum EMaterialParameterAssociation {
    LayerParameter = 0,
    BlendParameter = 1,
    GlobalParameter = 2,
    EMaterialParameterAssociation_MAX = 3,
};

enum EMaterialPositionTransformSource {
    TRANSFORMPOSSOURCE_Local = 0,
    TRANSFORMPOSSOURCE_World = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld = 2,
    TRANSFORMPOSSOURCE_View = 3,
    TRANSFORMPOSSOURCE_Camera = 4,
    TRANSFORMPOSSOURCE_Particle = 5,
    TRANSFORMPOSSOURCE_Instance = 6,
    TRANSFORMPOSSOURCE_MAX = 7,
};

enum EMaterialProperty {
    MP_EmissiveColor = 0,
    MP_Opacity = 1,
    MP_OpacityMask = 2,
    MP_DiffuseColor = 3,
    MP_SpecularColor = 4,
    MP_BaseColor = 5,
    MP_Metallic = 6,
    MP_Specular = 7,
    MP_Roughness = 8,
    MP_Anisotropy = 9,
    MP_Normal = 10,
    MP_Tangent = 11,
    MP_WorldPositionOffset = 12,
    MP_WorldDisplacement_DEPRECATED = 13,
    MP_TessellationMultiplier_DEPRECATED = 14,
    MP_SubsurfaceColor = 15,
    MP_CustomData0 = 16,
    MP_CustomData1 = 17,
    MP_AmbientOcclusion = 18,
    MP_Refraction = 19,
    MP_CustomizedUVs0 = 20,
    MP_CustomizedUVs1 = 21,
    MP_CustomizedUVs2 = 22,
    MP_CustomizedUVs3 = 23,
    MP_CustomizedUVs4 = 24,
    MP_CustomizedUVs5 = 25,
    MP_CustomizedUVs6 = 26,
    MP_CustomizedUVs7 = 27,
    MP_PixelDepthOffset = 28,
    MP_ShadingModel = 29,
    MP_FrontMaterial = 30,
    MP_MaterialAttributes = 31,
    MP_CustomOutput = 32,
    MP_MAX = 33,
};

enum EMaterialSamplerType {
    SAMPLERTYPE_Color = 0,
    SAMPLERTYPE_Grayscale = 1,
    SAMPLERTYPE_Alpha = 2,
    SAMPLERTYPE_Normal = 3,
    SAMPLERTYPE_Masks = 4,
    SAMPLERTYPE_DistanceFieldFont = 5,
    SAMPLERTYPE_LinearColor = 6,
    SAMPLERTYPE_LinearGrayscale = 7,
    SAMPLERTYPE_Data = 8,
    SAMPLERTYPE_External = 9,
    SAMPLERTYPE_VirtualColor = 10,
    SAMPLERTYPE_VirtualGrayscale = 11,
    SAMPLERTYPE_VirtualAlpha = 12,
    SAMPLERTYPE_VirtualNormal = 13,
    SAMPLERTYPE_VirtualMasks = 14,
    SAMPLERTYPE_VirtualLinearColor = 15,
    SAMPLERTYPE_VirtualLinearGrayscale = 16,
    SAMPLERTYPE_MAX = 17,
};

namespace EMaterialSceneAttributeInputMode {
    enum Type {
        Coordinates = 0,
        OffsetFraction = 1,
        EMaterialSceneAttributeInputMode_MAX = 2,
    };
}

enum EMaterialShadingModel {
    MSM_Unlit = 0,
    MSM_DefaultLit = 1,
    MSM_Subsurface = 2,
    MSM_PreintegratedSkin = 3,
    MSM_ClearCoat = 4,
    MSM_SubsurfaceProfile = 5,
    MSM_TwoSidedFoliage = 6,
    MSM_Hair = 7,
    MSM_Cloth = 8,
    MSM_Eye = 9,
    MSM_SingleLayerWater = 10,
    MSM_ThinTranslucent = 11,
    MSM_Strata = 12,
    MSM_NUM = 13,
    MSM_FromMaterialExpression = 14,
    MSM_MAX = 15,
};

enum EMaterialShadingRate {
    MSR_1x1 = 0,
    MSR_2x1 = 1,
    MSR_1x2 = 2,
    MSR_2x2 = 3,
    MSR_4x2 = 4,
    MSR_2x4 = 5,
    MSR_4x4 = 6,
    MSR_Count = 7,
    MSR_MAX = 8,
};

enum EMaterialStencilCompare {
    MSC_Less = 0,
    MSC_LessEqual = 1,
    MSC_Greater = 2,
    MSC_GreaterEqual = 3,
    MSC_Equal = 4,
    MSC_NotEqual = 5,
    MSC_Never = 6,
    MSC_Always = 7,
    MSC_Count = 8,
    MSC_MAX = 9,
};

enum EMaterialTranslucencyPass {
    MTP_BeforeDOF = 0,
    MTP_AfterDOF = 1,
    MTP_AfterMotionBlur = 2,
    MTP_MAX = 3,
};

enum EMaterialUsage {
    MATUSAGE_SkeletalMesh = 0,
    MATUSAGE_ParticleSprites = 1,
    MATUSAGE_BeamTrails = 2,
    MATUSAGE_MeshParticles = 3,
    MATUSAGE_StaticLighting = 4,
    MATUSAGE_MorphTargets = 5,
    MATUSAGE_SplineMesh = 6,
    MATUSAGE_InstancedStaticMeshes = 7,
    MATUSAGE_GeometryCollections = 8,
    MATUSAGE_Clothing = 9,
    MATUSAGE_NiagaraSprites = 10,
    MATUSAGE_NiagaraRibbons = 11,
    MATUSAGE_NiagaraMeshParticles = 12,
    MATUSAGE_GeometryCache = 13,
    MATUSAGE_Water = 14,
    MATUSAGE_HairStrands = 15,
    MATUSAGE_LidarPointCloud = 16,
    MATUSAGE_VirtualHeightfieldMesh = 17,
    MATUSAGE_Nanite = 18,
    MATUSAGE_MAX = 19,
};

enum EMaterialVectorCoordTransform {
    TRANSFORM_Tangent = 0,
    TRANSFORM_Local = 1,
    TRANSFORM_World = 2,
    TRANSFORM_View = 3,
    TRANSFORM_Camera = 4,
    TRANSFORM_ParticleWorld = 5,
    TRANSFORM_Instance = 6,
    TRANSFORM_MAX = 7,
};

enum EMaterialVectorCoordTransformSource {
    TRANSFORMSOURCE_Tangent = 0,
    TRANSFORMSOURCE_Local = 1,
    TRANSFORMSOURCE_World = 2,
    TRANSFORMSOURCE_View = 3,
    TRANSFORMSOURCE_Camera = 4,
    TRANSFORMSOURCE_ParticleWorld = 5,
    TRANSFORMSOURCE_Instance = 6,
    TRANSFORMSOURCE_MAX = 7,
};

namespace EMatrixColumns {
    enum Type {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        EMatrixColumns_MAX = 4,
    };
}

namespace EMaxConcurrentResolutionRule {
    enum Type {
        PreventNew = 0,
        StopOldest = 1,
        StopFarthestThenPreventNew = 2,
        StopFarthestThenOldest = 3,
        StopLowestPriority = 4,
        StopQuietest = 5,
        StopLowestPriorityThenPreventNew = 6,
        Count = 7,
        EMaxConcurrentResolutionRule_MAX = 8,
    };
}

enum class EMeshApproximationBaseCappingType {
    NoBaseCapping = 0,
    ConvexPolygon = 1,
    ConvexSolid = 2,
    EMeshApproximationBaseCappingType_MAX = 3,
};

enum class EMeshApproximationGroundPlaneClippingPolicy {
    NoGroundClipping = 0,
    DiscardWithZPlane = 1,
    CutWithZPlane = 2,
    CutAndFillWithZPlane = 3,
    EMeshApproximationGroundPlaneClippingPolicy_MAX = 4,
};

enum class EMeshApproximationSimplificationPolicy {
    FixedTriangleCount = 0,
    TrianglesPerArea = 1,
    GeometricTolerance = 2,
    EMeshApproximationSimplificationPolicy_MAX = 3,
};

enum class EMeshApproximationType {
    MeshAndMaterials = 0,
    MeshShapeOnly = 1,
    EMeshApproximationType_MAX = 2,
};

enum class EMeshApproximationUVGenerationPolicy {
    PreferUVAtlas = 0,
    PreferXAtlas = 1,
    PreferPatchBuilder = 2,
    EMeshApproximationUVGenerationPolicy_MAX = 3,
};

enum class EMeshBufferAccess {
    Default = 0,
    ForceCPUAndGPU = 1,
    EMeshBufferAccess_MAX = 2,
};

enum EMeshCameraFacingOptions {
    XAxisFacing_NoUp = 0,
    XAxisFacing_ZUp = 1,
    XAxisFacing_NegativeZUp = 2,
    XAxisFacing_YUp = 3,
    XAxisFacing_NegativeYUp = 4,
    LockedAxis_ZAxisFacing = 5,
    LockedAxis_NegativeZAxisFacing = 6,
    LockedAxis_YAxisFacing = 7,
    LockedAxis_NegativeYAxisFacing = 8,
    VelocityAligned_ZAxisFacing = 9,
    VelocityAligned_NegativeZAxisFacing = 10,
    VelocityAligned_YAxisFacing = 11,
    VelocityAligned_NegativeYAxisFacing = 12,
    EMeshCameraFacingOptions_MAX = 13,
};

enum EMeshCameraFacingUpAxis {
    CameraFacing_NoneUP = 0,
    CameraFacing_ZUp = 1,
    CameraFacing_NegativeZUp = 2,
    CameraFacing_YUp = 3,
    CameraFacing_NegativeYUp = 4,
    CameraFacing_MAX = 5,
};

namespace EMeshFeatureImportance {
    enum Type {
        Off = 0,
        Lowest = 1,
        Low = 2,
        Normal = 3,
        High = 4,
        Highest = 5,
        EMeshFeatureImportance_MAX = 6,
    };
}

enum class EMeshLODSelectionType {
    AllLODs = 0,
    SpecificLOD = 1,
    CalculateLOD = 2,
    LowestDetailLOD = 3,
    EMeshLODSelectionType_MAX = 4,
};

enum class EMeshMergeType {
    MeshMergeType_Default = 0,
    MeshMergeType_MergeActor = 1,
    MeshMergeType_MAX = 2,
};

enum EMeshScreenAlignment {
    PSMA_MeshFaceCameraWithRoll = 0,
    PSMA_MeshFaceCameraWithSpin = 1,
    PSMA_MeshFaceCameraWithLockedAxis = 2,
    PSMA_MAX = 3,
};

enum EMicroTransactionDelegate {
    MTD_PurchaseQueryComplete = 0,
    MTD_PurchaseComplete = 1,
    MTD_MAX = 2,
};

enum EMicroTransactionResult {
    MTR_Succeeded = 0,
    MTR_Failed = 1,
    MTR_Canceled = 2,
    MTR_RestoredFromServer = 3,
    MTR_MAX = 4,
};

namespace EMirrorFindReplaceMethod {
    enum Type {
        Prefix = 0,
        Suffix = 1,
        RegularExpression = 2,
        EMirrorFindReplaceMethod_MAX = 3,
    };
}

namespace EMirrorRowType {
    enum Type {
        Bone = 0,
        AnimationNotify = 1,
        Curve = 2,
        SyncMarker = 3,
        Custom = 4,
        EMirrorRowType_MAX = 5,
    };
}

namespace EMobileAntiAliasingMethod {
    enum Type {
        None = 0,
        FXAA = 1,
        TemporalAA = 2,
        MSAA = 3,
        EMobileAntiAliasingMethod_MAX = 4,
    };
}

namespace EMobileFloatPrecisionMode {
    enum Type {
        Half = 0,
        Full_MaterialExpressionOnly = 1,
        Full = 2,
        EMobileFloatPrecisionMode_MAX = 3,
    };
}

namespace EMobilePixelProjectedReflectionQuality {
    enum Type {
        Disabled = 0,
        BestPerformance = 1,
        BetterQuality = 2,
        BestQuality = 3,
        EMobilePixelProjectedReflectionQuality_MAX = 4,
    };
}

namespace EMobilePlanarReflectionMode {
    enum Type {
        Usual = 0,
        MobilePPRExclusive = 1,
        MobilePPR = 2,
        EMobilePlanarReflectionMode_MAX = 3,
    };
}

namespace EMobileShadingPath {
    enum Type {
        Forward = 0,
        Deferred = 1,
        EMobileShadingPath_MAX = 2,
    };
}

enum class EModulationRouting {
    Disable = 0,
    Inherit = 1,
    Override = 2,
    Union = 3,
    EModulationRouting_MAX = 4,
};

enum EModuleType {
    EPMT_General = 0,
    EPMT_TypeData = 1,
    EPMT_Beam = 2,
    EPMT_Trail = 3,
    EPMT_Spawn = 4,
    EPMT_Required = 5,
    EPMT_Event = 6,
    EPMT_Light = 7,
    EPMT_SubUV = 8,
    EPMT_MAX = 9,
};

enum class EMonoChannelUpmixMethod {
    Linear = 0,
    EqualPower = 1,
    FullVolume = 2,
    EMonoChannelUpmixMethod_MAX = 3,
};

enum class EMontageBlendMode {
    Standard = 0,
    Inertialization = 1,
    EMontageBlendMode_MAX = 2,
};

namespace EMontageNotifyTickType {
    enum Type {
        Queued = 0,
        BranchingPoint = 1,
        EMontageNotifyTickType_MAX = 2,
    };
}

enum class EMontagePlayReturnType {
    MontageLength = 0,
    Duration = 1,
    EMontagePlayReturnType_MAX = 2,
};

enum class EMontageSubStepResult {
    Moved = 0,
    NotMoved = 1,
    InvalidSection = 2,
    InvalidMontage = 3,
    EMontageSubStepResult_MAX = 4,
};

enum class EMouseCaptureMode {
    NoCapture = 0,
    CapturePermanently = 1,
    CapturePermanently_IncludingInitialMouseDown = 2,
    CaptureDuringMouseDown = 3,
    CaptureDuringRightMouseDown = 4,
    EMouseCaptureMode_MAX = 5,
};

enum class EMouseLockMode {
    DoNotLock = 0,
    LockOnCapture = 1,
    LockAlways = 2,
    LockInFullscreen = 3,
    EMouseLockMode_MAX = 4,
};

namespace EMoveComponentAction {
    enum Type {
        Move = 0,
        Stop = 1,
        Return = 2,
        EMoveComponentAction_MAX = 3,
    };
}

enum EMovementMode {
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7,
};

enum class ENaturalSoundFalloffMode {
    Continues = 0,
    Silent = 1,
    Hold = 2,
    ENaturalSoundFalloffMode_MAX = 3,
};

enum class ENavDataGatheringMode {
    Default = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringMode_MAX = 3,
};

enum class ENavDataGatheringModeConfig {
    Invalid = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringModeConfig_MAX = 3,
};

namespace ENavLinkDirection {
    enum Type {
        BothWays = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ENavLinkDirection_MAX = 3,
    };
}

namespace ENavPathEvent {
    enum Type {
        Cleared = 0,
        NewPath = 1,
        UpdatedDueToGoalMoved = 2,
        UpdatedDueToNavigationChanged = 3,
        Invalidated = 4,
        RePathFailed = 5,
        MetaPathUpdate = 6,
        Custom = 7,
        ENavPathEvent_MAX = 8,
    };
}

namespace ENavigationOptionFlag {
    enum Type {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3,
    };
}

namespace ENavigationQueryResult {
    enum Type {
        Invalid = 0,
        Error = 1,
        Fail = 2,
        Success = 3,
        ENavigationQueryResult_MAX = 4,
    };
}

enum ENetDormancy {
    DORM_Never = 0,
    DORM_Awake = 1,
    DORM_DormantAll = 2,
    DORM_DormantPartial = 3,
    DORM_Initial = 4,
    DORM_MAX = 5,
};

enum ENetRole {
    ROLE_None = 0,
    ROLE_SimulatedProxy = 1,
    ROLE_AutonomousProxy = 2,
    ROLE_Authority = 3,
    ROLE_MAX = 4,
};

namespace ENetworkLagState {
    enum Type {
        NotLagging = 0,
        Lagging = 1,
        ENetworkLagState_MAX = 2,
    };
}

enum class ENetworkSmoothingMode {
    Disabled = 0,
    Linear = 1,
    Exponential = 2,
    ENetworkSmoothingMode_MAX = 3,
};

namespace ENodeAdvancedPins {
    enum Type {
        NoPins = 0,
        Shown = 1,
        Hidden = 2,
        ENodeAdvancedPins_MAX = 3,
    };
}

enum class ENodeEnabledState {
    Enabled = 0,
    Disabled = 1,
    DevelopmentOnly = 2,
    ENodeEnabledState_MAX = 3,
};

namespace ENodeTitleType {
    enum Type {
        FullTitle = 0,
        ListView = 1,
        EditableTitle = 2,
        MenuTitle = 3,
        MAX_TitleTypes = 4,
        ENodeTitleType_MAX = 5,
    };
}

enum ENoiseFunction {
    NOISEFUNCTION_SimplexTex = 0,
    NOISEFUNCTION_GradientTex = 1,
    NOISEFUNCTION_GradientTex3D = 2,
    NOISEFUNCTION_GradientALU = 3,
    NOISEFUNCTION_ValueALU = 4,
    NOISEFUNCTION_VoronoiALU = 5,
    NOISEFUNCTION_MAX = 6,
};

enum ENormalMode {
    NM_PreserveSmoothingGroups = 0,
    NM_RecalculateNormals = 1,
    NM_RecalculateNormalsSmooth = 2,
    NM_RecalculateNormalsHard = 3,
    TEMP_BROKEN = 4,
    ENormalMode_MAX = 5,
};

namespace ENotifyFilterType {
    enum Type {
        NoFiltering = 0,
        LOD = 1,
        ENotifyFilterType_MAX = 2,
    };
}

namespace ENotifyTriggerMode {
    enum Type {
        AllAnimations = 0,
        HighestWeightedAnimation = 1,
        None = 2,
        ENotifyTriggerMode_MAX = 3,
    };
}

enum EObjectTypeQuery {
    ObjectTypeQuery1 = 0,
    ObjectTypeQuery2 = 1,
    ObjectTypeQuery3 = 2,
    ObjectTypeQuery4 = 3,
    ObjectTypeQuery5 = 4,
    ObjectTypeQuery6 = 5,
    ObjectTypeQuery7 = 6,
    ObjectTypeQuery8 = 7,
    ObjectTypeQuery9 = 8,
    ObjectTypeQuery10 = 9,
    ObjectTypeQuery11 = 10,
    ObjectTypeQuery12 = 11,
    ObjectTypeQuery13 = 12,
    ObjectTypeQuery14 = 13,
    ObjectTypeQuery15 = 14,
    ObjectTypeQuery16 = 15,
    ObjectTypeQuery17 = 16,
    ObjectTypeQuery18 = 17,
    ObjectTypeQuery19 = 18,
    ObjectTypeQuery20 = 19,
    ObjectTypeQuery21 = 20,
    ObjectTypeQuery22 = 21,
    ObjectTypeQuery23 = 22,
    ObjectTypeQuery24 = 23,
    ObjectTypeQuery25 = 24,
    ObjectTypeQuery26 = 25,
    ObjectTypeQuery27 = 26,
    ObjectTypeQuery28 = 27,
    ObjectTypeQuery29 = 28,
    ObjectTypeQuery30 = 29,
    ObjectTypeQuery31 = 30,
    ObjectTypeQuery32 = 31,
    ObjectTypeQuery_MAX = 32,
    EObjectTypeQuery_MAX = 33,
};

enum class EOccludedGeometryFilteringPolicy {
    NoOcclusionFiltering = 0,
    VisibilityBasedFiltering = 1,
    EOccludedGeometryFilteringPolicy_MAX = 2,
};

enum EOcclusionCombineMode {
    OCM_Minimum = 0,
    OCM_Multiply = 1,
    OCM_MAX = 2,
};

enum EOpacitySourceMode {
    OSM_Alpha = 0,
    OSM_ColorBrightness = 1,
    OSM_RedChannel = 2,
    OSM_GreenChannel = 3,
    OSM_BlueChannel = 4,
    OSM_MAX = 5,
};

enum EOptimizationType {
    OT_NumOfTriangles = 0,
    OT_MaxDeviation = 1,
    OT_MAX = 2,
};

enum EOrbitChainMode {
    EOChainMode_Add = 0,
    EOChainMode_Scale = 1,
    EOChainMode_Link = 2,
    EOChainMode_MAX = 3,
};

enum EOverlapFilterOption {
    OverlapFilter_All = 0,
    OverlapFilter_DynamicOnly = 1,
    OverlapFilter_StaticOnly = 2,
    OverlapFilter_MAX = 3,
};

enum class EPSCPoolMethod {
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    EPSCPoolMethod_MAX = 5,
};

enum class EPanningMethod {
    Linear = 0,
    EqualPower = 1,
    EPanningMethod_MAX = 2,
};

enum EParticleAxisLock {
    EPAL_NONE = 0,
    EPAL_X = 1,
    EPAL_Y = 2,
    EPAL_Z = 3,
    EPAL_NEGATIVE_X = 4,
    EPAL_NEGATIVE_Y = 5,
    EPAL_NEGATIVE_Z = 6,
    EPAL_ROTATE_X = 7,
    EPAL_ROTATE_Y = 8,
    EPAL_ROTATE_Z = 9,
    EPAL_MAX = 10,
};

enum EParticleBurstMethod {
    EPBM_Instant = 0,
    EPBM_Interpolated = 1,
    EPBM_MAX = 2,
};

enum EParticleCameraOffsetUpdateMethod {
    EPCOUM_DirectSet = 0,
    EPCOUM_Additive = 1,
    EPCOUM_Scalar = 2,
    EPCOUM_MAX = 3,
};

enum EParticleCollisionComplete {
    EPCC_Kill = 0,
    EPCC_Freeze = 1,
    EPCC_HaltCollisions = 2,
    EPCC_FreezeTranslation = 3,
    EPCC_FreezeRotation = 4,
    EPCC_FreezeMovement = 5,
    EPCC_MAX = 6,
};

namespace EParticleCollisionMode {
    enum Type {
        SceneDepth = 0,
        DistanceField = 1,
        EParticleCollisionMode_MAX = 2,
    };
}

namespace EParticleCollisionResponse {
    enum Type {
        Bounce = 0,
        Stop = 1,
        Kill = 2,
        EParticleCollisionResponse_MAX = 3,
    };
}

enum EParticleDetailMode {
    PDM_Low = 0,
    PDM_Medium = 1,
    PDM_High = 2,
    PDM_MAX = 3,
};

enum EParticleEventType {
    EPET_Any = 0,
    EPET_Spawn = 1,
    EPET_Death = 2,
    EPET_Collision = 3,
    EPET_Burst = 4,
    EPET_Blueprint = 5,
    EPET_MAX = 6,
};

enum EParticleScreenAlignment {
    PSA_FacingCameraPosition = 0,
    PSA_Square = 1,
    PSA_Rectangle = 2,
    PSA_Velocity = 3,
    PSA_AwayFromCenter = 4,
    PSA_TypeSpecific = 5,
    PSA_FacingCameraDistanceBlend = 6,
    PSA_MAX = 7,
};

enum class EParticleSignificanceLevel {
    Low = 0,
    Medium = 1,
    High = 2,
    Critical = 3,
    Num = 4,
    EParticleSignificanceLevel_MAX = 5,
};

enum EParticleSortMode {
    PSORTMODE_None = 0,
    PSORTMODE_ViewProjDepth = 1,
    PSORTMODE_DistanceToView = 2,
    PSORTMODE_Age_OldestFirst = 3,
    PSORTMODE_Age_NewestFirst = 4,
    PSORTMODE_MAX = 5,
};

enum EParticleSourceSelectionMethod {
    EPSSM_Random = 0,
    EPSSM_Sequential = 1,
    EPSSM_MAX = 2,
};

enum EParticleSubUVInterpMethod {
    PSUVIM_None = 0,
    PSUVIM_Linear = 1,
    PSUVIM_Linear_Blend = 2,
    PSUVIM_Random = 3,
    PSUVIM_Random_Blend = 4,
    PSUVIM_MAX = 5,
};

enum EParticleSysParamType {
    PSPT_None = 0,
    PSPT_Scalar = 1,
    PSPT_ScalarRand = 2,
    PSPT_Vector = 3,
    PSPT_VectorRand = 4,
    PSPT_Color = 5,
    PSPT_Actor = 6,
    PSPT_Material = 7,
    PSPT_VectorUnitRand = 8,
    PSPT_MAX = 9,
};

enum class EParticleSystemInsignificanceReaction {
    Auto = 0,
    Complete = 1,
    DisableTick = 2,
    DisableTickAndKill = 3,
    Num = 4,
    EParticleSystemInsignificanceReaction_MAX = 5,
};

enum EParticleSystemOcclusionBoundsMethod {
    EPSOBM_None = 0,
    EPSOBM_ParticleBounds = 1,
    EPSOBM_CustomBounds = 2,
    EPSOBM_MAX = 3,
};

enum EParticleSystemUpdateMode {
    EPSUM_RealTime = 0,
    EPSUM_FixedTime = 1,
    EPSUM_MAX = 2,
};

enum class EParticleUVFlipMode {
    None = 0,
    FlipUV = 1,
    FlipUOnly = 2,
    FlipVOnly = 3,
    RandomFlipUV = 4,
    RandomFlipUOnly = 5,
    RandomFlipVOnly = 6,
    RandomFlipUVIndependent = 7,
    EParticleUVFlipMode_MAX = 8,
};

enum class EPerQualityLevels {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    Num = 5,
    EPerQualityLevels_MAX = 6,
};

enum EPhysBodyOp {
    PBO_None = 0,
    PBO_Term = 1,
    PBO_MAX = 2,
};

namespace EPhysicalMaterialMaskColor {
    enum Type {
        Red = 0,
        Green = 1,
        Blue = 2,
        Cyan = 3,
        Magenta = 4,
        Yellow = 5,
        White = 6,
        Black = 7,
        MAX = 8,
    };
}

enum class EPhysicsAssetSolverType {
    RBAN = 0,
    World = 1,
    EPhysicsAssetSolverType_MAX = 2,
};

namespace EPhysicsTransformUpdateMode {
    enum Type {
        SimulationUpatesComponentTransform = 0,
        ComponentTransformIsKinematic = 1,
        EPhysicsTransformUpdateMode_MAX = 2,
    };
}

enum class EPinContainerType {
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
    EPinContainerType_MAX = 4,
};

namespace EPinHidingMode {
    enum Type {
        NeverAsPin = 0,
        PinHiddenByDefault = 1,
        PinShownByDefault = 2,
        AlwaysAsPin = 3,
        EPinHidingMode_MAX = 4,
    };
}

enum class EPingAverageType {
    None = 0,
    MovingAverage = 1,
    PlayerStateAvg = 2,
    EPingAverageType_MAX = 3,
};

enum class EPingType {
    None = 0,
    RoundTrip = 1,
    RoundTripExclFrame = 2,
    ICMP = 4,
    UDPQoS = 8,
    Max = 8,
    Count = 4,
};

enum class EPlaneConstraintAxisSetting {
    Custom = 0,
    X = 1,
    Y = 2,
    Z = 3,
    UseGlobalPhysicsSetting = 4,
    EPlaneConstraintAxisSetting_MAX = 5,
};

enum EPlatformInterfaceDataType {
    PIDT_None = 0,
    PIDT_Int = 1,
    PIDT_Float = 2,
    PIDT_String = 3,
    PIDT_Object = 4,
    PIDT_Custom = 5,
    PIDT_MAX = 6,
};

enum class EPostCopyOperation {
    None = 0,
    LogicalNegateBool = 1,
    EPostCopyOperation_MAX = 2,
};

enum class EPreferredTriangulationDirection {
    None = 0,
    Tangential = 1,
    Radial = 2,
    EPreferredTriangulationDirection_MAX = 3,
};

enum class EPreviewAnimationBlueprintApplicationMethod {
    LinkedLayers = 0,
    LinkedAnimGraph = 1,
    EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
};

enum class EPrimaryAssetCookRule {
    Unknown = 0,
    NeverCook = 1,
    DevelopmentCook = 2,
    DevelopmentAlwaysCook = 3,
    AlwaysCook = 4,
    EPrimaryAssetCookRule_MAX = 5,
};

enum class EPriorityAttenuationMethod {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    EPriorityAttenuationMethod_MAX = 3,
};

enum class EPropertyAccessCopyBatch {
    InternalUnbatched = 0,
    ExternalUnbatched = 1,
    InternalBatched = 2,
    ExternalBatched = 3,
    Count = 4,
    EPropertyAccessCopyBatch_MAX = 5,
};

enum class EPropertyAccessCopyType {
    None = 0,
    Plain = 1,
    Complex = 2,
    Bool = 3,
    Struct = 4,
    Object = 5,
    Name = 6,
    Array = 7,
    PromoteBoolToByte = 8,
    PromoteBoolToInt32 = 9,
    PromoteBoolToInt64 = 10,
    PromoteBoolToFloat = 11,
    PromoteBoolToDouble = 12,
    PromoteByteToInt32 = 13,
    PromoteByteToInt64 = 14,
    PromoteByteToFloat = 15,
    PromoteByteToDouble = 16,
    PromoteInt32ToInt64 = 17,
    PromoteInt32ToFloat = 18,
    PromoteInt32ToDouble = 19,
    PromoteFloatToDouble = 20,
    DemoteDoubleToFloat = 21,
    PromoteArrayFloatToDouble = 22,
    DemoteArrayDoubleToFloat = 23,
    PromoteMapValueFloatToDouble = 24,
    DemoteMapValueDoubleToFloat = 25,
    EPropertyAccessCopyType_MAX = 26,
};

enum class EPropertyAccessIndirectionType {
    Offset = 0,
    Object = 1,
    Array = 2,
    ScriptFunction = 3,
    NativeFunction = 4,
    EPropertyAccessIndirectionType_MAX = 5,
};

enum class EPropertyAccessObjectType {
    None = 0,
    Object = 1,
    WeakObject = 2,
    SoftObject = 3,
    EPropertyAccessObjectType_MAX = 4,
};

namespace EProxyNormalComputationMethod {
    enum Type {
        AngleWeighted = 0,
        AreaWeighted = 1,
        EqualWeighted = 2,
        EProxyNormalComputationMethod_MAX = 3,
    };
}

enum class EQuartzCommandDelegateSubType {
    CommandOnFailedToQueue = 0,
    CommandOnQueued = 1,
    CommandOnCanceled = 2,
    CommandOnAboutToStart = 3,
    CommandOnStarted = 4,
    Count = 5,
    EQuartzCommandDelegateSubType_MAX = 6,
};

enum class EQuartzCommandQuantization {
    Bar = 0,
    Beat = 1,
    ThirtySecondNote = 2,
    SixteenthNote = 3,
    EighthNote = 4,
    QuarterNote = 5,
    HalfNote = 6,
    WholeNote = 7,
    DottedSixteenthNote = 8,
    DottedEighthNote = 9,
    DottedQuarterNote = 10,
    DottedHalfNote = 11,
    DottedWholeNote = 12,
    SixteenthNoteTriplet = 13,
    EighthNoteTriplet = 14,
    QuarterNoteTriplet = 15,
    HalfNoteTriplet = 16,
    Tick = 17,
    Count = 18,
    None = 19,
    EQuartzCommandQuantization_MAX = 20,
};

enum class EQuartzCommandType {
    PlaySound = 0,
    QueueSoundToPlay = 1,
    RetriggerSound = 2,
    TickRateChange = 3,
    TransportReset = 4,
    StartOtherClock = 5,
    Custom = 6,
    EQuartzCommandType_MAX = 7,
};

enum class EQuartzDelegateType {
    MetronomeTick = 0,
    CommandEvent = 1,
    Count = 2,
    EQuartzDelegateType_MAX = 3,
};

enum class EQuartzTimeSignatureQuantization {
    HalfNote = 0,
    QuarterNote = 1,
    EighthNote = 2,
    SixteenthNote = 3,
    ThirtySecondNote = 4,
    Count = 5,
    EQuartzTimeSignatureQuantization_MAX = 6,
};

enum class EQuarztQuantizationReference {
    BarRelative = 0,
    TransportRelative = 1,
    CurrentTimeRelative = 2,
    Count = 3,
    EQuarztQuantizationReference_MAX = 4,
};

namespace EQuitPreference {
    enum Type {
        Quit = 0,
        Background = 1,
        EQuitPreference_MAX = 2,
    };
}

enum class ERawCurveTrackTypes {
    RCT_Float = 0,
    RCT_Vector = 1,
    RCT_Transform = 2,
    RCT_MAX = 3,
};

enum class ERayTracingGlobalIlluminationType {
    Disabled = 0,
    BruteForce = 1,
    FinalGather = 2,
    ERayTracingGlobalIlluminationType_MAX = 3,
};

enum class ERayTracingGroupCullingPriority {
    CP_0_NEVER_CULL = 0,
    CP_1 = 1,
    CP_2 = 2,
    CP_3 = 3,
    CP_4_DEFAULT = 4,
    CP_5 = 5,
    CP_6 = 6,
    CP_7 = 7,
    CP_8_QUICKLY_CULL = 8,
    CP_MAX = 9,
};

enum class EReflectedAndRefractedRayTracedShadows {
    Disabled = 0,
    Hard_shadows = 1,
    Area_shadows = 2,
    EReflectedAndRefractedRayTracedShadows_MAX = 3,
};

namespace EReflectionMethod {
    enum Type {
        None = 0,
        Lumen = 1,
        ScreenSpace = 2,
        RayTraced = 3,
        EReflectionMethod_MAX = 4,
    };
}

enum class EReflectionSourceType {
    CapturedScene = 0,
    SpecifiedCubemap = 1,
    EReflectionSourceType_MAX = 2,
};

enum class EReflectionsType {
    ScreenSpace = 0,
    RayTracing = 1,
    EReflectionsType_MAX = 2,
};

enum ERefractionMode {
    RM_IndexOfRefraction = 0,
    RM_PixelNormalOffset = 1,
    RM_MAX = 2,
};

enum ERelativeTransformSpace {
    RTS_World = 0,
    RTS_Actor = 1,
    RTS_Component = 2,
    RTS_ParentBoneSpace = 3,
    RTS_MAX = 4,
};

enum class ERenderFocusRule {
    Always = 0,
    NonPointer = 1,
    NavigationOnly = 2,
    Never = 3,
    ERenderFocusRule_MAX = 4,
};

enum class ERendererStencilMask {
    ERSM_Default = 0,
    ERSM_255 = 1,
    ERSM_1 = 2,
    ERSM_2 = 3,
    ERSM_4 = 4,
    ERSM_8 = 5,
    ERSM_16 = 6,
    ERSM_32 = 7,
    ERSM_64 = 8,
    ERSM_128 = 9,
    ERSM_MAX = 10,
};

enum class EReplayResult {
    Success = 0,
    ReplayNotFound = 1,
    Corrupt = 2,
    UnsupportedCheckpoint = 3,
    GameSpecific = 4,
    InitConnect = 5,
    LoadMap = 6,
    Serialization = 7,
    StreamerError = 8,
    ConnectionClosed = 9,
    MissingArchive = 10,
    Unknown = 11,
    EReplayResult_MAX = 12,
};

namespace EReporterLineStyle {
    enum Type {
        Line = 0,
        Dash = 1,
        EReporterLineStyle_MAX = 2,
    };
}

enum class EReverbSendMethod {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    EReverbSendMethod_MAX = 3,
};

enum ERichCurveCompressionFormat {
    RCCF_Empty = 0,
    RCCF_Constant = 1,
    RCCF_Linear = 2,
    RCCF_Cubic = 3,
    RCCF_Mixed = 4,
    RCCF_Weighted = 5,
    RCCF_MAX = 6,
};

enum ERichCurveExtrapolation {
    RCCE_Cycle = 0,
    RCCE_CycleWithOffset = 1,
    RCCE_Oscillate = 2,
    RCCE_Linear = 3,
    RCCE_Constant = 4,
    RCCE_None = 5,
    RCCE_MAX = 6,
};

enum ERichCurveInterpMode {
    RCIM_Linear = 0,
    RCIM_Constant = 1,
    RCIM_Cubic = 2,
    RCIM_None = 3,
    RCIM_MAX = 4,
};

enum ERichCurveKeyTimeCompressionFormat {
    RCKTCF_uint16 = 0,
    RCKTCF_float32 = 1,
    RCKTCF_MAX = 2,
};

enum ERichCurveTangentMode {
    RCTM_Auto = 0,
    RCTM_User = 1,
    RCTM_Break = 2,
    RCTM_None = 3,
    RCTM_MAX = 4,
};

enum ERichCurveTangentWeightMode {
    RCTWM_WeightedNone = 0,
    RCTWM_WeightedArrive = 1,
    RCTWM_WeightedLeave = 2,
    RCTWM_WeightedBoth = 3,
    RCTWM_MAX = 4,
};

enum class ERootMotionAccumulateMode {
    Override = 0,
    Additive = 1,
    ERootMotionAccumulateMode_MAX = 2,
};

enum class ERootMotionFinishVelocityMode {
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ERootMotionFinishVelocityMode_MAX = 3,
};

namespace ERootMotionMode {
    enum Type {
        NoRootMotionExtraction = 0,
        IgnoreRootMotion = 1,
        RootMotionFromEverything = 2,
        RootMotionFromMontagesOnly = 3,
        ERootMotionMode_MAX = 4,
    };
}

namespace ERootMotionRootLock {
    enum Type {
        RefPose = 0,
        AnimFirstFrame = 1,
        Zero = 2,
        ERootMotionRootLock_MAX = 3,
    };
}

enum class ERootMotionSourceSettingsFlags {
    UseSensitiveLiftoffCheck = 1,
    DisablePartialEndTick = 2,
    IgnoreZAccumulate = 4,
    ERootMotionSourceSettingsFlags_MAX = 5,
};

enum class ERootMotionSourceStatusFlags {
    Prepared = 1,
    Finished = 2,
    MarkedForRemoval = 4,
    ERootMotionSourceStatusFlags_MAX = 5,
};

enum class ERotatorQuantization {
    ByteComponents = 0,
    ShortComponents = 1,
    ERotatorQuantization_MAX = 2,
};

enum ERoundingMode {
    HalfToEven = 0,
    HalfFromZero = 1,
    HalfToZero = 2,
    FromZero = 3,
    ToZero = 4,
    ToNegativeInfinity = 5,
    ToPositiveInfinity = 6,
    ERoundingMode_MAX = 7,
};

enum class ERuntimeVirtualTextureMainPassType {
    Never = 0,
    Exclusive = 1,
    Always = 2,
    ERuntimeVirtualTextureMainPassType_MAX = 3,
};

enum class ERuntimeVirtualTextureMaterialType {
    BaseColor = 0,
    BaseColor_Normal_DEPRECATED = 1,
    BaseColor_Normal_Roughness = 2,
    BaseColor_Normal_Specular = 3,
    BaseColor_Normal_Specular_YCoCg = 4,
    BaseColor_Normal_Specular_Mask_YCoCg = 5,
    WorldHeight = 6,
    Count = 7,
    ERuntimeVirtualTextureMaterialType_MAX = 8,
};

enum ERuntimeVirtualTextureMipValueMode {
    RVTMVM_None = 0,
    RVTMVM_MipLevel = 1,
    RVTMVM_MipBias = 2,
    RVTMVM_RecalculateDerivatives = 3,
    RVTMVM_MAX = 4,
};

enum ERuntimeVirtualTextureTextureAddressMode {
    RVTTA_Clamp = 0,
    RVTTA_Wrap = 1,
    RVTTA_MAX = 2,
};

enum ESamplerSourceMode {
    SSM_FromTextureAsset = 0,
    SSM_Wrap_WorldGroupSettings = 1,
    SSM_Clamp_WorldGroupSettings = 2,
    SSM_TerrainWeightmapGroupSettings = 3,
    SSM_MAX = 4,
};

enum ESceneCaptureCompositeMode {
    SCCM_Overwrite = 0,
    SCCM_Additive = 1,
    SCCM_Composite = 2,
    SCCM_MAX = 3,
};

enum class ESceneCapturePrimitiveRenderMode {
    PRM_LegacySceneCapture = 0,
    PRM_RenderScenePrimitives = 1,
    PRM_UseShowOnlyList = 2,
    PRM_MAX = 3,
};

enum ESceneCaptureSource {
    SCS_SceneColorHDR = 0,
    SCS_SceneColorHDRNoAlpha = 1,
    SCS_FinalColorLDR = 2,
    SCS_SceneColorSceneDepth = 3,
    SCS_SceneDepth = 4,
    SCS_DeviceDepth = 5,
    SCS_Normal = 6,
    SCS_BaseColor = 7,
    SCS_FinalColorHDR = 8,
    SCS_FinalToneCurveHDR = 9,
    SCS_MAX = 10,
};

enum ESceneDepthPriorityGroup {
    SDPG_World = 0,
    SDPG_Foreground = 1,
    SDPG_MAX = 2,
};

enum ESceneTextureId {
    PPI_SceneColor = 0,
    PPI_SceneDepth = 1,
    PPI_DiffuseColor = 2,
    PPI_SpecularColor = 3,
    PPI_SubsurfaceColor = 4,
    PPI_BaseColor = 5,
    PPI_Specular = 6,
    PPI_Metallic = 7,
    PPI_WorldNormal = 8,
    PPI_SeparateTranslucency = 9,
    PPI_Opacity = 10,
    PPI_Roughness = 11,
    PPI_MaterialAO = 12,
    PPI_CustomDepth = 13,
    PPI_PostProcessInput0 = 14,
    PPI_PostProcessInput1 = 15,
    PPI_PostProcessInput2 = 16,
    PPI_PostProcessInput3 = 17,
    PPI_PostProcessInput4 = 18,
    PPI_PostProcessInput5 = 19,
    PPI_PostProcessInput6 = 20,
    PPI_DecalMask = 21,
    PPI_ShadingModelColor = 22,
    PPI_ShadingModelID = 23,
    PPI_AmbientOcclusion = 24,
    PPI_CustomStencil = 25,
    PPI_StoredBaseColor = 26,
    PPI_StoredSpecular = 27,
    PPI_Velocity = 28,
    PPI_WorldTangent = 29,
    PPI_Anisotropy = 30,
    PPI_MAX = 31,
};

namespace EScreenOrientation {
    enum Type {
        Unknown = 0,
        Portrait = 1,
        PortraitUpsideDown = 2,
        LandscapeLeft = 3,
        LandscapeRight = 4,
        FaceUp = 5,
        FaceDown = 6,
        PortraitSensor = 7,
        LandscapeSensor = 8,
        FullSensor = 9,
        EScreenOrientation_MAX = 10,
    };
}

enum class EScreenPercentageMode {
    Manual = 0,
    BasedOnDisplayResolution = 1,
    BasedOnDPIScale = 2,
    EScreenPercentageMode_MAX = 3,
};

enum class ESendLevelControlMethod {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESendLevelControlMethod_MAX = 3,
};

namespace ESettingsDOF {
    enum Type {
        Full3D = 0,
        YZPlane = 1,
        XZPlane = 2,
        XYPlane = 3,
        ESettingsDOF_MAX = 4,
    };
}

namespace ESettingsLockedAxis {
    enum Type {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        Invalid = 4,
        ESettingsLockedAxis_MAX = 5,
    };
}

namespace EShaderCompressionFormat {
    enum Type {
        None = 0,
        LZ4 = 1,
        Oodle = 2,
        Zlib = 3,
        EShaderCompressionFormat_MAX = 4,
    };
}

enum EShadowMapFlags {
    SMF_None = 0,
    SMF_Streamed = 1,
    SMF_MAX = 2,
};

namespace EShadowMapMethod {
    enum Type {
        ShadowMaps = 0,
        VirtualShadowMaps = 1,
        EShadowMapMethod_MAX = 2,
    };
}

enum class EShouldCookBlueprintPropertyGuids {
    No = 0,
    Yes = 1,
    Inherit = 2,
    EShouldCookBlueprintPropertyGuids_MAX = 3,
};

enum class ESkeletalMeshAsyncProperties {
    None = 0,
    Materials = 1,
    Skeleton = 2,
    RefSkeleton = 4,
    RetargetBasePose = 8,
    RefBasesInvMatrix = 16,
    MeshClothingAssets = 32,
    UseLegacyMeshDerivedDataKey = 64,
    HasActiveClothingAssets = 128,
    LODSettings = 256,
    HasVertexColors = 512,
    VertexColorGuid = 1024,
    MorphTargets = 2048,
    SkeletalMeshRenderData = 4096,
    MeshEditorDataObject = 8192,
    NeverStream = 16384,
    OverrideLODStreamingSettings = 32768,
    SupportLODStreaming = 65536,
    MaxNumStreamedLODs = 131072,
    MaxNumOptionalLODs = 262144,
    ImportedModel = 524288,
    LODInfo = 1048576,
    SkinWeightProfiles = 2097152,
    CachedComposedRefPoseMatrices = 4194304,
    SamplingInfo = 8388608,
    NodeMappingData = 16777216,
    ShadowPhysicsAsset = 33554432,
    SkelMirrorTable = 67108864,
    MinLod = 134217728,
    DisableBelowMinLodStripping = 268435456,
    SkelMirrorAxis = 536870912,
    SkelMirrorFlipAxis = 1073741824,
    DefaultAnimationRig = 2147483648,
    NegativeBoundsExtension = 4294967296,
    PositiveBoundsExtension = 8589934592,
    ExtendedBounds = 17179869184,
    HasBeenSimplified = 34359738368,
    EnablePerPolyCollision = 68719476736,
    BodySetup = 137438953472,
    MorphTargetIndexMap = 274877906944,
    FloorOffset = 549755813888,
    ImportedBounds = 1099511627776,
    PhysicsAsset = 2199023255552,
    AssetImportData = 4398046511104,
    ThumbnailInfo = 8796093022208,
    HasCustomDefaultEditorCamera = 17592186044416,
    DefaultEditorCameraLocation = 35184372088832,
    DefaultEditorCameraRotation = 70368744177664,
    RequiresLODScreenSizeConversion = 140737488355328,
    PostProcessAnimBlueprint = 281474976710656,
    DefaultEditorCameraLookAt = 562949953421312,
    PreviewAttachedAssetContainer = 1125899906842624,
    DefaultEditorCameraOrthoZoom = 2251799813685248,
    RequiresLODHysteresisConversion = 4503599627370496,
    bSupportRayTracing = 9007199254740992,
    RayTracingMinLOD = 18014398509481984,
    ClothLODBiasMode = 36028797018963968,
    DefaultMeshDeformer = 72057594037927936,
    All = -1,
    ESkeletalMeshAsyncProperties_MAX = 72057594037927937,
};

enum class ESkeletalMeshGeoImportVersions {
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    ESkeletalMeshGeoImportVersions_MAX = 3,
};

enum class ESkeletalMeshSkinningImportVersions {
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    ESkeletalMeshSkinningImportVersions_MAX = 3,
};

enum class ESkinCacheDefaultBehavior {
    Exclusive = 0,
    Inclusive = 1,
    ESkinCacheDefaultBehavior_MAX = 2,
};

enum class ESkinCacheUsage {
    Auto = 0,
    Disabled = 255,
    Enabled = 1,
    ESkinCacheUsage_MAX = 256,
};

enum class ESkyAtmosphereTransformMode {
    PlanetTopAtAbsoluteWorldOrigin = 0,
    PlanetTopAtComponentTransform = 1,
    PlanetCenterAtComponentTransform = 2,
    ESkyAtmosphereTransformMode_MAX = 3,
};

enum ESkyLightSourceType {
    SLS_CapturedScene = 0,
    SLS_SpecifiedCubemap = 1,
    SLS_MAX = 2,
};

enum class ESlateGesture {
    None = 0,
    Scroll = 1,
    Magnify = 2,
    Swipe = 3,
    Rotate = 4,
    LongPress = 5,
    ESlateGesture_MAX = 6,
};

enum class ESoundAssetCompressionType {
    BinkAudio = 0,
    ADPCM = 1,
    PCM = 2,
    PlatformSpecific = 3,
    ProjectDefined = 4,
    ESoundAssetCompressionType_MAX = 5,
};

enum ESoundDistanceCalc {
    SOUNDDISTANCE_Normal = 0,
    SOUNDDISTANCE_InfiniteXYPlane = 1,
    SOUNDDISTANCE_InfiniteXZPlane = 2,
    SOUNDDISTANCE_InfiniteYZPlane = 3,
    SOUNDDISTANCE_MAX = 4,
};

enum ESoundGroup {
    SOUNDGROUP_Default = 0,
    SOUNDGROUP_Effects = 1,
    SOUNDGROUP_UI = 2,
    SOUNDGROUP_Music = 3,
    SOUNDGROUP_Voice = 4,
    SOUNDGROUP_GameSoundGroup1 = 5,
    SOUNDGROUP_GameSoundGroup2 = 6,
    SOUNDGROUP_GameSoundGroup3 = 7,
    SOUNDGROUP_GameSoundGroup4 = 8,
    SOUNDGROUP_GameSoundGroup5 = 9,
    SOUNDGROUP_GameSoundGroup6 = 10,
    SOUNDGROUP_GameSoundGroup7 = 11,
    SOUNDGROUP_GameSoundGroup8 = 12,
    SOUNDGROUP_GameSoundGroup9 = 13,
    SOUNDGROUP_GameSoundGroup10 = 14,
    SOUNDGROUP_GameSoundGroup11 = 15,
    SOUNDGROUP_GameSoundGroup12 = 16,
    SOUNDGROUP_GameSoundGroup13 = 17,
    SOUNDGROUP_GameSoundGroup14 = 18,
    SOUNDGROUP_GameSoundGroup15 = 19,
    SOUNDGROUP_GameSoundGroup16 = 20,
    SOUNDGROUP_GameSoundGroup17 = 21,
    SOUNDGROUP_GameSoundGroup18 = 22,
    SOUNDGROUP_GameSoundGroup19 = 23,
    SOUNDGROUP_GameSoundGroup20 = 24,
    SOUNDGROUP_MAX = 25,
};

enum ESoundSpatializationAlgorithm {
    SPATIALIZATION_Default = 0,
    SPATIALIZATION_HRTF = 1,
    SPATIALIZATION_MAX = 2,
};

enum class ESoundWaveFFTSize {
    VerySmall_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    VeryLarge_2048 = 4,
    ESoundWaveFFTSize_MAX = 5,
};

enum class ESoundWaveLoadingBehavior {
    Inherited = 0,
    RetainOnLoad = 1,
    PrimeOnLoad = 2,
    LoadOnDemand = 3,
    ForceInline = 4,
    Uninitialized = 255,
    ESoundWaveLoadingBehavior_MAX = 256,
};

enum class ESourceBusChannels {
    Mono = 0,
    Stereo = 1,
    ESourceBusChannels_MAX = 2,
};

enum class ESourceBusSendLevelControlMethod {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESourceBusSendLevelControlMethod_MAX = 3,
};

enum class ESpawnActorCollisionHandlingMethod {
    Undefined = 0,
    AlwaysSpawn = 1,
    AdjustIfPossibleButAlwaysSpawn = 2,
    AdjustIfPossibleButDontSpawnIfColliding = 3,
    DontSpawnIfColliding = 4,
    ESpawnActorCollisionHandlingMethod_MAX = 5,
};

enum ESpeedTreeGeometryType {
    STG_Branch = 0,
    STG_Frond = 1,
    STG_Leaf = 2,
    STG_FacingLeaf = 3,
    STG_Billboard = 4,
    STG_MAX = 5,
};

enum ESpeedTreeLODType {
    STLOD_Pop = 0,
    STLOD_Smooth = 1,
    STLOD_MAX = 2,
};

enum ESpeedTreeWindType {
    STW_None = 0,
    STW_Fastest = 1,
    STW_Fast = 2,
    STW_Better = 3,
    STW_Best = 4,
    STW_Palm = 5,
    STW_BestPlus = 6,
    STW_MAX = 7,
};

namespace ESplineCoordinateSpace {
    enum Type {
        Local = 0,
        World = 1,
        ESplineCoordinateSpace_MAX = 2,
    };
}

namespace ESplineMeshAxis {
    enum Type {
        X = 0,
        Y = 1,
        Z = 2,
        ESplineMeshAxis_MAX = 3,
    };
}

namespace ESplinePointType {
    enum Type {
        Linear = 0,
        Curve = 1,
        Constant = 2,
        CurveClamped = 3,
        CurveCustomTangent = 4,
        ESplinePointType_MAX = 5,
    };
}

namespace ESplitScreenType {
    enum Type {
        None = 0,
        TwoPlayer_Horizontal = 1,
        TwoPlayer_Vertical = 2,
        ThreePlayer_FavorTop = 3,
        ThreePlayer_FavorBottom = 4,
        ThreePlayer_Vertical = 5,
        ThreePlayer_Horizontal = 6,
        FourPlayer_Grid = 7,
        FourPlayer_Vertical = 8,
        FourPlayer_Horizontal = 9,
        SplitTypeCount = 10,
        ESplitScreenType_MAX = 11,
    };
}

enum EStandbyType {
    STDBY_Rx = 0,
    STDBY_Tx = 1,
    STDBY_BadPing = 2,
    STDBY_MAX = 3,
};

enum class EStaticMeshReductionTerimationCriterion {
    Triangles = 0,
    Vertices = 1,
    Any = 2,
    EStaticMeshReductionTerimationCriterion_MAX = 3,
};

enum EStereoLayerShape {
    SLSH_QuadLayer = 0,
    SLSH_CylinderLayer = 1,
    SLSH_CubemapLayer = 2,
    SLSH_EquirectLayer = 3,
    SLSH_MAX = 4,
};

enum EStereoLayerType {
    SLT_WorldLocked = 0,
    SLT_TrackerLocked = 1,
    SLT_FaceLocked = 2,
    SLT_MAX = 3,
};

enum EStrataBlendMode {
    SBM_Opaque = 0,
    SBM_Masked = 1,
    SBM_TranslucentGreyTransmittance = 2,
    SBM_TranslucentColoredTransmittance = 3,
    SBM_ColoredTransmittanceOnly = 4,
    SBM_AlphaHoldout = 5,
    SBM_MAX = 6,
};

enum EStrataShadingModel {
    SSM_Unlit = 0,
    SSM_DefaultLit = 1,
    SSM_SubsurfaceLit = 2,
    SSM_VolumetricFogCloud = 3,
    SSM_Hair = 4,
    SSM_Eye = 5,
    SSM_SingleLayerWater = 6,
    SSM_LightFunction = 7,
    SSM_PostProcess = 8,
    SSM_Decal = 9,
    SSM_NUM = 10,
};

enum class EStreamingSourcePriority {
    Highest = 0,
    High = 64,
    Normal = 128,
    Low = 192,
    Lowest = 255,
    Default = 128,
    EStreamingSourcePriority_MAX = 256,
};

enum class EStreamingSourceTargetState {
    Loaded = 0,
    Activated = 1,
    EStreamingSourceTargetState_MAX = 2,
};

enum EStreamingVolumeUsage {
    SVB_Loading = 0,
    SVB_LoadingAndVisibility = 1,
    SVB_VisibilityBlockingOnLoad = 2,
    SVB_BlockingOnLoad = 3,
    SVB_LoadingNotVisible = 4,
    SVB_MAX = 5,
};

enum ESubUVBoundingVertexCount {
    BVC_FourVertices = 0,
    BVC_EightVertices = 1,
    BVC_MAX = 2,
};

enum class ESubmixSendMethod {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESubmixSendMethod_MAX = 3,
};

enum class ESubmixSendStage {
    PostDistanceAttenuation = 0,
    PreDistanceAttenuation = 1,
    ESubmixSendStage_MAX = 2,
};

namespace ESuggestProjVelocityTraceOption {
    enum Type {
        DoNotTrace = 0,
        TraceFullPath = 1,
        OnlyTraceWhileAscending = 2,
        ESuggestProjVelocityTraceOption_MAX = 3,
    };
}

enum class ESyncOption {
    Drive = 0,
    Passive = 1,
    Disabled = 2,
    ESyncOption_MAX = 3,
};

enum class ETeleportType {
    None = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
    ETeleportType_MAX = 3,
};

enum ETemperatureMethod {
    TEMP_WhiteBalance = 0,
    TEMP_ColorTemperature = 1,
    TEMP_MAX = 2,
};

enum class ETemperatureSeverityType {
    Unknown = 0,
    Good = 1,
    Bad = 2,
    Serious = 3,
    Critical = 4,
    NumSeverities = 5,
    ETemperatureSeverityType_MAX = 6,
};

enum class ETextGender {
    Masculine = 0,
    Feminine = 1,
    Neuter = 2,
    ETextGender_MAX = 3,
};

enum class ETextureChromaticAdaptationMethod {
    TCAM_None = 0,
    TCAM_Bradford = 1,
    TCAM_CAT02 = 2,
    TCAM_MAX = 3,
};

enum class ETextureClass {
    Invalid = 0,
    TwoD = 1,
    Cube = 2,
    Array = 3,
    CubeArray = 4,
    Volume = 5,
    TwoDDynamic = 6,
    RenderTarget = 7,
    Other2DNoSource = 8,
    OtherUnknown = 9,
    ETextureClass_MAX = 10,
};

enum ETextureColorChannel {
    TCC_Red = 0,
    TCC_Green = 1,
    TCC_Blue = 2,
    TCC_Alpha = 3,
    TCC_MAX = 4,
};

enum class ETextureColorSpace {
    TCS_None = 0,
    TCS_sRGB = 1,
    TCS_Rec2020 = 2,
    TCS_ACESAP0 = 3,
    TCS_ACESAP1 = 4,
    TCS_P3DCI = 5,
    TCS_P3D65 = 6,
    TCS_REDWideGamut = 7,
    TCS_SonySGamut3 = 8,
    TCS_SonySGamut3Cine = 9,
    TCS_AlexaWideGamut = 10,
    TCS_CanonCinemaGamut = 11,
    TCS_GoProProtuneNative = 12,
    TCS_PanasonicVGamut = 13,
    TCS_Custom = 99,
    TCS_MAX = 100,
};

enum ETextureCompressionQuality {
    TCQ_Default = 0,
    TCQ_Lowest = 1,
    TCQ_Low = 2,
    TCQ_Medium = 3,
    TCQ_High = 4,
    TCQ_Highest = 5,
    TCQ_MAX = 6,
};

enum class ETextureDownscaleOptions {
    Default = 0,
    Unfiltered = 1,
    SimpleAverage = 2,
    Sharpen0 = 3,
    Sharpen1 = 4,
    Sharpen2 = 5,
    Sharpen3 = 6,
    Sharpen4 = 7,
    Sharpen5 = 8,
    Sharpen6 = 9,
    Sharpen7 = 10,
    Sharpen8 = 11,
    Sharpen9 = 12,
    Sharpen10 = 13,
    ETextureDownscaleOptions_MAX = 14,
};

enum class ETextureEncodeEffort {
    Default = 0,
    Low = 10,
    Normal = 20,
    High = 30,
    ETextureEncodeEffort_MAX = 31,
};

enum class ETextureEncodeSpeed {
    Final = 0,
    FinalIfAvailable = 1,
    Fast = 2,
    ETextureEncodeSpeed_MAX = 3,
};

enum class ETextureEncodeSpeedOverride {
    Disabled = 255,
    Final = 0,
    FinalIfAvailable = 1,
    Fast = 2,
    ETextureEncodeSpeedOverride_MAX = 256,
};

enum ETextureLossyCompressionAmount {
    TLCA_Default = 0,
    TLCA_None = 1,
    TLCA_Lowest = 2,
    TLCA_Low = 3,
    TLCA_Medium = 4,
    TLCA_High = 5,
    TLCA_Highest = 6,
    TLCA_MAX = 7,
};

enum ETextureMipCount {
    TMC_ResidentMips = 0,
    TMC_AllMips = 1,
    TMC_AllMipsBiased = 2,
    TMC_MAX = 3,
};

enum class ETextureMipLoadOptions {
    Default = 0,
    AllMips = 1,
    OnlyFirstMip = 2,
    ETextureMipLoadOptions_MAX = 3,
};

enum ETextureMipValueMode {
    TMVM_None = 0,
    TMVM_MipLevel = 1,
    TMVM_MipBias = 2,
    TMVM_Derivative = 3,
    TMVM_MAX = 4,
};

namespace ETexturePowerOfTwoSetting {
    enum Type {
        None = 0,
        PadToPowerOfTwo = 1,
        PadToSquarePowerOfTwo = 2,
        ETexturePowerOfTwoSetting_MAX = 3,
    };
}

enum ETextureRenderTargetFormat {
    RTF_R8 = 0,
    RTF_RG8 = 1,
    RTF_RGBA8 = 2,
    RTF_RGBA8_SRGB = 3,
    RTF_R16f = 4,
    RTF_RG16f = 5,
    RTF_RGBA16f = 6,
    RTF_R32f = 7,
    RTF_RG32f = 8,
    RTF_RGBA32f = 9,
    RTF_RGB10A2 = 10,
    RTF_MAX = 11,
};

enum class ETextureSamplerFilter {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    AnisotropicPoint = 3,
    AnisotropicLinear = 4,
    ETextureSamplerFilter_MAX = 5,
};

enum ETextureSizingType {
    TextureSizingType_UseSingleTextureSize = 0,
    TextureSizingType_UseAutomaticBiasedSizes = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing = 3,
    TextureSizingType_AutomaticFromTexelDensity = 4,
    TextureSizingType_AutomaticFromMeshScreenSize = 5,
    TextureSizingType_AutomaticFromMeshDrawDistance = 6,
    TextureSizingType_MAX = 7,
};

enum ETextureSourceCompressionFormat {
    TSCF_None = 0,
    TSCF_PNG = 1,
    TSCF_JPEG = 2,
    TSCF_MAX = 3,
};

enum class ETextureSourceEncoding {
    TSE_None = 0,
    TSE_Linear = 1,
    TSE_sRGB = 2,
    TSE_ST2084 = 3,
    TSE_Gamma22 = 4,
    TSE_BT1886 = 5,
    TSE_Gamma26 = 6,
    TSE_Cineon = 7,
    TSE_REDLog = 8,
    TSE_REDLog3G10 = 9,
    TSE_SLog1 = 10,
    TSE_SLog2 = 11,
    TSE_SLog3 = 12,
    TSE_AlexaV3LogC = 13,
    TSE_CanonLog = 14,
    TSE_ProTune = 15,
    TSE_VLog = 16,
    TSE_MAX = 17,
};

enum ETextureSourceFormat {
    TSF_Invalid = 0,
    TSF_G8 = 1,
    TSF_BGRA8 = 2,
    TSF_BGRE8 = 3,
    TSF_RGBA16 = 4,
    TSF_RGBA16F = 5,
    TSF_RGBA8_DEPRECATED = 6,
    TSF_RGBE8_DEPRECATED = 7,
    TSF_G16 = 8,
    TSF_RGBA32F = 9,
    TSF_R16F = 10,
    TSF_R32F = 11,
    TSF_MAX = 12,
    TSF_RGBA8 = 6,
    TSF_RGBE8 = 7,
};

enum class ETextureUniversalTiling {
    Disabled = 0,
    Enabled_256KB = 1,
    Enabled_64KB = 2,
    ETextureUniversalTiling_MAX = 3,
};

enum ETickingGroup {
    TG_AsyncServerMove = 0,
    TG_PrePhysics = 1,
    TG_AsyncMove = 2,
    TG_StartPhysics = 3,
    TG_DuringPhysics = 4,
    TG_EndPhysics = 5,
    TG_PostPhysics = 6,
    TG_PostUpdateWork = 7,
    TG_LastDemotable = 8,
    TG_NewlySpawned = 9,
    TG_MAX = 10,
};

enum class ETimeStretchCurveMapping {
    T_Original = 0,
    T_TargetMin = 1,
    T_TargetMax = 2,
    MAX = 3,
};

enum class ETimecodeProviderSynchronizationState {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ETimecodeProviderSynchronizationState_MAX = 4,
};

namespace ETimelineDirection {
    enum Type {
        Forward = 0,
        Backward = 1,
        ETimelineDirection_MAX = 2,
    };
}

enum ETimelineLengthMode {
    TL_TimelineLength = 0,
    TL_LastKeyFrame = 1,
    TL_MAX = 2,
};

enum ETimelineSigType {
    ETS_EventSignature = 0,
    ETS_FloatSignature = 1,
    ETS_VectorSignature = 2,
    ETS_LinearColorSignature = 3,
    ETS_InvalidSignature = 4,
    ETS_MAX = 5,
};

enum ETraceTypeQuery {
    TraceTypeQuery1 = 0,
    TraceTypeQuery2 = 1,
    TraceTypeQuery3 = 2,
    TraceTypeQuery4 = 3,
    TraceTypeQuery5 = 4,
    TraceTypeQuery6 = 5,
    TraceTypeQuery7 = 6,
    TraceTypeQuery8 = 7,
    TraceTypeQuery9 = 8,
    TraceTypeQuery10 = 9,
    TraceTypeQuery11 = 10,
    TraceTypeQuery12 = 11,
    TraceTypeQuery13 = 12,
    TraceTypeQuery14 = 13,
    TraceTypeQuery15 = 14,
    TraceTypeQuery16 = 15,
    TraceTypeQuery17 = 16,
    TraceTypeQuery18 = 17,
    TraceTypeQuery19 = 18,
    TraceTypeQuery20 = 19,
    TraceTypeQuery21 = 20,
    TraceTypeQuery22 = 21,
    TraceTypeQuery23 = 22,
    TraceTypeQuery24 = 23,
    TraceTypeQuery25 = 24,
    TraceTypeQuery26 = 25,
    TraceTypeQuery27 = 26,
    TraceTypeQuery28 = 27,
    TraceTypeQuery29 = 28,
    TraceTypeQuery30 = 29,
    TraceTypeQuery31 = 30,
    TraceTypeQuery32 = 31,
    TraceTypeQuery_MAX = 32,
    ETraceTypeQuery_MAX = 33,
};

enum ETrail2SourceMethod {
    PET2SRCM_Default = 0,
    PET2SRCM_Particle = 1,
    PET2SRCM_Actor = 2,
    PET2SRCM_MAX = 3,
};

enum ETrailWidthMode {
    ETrailWidthMode_FromCentre = 0,
    ETrailWidthMode_FromFirst = 1,
    ETrailWidthMode_FromSecond = 2,
    ETrailWidthMode_MAX = 3,
};

enum ETrailsRenderAxisOption {
    Trails_CameraUp = 0,
    Trails_SourceUp = 1,
    Trails_WorldUp = 2,
    Trails_MAX = 3,
};

enum class ETrajectorySampleDomain {
    None = 0,
    Time = 1,
    Distance = 2,
    ETrajectorySampleDomain_MAX = 3,
};

enum class ETransformCurveChannel {
    Position = 0,
    Rotation = 1,
    Scale = 2,
    Invalid = 3,
    ETransformCurveChannel_MAX = 4,
};

namespace ETransitionBlendMode {
    enum Type {
        TBM_Linear = 0,
        TBM_Cubic = 1,
        TBM_MAX = 2,
    };
}

namespace ETransitionLogicType {
    enum Type {
        TLT_StandardBlend = 0,
        TLT_Inertialization = 1,
        TLT_Custom = 2,
        TLT_MAX = 3,
    };
}

enum class ETransitionRequestOverwriteMode {
    Append = 0,
    Ignore = 1,
    Overwrite = 2,
    ETransitionRequestOverwriteMode_MAX = 3,
};

enum class ETransitionRequestQueueMode {
    Shared = 0,
    Unique = 1,
    ETransitionRequestQueueMode_MAX = 2,
};

enum class ETransitionType {
    None = 0,
    Paused = 1,
    Loading = 2,
    Saving = 3,
    Connecting = 4,
    Precaching = 5,
    WaitingToConnect = 6,
    MAX = 7,
};

enum ETranslucencyLightingMode {
    TLM_VolumetricNonDirectional = 0,
    TLM_VolumetricDirectional = 1,
    TLM_VolumetricPerVertexNonDirectional = 2,
    TLM_VolumetricPerVertexDirectional = 3,
    TLM_Surface = 4,
    TLM_SurfacePerPixelLighting = 5,
    TLM_MAX = 6,
};

enum class ETranslucencyType {
    Raster = 0,
    RayTracing = 1,
    ETranslucencyType_MAX = 2,
};

namespace ETranslucentSortPolicy {
    enum Type {
        SortByDistance = 0,
        SortByProjectedZ = 1,
        SortAlongAxis = 2,
        ETranslucentSortPolicy_MAX = 3,
    };
}

namespace ETravelFailure {
    enum Type {
        NoLevel = 0,
        LoadMapFailure = 1,
        InvalidURL = 2,
        PackageMissing = 3,
        PackageVersion = 4,
        NoDownload = 5,
        TravelFailure = 6,
        CheatCommands = 7,
        PendingNetGameCreateFailure = 8,
        CloudSaveFailure = 9,
        ServerTravelFailure = 10,
        ClientTravelFailure = 11,
        ETravelFailure_MAX = 12,
    };
}

enum ETravelType {
    TRAVEL_Absolute = 0,
    TRAVEL_Partial = 1,
    TRAVEL_Relative = 2,
    TRAVEL_MAX = 3,
};

enum ETwitterIntegrationDelegate {
    TID_AuthorizeComplete = 0,
    TID_TweetUIComplete = 1,
    TID_RequestComplete = 2,
    TID_MAX = 3,
};

enum ETwitterRequestMethod {
    TRM_Get = 0,
    TRM_Post = 1,
    TRM_Delete = 2,
    TRM_MAX = 3,
};

enum ETypeAdvanceAnim {
    ETAA_Default = 0,
    ETAA_Finished = 1,
    ETAA_Looped = 2,
    ETAA_MAX = 3,
};

enum class ETypedElementWorldType {
    Game = 0,
    Editor = 1,
    ETypedElementWorldType_MAX = 2,
};

enum class EUIScalingRule {
    ShortestSide = 0,
    LongestSide = 1,
    Horizontal = 2,
    Vertical = 3,
    ScaleToFit = 4,
    Custom = 5,
    EUIScalingRule_MAX = 6,
};

enum class EUVOutput {
    DoNotOutputChannel = 0,
    OutputChannel = 1,
    EUVOutput_MAX = 2,
};

enum class EUpdateRateShiftBucket {
    ShiftBucket0 = 0,
    ShiftBucket1 = 1,
    ShiftBucket2 = 2,
    ShiftBucket3 = 3,
    ShiftBucket4 = 4,
    ShiftBucket5 = 5,
    ShiftBucketMax = 6,
    EUpdateRateShiftBucket_MAX = 7,
};

enum EUserDefinedStructureStatus {
    UDSS_UpToDate = 0,
    UDSS_Dirty = 1,
    UDSS_Error = 2,
    UDSS_Duplicate = 3,
    UDSS_MAX = 4,
};

enum class EVectorCurveChannel {
    X = 0,
    Y = 1,
    Z = 2,
    Invalid = 3,
    EVectorCurveChannel_MAX = 4,
};

enum EVectorFieldConstructionOp {
    VFCO_Extrude = 0,
    VFCO_Revolve = 1,
    VFCO_MAX = 2,
};

enum EVectorNoiseFunction {
    VNF_CellnoiseALU = 0,
    VNF_VectorALU = 1,
    VNF_GradientALU = 2,
    VNF_CurlALU = 3,
    VNF_VoronoiALU = 4,
    VNF_MAX = 5,
};

enum class EVectorQuantization {
    RoundWholeNumber = 0,
    RoundOneDecimal = 1,
    RoundTwoDecimals = 2,
    EVectorQuantization_MAX = 3,
};

namespace EVelocityOutputPass {
    enum Type {
        DepthPass = 0,
        BasePass = 1,
        AfterBasePass = 2,
        EVelocityOutputPass_MAX = 3,
    };
}

namespace EVertexDeformationOutputsVelocity {
    enum Type {
        Off = 0,
        On = 1,
        Auto = 2,
        EVertexDeformationOutputsVelocity_MAX = 3,
    };
}

enum class EVertexPaintAxis {
    X = 0,
    Y = 1,
    Z = 2,
    EVertexPaintAxis_MAX = 3,
};

enum EVerticalTextAligment {
    EVRTA_TextTop = 0,
    EVRTA_TextCenter = 1,
    EVRTA_TextBottom = 2,
    EVRTA_QuadTop = 3,
    EVRTA_MAX = 4,
};

enum EViewModeIndex {
    VMI_BrushWireframe = 0,
    VMI_Wireframe = 1,
    VMI_Unlit = 2,
    VMI_Lit = 3,
    VMI_Lit_DetailLighting = 4,
    VMI_LightingOnly = 5,
    VMI_LightComplexity = 6,
    VMI_ShaderComplexity = 8,
    VMI_LightmapDensity = 9,
    VMI_LitLightmapDensity = 10,
    VMI_ReflectionOverride = 11,
    VMI_VisualizeBuffer = 12,
    VMI_StationaryLightOverlap = 14,
    VMI_CollisionPawn = 15,
    VMI_CollisionVisibility = 16,
    VMI_LODColoration = 18,
    VMI_QuadOverdraw = 19,
    VMI_PrimitiveDistanceAccuracy = 20,
    VMI_MeshUVDensityAccuracy = 21,
    VMI_ShaderComplexityWithQuadOverdraw = 22,
    VMI_HLODColoration = 23,
    VMI_GroupLODColoration = 24,
    VMI_MaterialTextureScaleAccuracy = 25,
    VMI_RequiredTextureResolution = 26,
    VMI_PathTracing = 27,
    VMI_RayTracingDebug = 28,
    VMI_VisualizeNanite = 29,
    VMI_VirtualTexturePendingMips = 30,
    VMI_VisualizeLumen = 31,
    VMI_VisualizeVirtualShadowMap = 32,
    VMI_VisualizeGPUSkinCache = 33,
    VMI_Max = 34,
    VMI_Unknown = 255,
};

enum EViewTargetBlendFunction {
    VTBlend_Linear = 0,
    VTBlend_Cubic = 1,
    VTBlend_EaseIn = 2,
    VTBlend_EaseOut = 3,
    VTBlend_EaseInOut = 4,
    VTBlend_PreBlended = 5,
    VTBlend_MAX = 6,
};

enum class EVirtualizationMode {
    Disabled = 0,
    PlayWhenSilent = 1,
    Restart = 2,
    EVirtualizationMode_MAX = 3,
};

enum EVisibilityAggressiveness {
    VIS_LeastAggressive = 0,
    VIS_ModeratelyAggressive = 1,
    VIS_MostAggressive = 2,
    VIS_Max = 3,
};

enum class EVisibilityBasedAnimTickOption {
    AlwaysTickPoseAndRefreshBones = 0,
    AlwaysTickPose = 1,
    OnlyTickMontagesWhenNotRendered = 2,
    OnlyTickPoseWhenRendered = 3,
    EVisibilityBasedAnimTickOption_MAX = 4,
};

enum class EVoiceBlockReasons {
    None = 0,
    Muted = 1,
    MutedBy = 2,
    Gameplay = 4,
    Blocked = 8,
    BlockedBy = 16,
    EVoiceBlockReasons_MAX = 17,
};

enum class EVoiceSampleRate {
    Low16000Hz = 16000,
    Normal24000Hz = 24000,
    EVoiceSampleRate_MAX = 24001,
};

enum EVolumeLightingMethod {
    VLM_VolumetricLightmap = 0,
    VLM_SparseVolumeLightingSamples = 1,
    VLM_MAX = 2,
};

enum class EVolumetricCloudTracingMaxDistanceMode {
    DistanceFromCloudLayerEntryPoint = 0,
    DistanceFromPointOfView = 1,
    EVolumetricCloudTracingMaxDistanceMode_MAX = 2,
};

enum EWalkableSlopeBehavior {
    WalkableSlope_Default = 0,
    WalkableSlope_Increase = 1,
    WalkableSlope_Decrease = 2,
    WalkableSlope_Unwalkable = 3,
    WalkableSlope_Max = 4,
};

enum class EWindSourceType {
    Directional = 0,
    Point = 1,
    EWindSourceType_MAX = 2,
};

namespace EWindowMode {
    enum Type {
        Fullscreen = 0,
        WindowedFullscreen = 1,
        Windowed = 2,
        EWindowMode_MAX = 3,
    };
}

enum class EWindowTitleBarMode {
    Overlay = 0,
    VerticalBox = 1,
    EWindowTitleBarMode_MAX = 2,
};

namespace EWorkingColorSpace {
    enum Type {
        sRGB = 1,
        Rec2020 = 2,
        ACESAP0 = 3,
        ACESAP1 = 4,
        P3DCI = 5,
        P3D65 = 6,
        Custom = 7,
        EWorkingColorSpace_MAX = 8,
    };
}

enum class EWorldContentState {
    NoContent = 0,
    ContentBundleInjected = 1,
    ContentBundleInjectionFailed = 2,
    EWorldContentState_MAX = 3,
};

enum class EWorldPartitionRuntimeCellState {
    Unloaded = 0,
    Loaded = 1,
    Activated = 2,
    EWorldPartitionRuntimeCellState_MAX = 3,
};

enum class EWorldPartitionServerStreamingMode {
    ProjectDefault = 0,
    Disabled = 1,
    Enabled = 2,
    EnabledInPIE = 3,
    EWorldPartitionServerStreamingMode_MAX = 4,
};

enum class EWorldPartitionServerStreamingOutMode {
    ProjectDefault = 0,
    Disabled = 1,
    Enabled = 2,
    EWorldPartitionServerStreamingOutMode_MAX = 3,
};

enum class EWorldPartitionStreamingPerformance {
    Good = 0,
    Slow = 1,
    Critical = 2,
    EWorldPartitionStreamingPerformance_MAX = 3,
};

enum EWorldPositionIncludedOffsets {
    WPT_Default = 0,
    WPT_ExcludeAllShaderOffsets = 1,
    WPT_CameraRelative = 2,
    WPT_CameraRelativeNoOffsets = 3,
    WPT_MAX = 4,
};

enum class FDataDrivenCVarType {
    CVarFloat = 0,
    CVarInt = 1,
    CVarBool = 2,
    FDataDrivenCVarType_MAX = 3,
};

enum class FNavigationSystemRunMode {
    InvalidMode = 0,
    GameMode = 1,
    EditorMode = 2,
    SimulationMode = 3,
    PIEMode = 4,
    InferFromWorldMode = 5,
    EditorWorldPartitionBuildMode = 6,
    FNavigationSystemRunMode_MAX = 7,
};

enum ModulationParamMode {
    MPM_Normal = 0,
    MPM_Abs = 1,
    MPM_Direct = 2,
    MPM_MAX = 3,
};

enum ParticleReplayState {
    PRS_Disabled = 0,
    PRS_Capturing = 1,
    PRS_Replaying = 2,
    PRS_MAX = 3,
};

enum ParticleSystemLODMethod {
    PARTICLESYSTEMLODMETHOD_Automatic = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
    PARTICLESYSTEMLODMETHOD_MAX = 3,
};

enum ReverbPreset {
    REVERB_Default = 0,
    REVERB_Bathroom = 1,
    REVERB_StoneRoom = 2,
    REVERB_Auditorium = 3,
    REVERB_ConcertHall = 4,
    REVERB_Cave = 5,
    REVERB_Hallway = 6,
    REVERB_StoneCorridor = 7,
    REVERB_Alley = 8,
    REVERB_Forest = 9,
    REVERB_City = 10,
    REVERB_Mountains = 11,
    REVERB_Quarry = 12,
    REVERB_Plain = 13,
    REVERB_ParkingLot = 14,
    REVERB_SewerPipe = 15,
    REVERB_Underwater = 16,
    REVERB_SmallRoom = 17,
    REVERB_MediumRoom = 18,
    REVERB_LargeRoom = 19,
    REVERB_MediumHall = 20,
    REVERB_LargeHall = 21,
    REVERB_Plate = 22,
    REVERB_MAX = 23,
};

enum SkeletalMeshOptimizationImportance {
    SMOI_Off = 0,
    SMOI_Lowest = 1,
    SMOI_Low = 2,
    SMOI_Normal = 3,
    SMOI_High = 4,
    SMOI_Highest = 5,
    SMOI_MAX = 6,
};

enum SkeletalMeshOptimizationType {
    SMOT_NumOfTriangles = 0,
    SMOT_MaxDeviation = 1,
    SMOT_TriangleOrDeviation = 2,
    SMOT_MAX = 3,
};

enum SkeletalMeshTerminationCriterion {
    SMTC_NumOfTriangles = 0,
    SMTC_NumOfVerts = 1,
    SMTC_TriangleOrVert = 2,
    SMTC_AbsNumOfTriangles = 3,
    SMTC_AbsNumOfVerts = 4,
    SMTC_AbsTriangleOrVert = 5,
    SMTC_MAX = 6,
};

enum TextureAddress {
    TA_Wrap = 0,
    TA_Clamp = 1,
    TA_Mirror = 2,
    TA_MAX = 3,
};

enum TextureCompressionSettings {
    TC_Default = 0,
    TC_Normalmap = 1,
    TC_Masks = 2,
    TC_Grayscale = 3,
    TC_Displacementmap = 4,
    TC_VectorDisplacementmap = 5,
    TC_HDR = 6,
    TC_EditorIcon = 7,
    TC_Alpha = 8,
    TC_DistanceFieldFont = 9,
    TC_HDR_Compressed = 10,
    TC_BC7 = 11,
    TC_HalfFloat = 12,
    TC_LQ = 13,
    TC_EncodedReflectionCapture = 14,
    TC_SingleFloat = 15,
    TC_HDR_F32 = 16,
    TC_MAX = 17,
};

enum TextureFilter {
    TF_Nearest = 0,
    TF_Bilinear = 1,
    TF_Trilinear = 2,
    TF_Default = 3,
    TF_MAX = 4,
};

enum TextureGroup {
    TEXTUREGROUP_World = 0,
    TEXTUREGROUP_WorldNormalMap = 1,
    TEXTUREGROUP_WorldSpecular = 2,
    TEXTUREGROUP_Character = 3,
    TEXTUREGROUP_CharacterNormalMap = 4,
    TEXTUREGROUP_CharacterSpecular = 5,
    TEXTUREGROUP_Weapon = 6,
    TEXTUREGROUP_WeaponNormalMap = 7,
    TEXTUREGROUP_WeaponSpecular = 8,
    TEXTUREGROUP_Vehicle = 9,
    TEXTUREGROUP_VehicleNormalMap = 10,
    TEXTUREGROUP_VehicleSpecular = 11,
    TEXTUREGROUP_Cinematic = 12,
    TEXTUREGROUP_Effects = 13,
    TEXTUREGROUP_EffectsNotFiltered = 14,
    TEXTUREGROUP_Skybox = 15,
    TEXTUREGROUP_UI = 16,
    TEXTUREGROUP_Lightmap = 17,
    TEXTUREGROUP_RenderTarget = 18,
    TEXTUREGROUP_MobileFlattened = 19,
    TEXTUREGROUP_ProcBuilding_Face = 20,
    TEXTUREGROUP_ProcBuilding_LightMap = 21,
    TEXTUREGROUP_Shadowmap = 22,
    TEXTUREGROUP_ColorLookupTable = 23,
    TEXTUREGROUP_Terrain_Heightmap = 24,
    TEXTUREGROUP_Terrain_Weightmap = 25,
    TEXTUREGROUP_Bokeh = 26,
    TEXTUREGROUP_IESLightProfile = 27,
    TEXTUREGROUP_Pixels2D = 28,
    TEXTUREGROUP_HierarchicalLOD = 29,
    TEXTUREGROUP_Impostor = 30,
    TEXTUREGROUP_ImpostorNormalDepth = 31,
    TEXTUREGROUP_8BitData = 32,
    TEXTUREGROUP_16BitData = 33,
    TEXTUREGROUP_Project01 = 34,
    TEXTUREGROUP_Project02 = 35,
    TEXTUREGROUP_Project03 = 36,
    TEXTUREGROUP_Project04 = 37,
    TEXTUREGROUP_Project05 = 38,
    TEXTUREGROUP_Project06 = 39,
    TEXTUREGROUP_Project07 = 40,
    TEXTUREGROUP_Project08 = 41,
    TEXTUREGROUP_Project09 = 42,
    TEXTUREGROUP_Project10 = 43,
    TEXTUREGROUP_Project11 = 44,
    TEXTUREGROUP_Project12 = 45,
    TEXTUREGROUP_Project13 = 46,
    TEXTUREGROUP_Project14 = 47,
    TEXTUREGROUP_Project15 = 48,
    TEXTUREGROUP_Project16 = 49,
    TEXTUREGROUP_Project17 = 50,
    TEXTUREGROUP_Project18 = 51,
    TEXTUREGROUP_MAX = 52,
};

enum TextureMipGenSettings {
    TMGS_FromTextureGroup = 0,
    TMGS_SimpleAverage = 1,
    TMGS_Sharpen0 = 2,
    TMGS_Sharpen1 = 3,
    TMGS_Sharpen2 = 4,
    TMGS_Sharpen3 = 5,
    TMGS_Sharpen4 = 6,
    TMGS_Sharpen5 = 7,
    TMGS_Sharpen6 = 8,
    TMGS_Sharpen7 = 9,
    TMGS_Sharpen8 = 10,
    TMGS_Sharpen9 = 11,
    TMGS_Sharpen10 = 12,
    TMGS_NoMipmaps = 13,
    TMGS_LeaveExistingMips = 14,
    TMGS_Blur1 = 15,
    TMGS_Blur2 = 16,
    TMGS_Blur3 = 17,
    TMGS_Blur4 = 18,
    TMGS_Blur5 = 19,
    TMGS_Unfiltered = 20,
    TMGS_Angular = 21,
    TMGS_MAX = 22,
};

