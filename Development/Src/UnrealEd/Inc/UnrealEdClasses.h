/*===========================================================================
    C++ class definitions exported from UnrealScript.
    This is automatically generated by the tools.
    DO NOT modify this manually! Edit the corresponding .uc files instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif


#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern FName UNREALED_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif


#ifndef NAMES_ONLY


class AASVActor : public AActor
{
public:
    class USkeletalMeshComponent* SkelComponent;
    DECLARE_CLASS(AASVActor,AActor,0,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(AASVActor)
};


class ACascadePreviewActor : public AActor
{
public:
    class UParticleSystemComponent* PartSysComp;
    class UCascadePreviewComponent* CascPrevComp;
    DECLARE_CLASS(ACascadePreviewActor,AActor,0,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(ACascadePreviewActor)
};


class APhATActor : public AActor
{
public:
    class UPhATSkeletalMeshComponent* SkelComponent;
    class URB_Handle* MouseHandle;
    INT PhysicsAssetEditor;
    DECLARE_CLASS(APhATActor,AActor,0,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(APhATActor)
};


class APhATFloor : public AStaticMeshActor
{
public:
    DECLARE_CLASS(APhATFloor,AStaticMeshActor,0,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(APhATFloor)
};


class UCascadeOptions : public UObject
{
public:
    BITFIELD bShowModuleDump:1 GCC_PACK(PROPERTY_ALIGNMENT);
    DECLARE_CLASS(UCascadeOptions,UObject,0|CLASS_Config,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(UCascadeOptions)
};


class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
    DECLARE_CLASS(UCascadePreviewComponent,UPrimitiveComponent,0,UnrealEd)
	virtual void Render(const FSceneContext& Context,FPrimitiveRenderInterface* PRI);
};


class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
    DECLARE_CLASS(UPhATSkeletalMeshComponent,USkeletalMeshComponent,0,UnrealEd)
	// FPrimitiveViewInterface interface.
	virtual DWORD GetLayerMask(const FSceneContext& Context) const;
	virtual void Render(const FSceneContext& Context, struct FPrimitiveRenderInterface* PRI);
	virtual void RenderForeground(const FSceneContext& Context, struct FPrimitiveRenderInterface* PRI);
	virtual void RenderHitTest(const FSceneContext& Context,struct FPrimitiveRenderInterface* PRI);
	virtual void RenderForegroundHitTest(const FSceneContext& Context,struct FPrimitiveRenderInterface* PRI);
	virtual void RenderShadowDepth(const struct FSceneContext& Context, struct FPrimitiveRenderInterface* PRI);

	// PhATSkeletalMeshComponent interface
	void RenderAssetTools(const FSceneContext& Context, struct FPrimitiveRenderInterface* PRI, UBOOL bHitTest, UBOOL bDrawShadows);
	void RenderForegroundAssetTools(const FSceneContext& Context, struct FPrimitiveRenderInterface* PRI, UBOOL bHitTest, UBOOL bDrawShadows);
	void DrawHierarchy(FPrimitiveRenderInterface* PRI);
};


class UGenericBrowserType : public UObject
{
public:
    FStringNoInit Description;
    TArrayNoInit<FGenericBrowserTypeInfo> SupportInfo;
    FColor BorderColor;
    DECLARE_CLASS(UGenericBrowserType,UObject,0,UnrealEd)
	FString GetBrowserTypeDescription() { return Description; }
	FColor GetBorderColor( UObject* InObject );

	/**
	 * Does any initial set up that the type requires.
	 */
	virtual void Init() {}
	
	/**
	 * Checks to see if the specified class is handled by this type.
	 *
	 * @param	InObject	The object we need to check if we support
	 */
	UBOOL Supports( UObject* InObject );
	
	/**
	 * Creates a context menu specific to the type of object passed in.
	 *
	 * @param	InObject	The object we need the menu for
	 */
	wxMenu* GetContextMenu( UObject* InObject );
	
	/**
	 * Invokes the editor for an object.
	 *
	 * @param	InObject	The object to invoke the editor for
	 */
	virtual UBOOL ShowObjectEditor( UObject* InObject ) { return 0; }
	
	/**
	 * Invokes the editor for all selected objects.
	 */
	virtual UBOOL ShowObjectEditor();
	
	/**
	 * Invokes a custom menu item command for every selected object
	 * of a supported class.
	 *
	 * @param InCommand		The command to execute
	 */
	 
	virtual void InvokeCustomCommand( INT InCommand );

	/**
	 * Invokes a custom menu item command.
	 *
	 * @param InCommand		The command to execute
	 * @param InObject		The object to invoke the command against
	 */

	virtual void InvokeCustomCommand( INT InCommand, UObject* InObject ) {}
	
	/**
	 * Calls the virtual "DoubleClick" function for each object
	 * of a supported class.
	 */
	 
	virtual void DoubleClick();

	/**
	 * Allows each type to handle double clicking as they see fit.
	 */
	 
	virtual void DoubleClick( UObject* InObject );
};


class UGenericBrowserType_All : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_All,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor();
	virtual void InvokeCustomCommand( INT InCommand );
	virtual void DoubleClick();
};


class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Animation,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_AnimTree,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_Material : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Material,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_MaterialInstance : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_MaterialInstance,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_ParticleSystem,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_PhysicsAsset,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Prefab,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
};


class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Sequence,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
};


class UGenericBrowserType_SHM : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_SHM,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
};


class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_SkeletalMesh,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
	virtual void InvokeCustomCommand( INT InCommand, UObject* InObject );
};


class UGenericBrowserType_SoundCue : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_SoundCue,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
	virtual void InvokeCustomCommand( INT InCommand, UObject* InObject );
	virtual void DoubleClick( UObject* InObject );
};


class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Sounds,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
	virtual void InvokeCustomCommand( INT InCommand, UObject* InObject );
	virtual void DoubleClick( UObject* InObject );

	static void Play( USoundCue* InSound );
	static void Play( USoundNode* InSound );	
	static void Stop();
};


class UGenericBrowserType_SoundWave : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_SoundWave,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual void InvokeCustomCommand( INT InCommand, UObject* InObject );
	virtual void DoubleClick( UObject* InObject );
};


class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_StaticMesh,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_TerrainLayer,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
};


class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_TerrainMaterial,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
};


class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:
    DECLARE_CLASS(UGenericBrowserType_Texture,UGenericBrowserType,0,UnrealEd)
	virtual void Init();
	virtual UBOOL ShowObjectEditor( UObject* InObject );
};


class UInterpEdOptions : public UObject
{
public:
    TArrayNoInit<FInterpEdSelKey> SelectedKeys;
    DECLARE_CLASS(UInterpEdOptions,UObject,0,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(UInterpEdOptions)
};

struct FKismetKeyBind
{
    FName Key;
    BITFIELD bControl:1 GCC_PACK(PROPERTY_ALIGNMENT);
    class UClass* SeqObjClass GCC_PACK(PROPERTY_ALIGNMENT);
};


class UKismetBindings : public UObject
{
public:
    TArrayNoInit<FKismetKeyBind> Bindings;
    DECLARE_CLASS(UKismetBindings,UObject,0|CLASS_Config,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(UKismetBindings)
};


class UPhATSimOptions : public UObject
{
public:
    FLOAT SimSpeed;
    BITFIELD bDrawContacts:1 GCC_PACK(PROPERTY_ALIGNMENT);
    BITFIELD bPromptOnBoneDelete:1;
    FLOAT FloorGap GCC_PACK(PROPERTY_ALIGNMENT);
    FLOAT MouseLinearDamping;
    FLOAT MouseLinearStiffness;
    FLOAT MouseLinearMaxDistance;
    FLOAT MouseAngularDamping;
    FLOAT MouseAngularStiffness;
    FLOAT LightDirection;
    FLOAT LightElevation;
    FLOAT SkyBrightness;
    FColor SkyColor;
    FLOAT Brightness;
    FColor Color;
    FLOAT AngularSnap;
    FLOAT LinearSnap;
    DECLARE_CLASS(UPhATSimOptions,UObject,0|CLASS_Config,UnrealEd)
    NO_DEFAULT_CONSTRUCTOR(UPhATSimOptions)
};

#endif


#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif

#if SUPPORTS_PRAGMA_PACK
#pragma pack (pop)
#endif

#ifdef STATIC_LINKING_MOJO
#ifndef UNREALED_NATIVE_DEFS
#define UNREALED_NATIVE_DEFS

DECLARE_NATIVE_TYPE(UnrealEd,AASVActor);
DECLARE_NATIVE_TYPE(UnrealEd,UCascadeOptions);
DECLARE_NATIVE_TYPE(UnrealEd,ACascadePreviewActor);
DECLARE_NATIVE_TYPE(UnrealEd,UCascadePreviewComponent);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_All);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Animation);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_AnimTree);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Material);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_MaterialInstance);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_ParticleSystem);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_PhysicsAsset);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Prefab);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Sequence);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_SHM);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_SkeletalMesh);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_SoundCue);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Sounds);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_SoundWave);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_StaticMesh);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_TerrainLayer);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_TerrainMaterial);
DECLARE_NATIVE_TYPE(UnrealEd,UGenericBrowserType_Texture);
DECLARE_NATIVE_TYPE(UnrealEd,UInterpEdOptions);
DECLARE_NATIVE_TYPE(UnrealEd,UKismetBindings);
DECLARE_NATIVE_TYPE(UnrealEd,APhATActor);
DECLARE_NATIVE_TYPE(UnrealEd,APhATFloor);
DECLARE_NATIVE_TYPE(UnrealEd,UPhATSimOptions);
DECLARE_NATIVE_TYPE(UnrealEd,UPhATSkeletalMeshComponent);

#define AUTO_INITIALIZE_REGISTRANTS_UNREALED \
	AASVActor::StaticClass(); \
	UCascadeOptions::StaticClass(); \
	ACascadePreviewActor::StaticClass(); \
	UCascadePreviewComponent::StaticClass(); \
	UGenericBrowserType::StaticClass(); \
	UGenericBrowserType_All::StaticClass(); \
	UGenericBrowserType_Animation::StaticClass(); \
	UGenericBrowserType_AnimTree::StaticClass(); \
	UGenericBrowserType_Material::StaticClass(); \
	UGenericBrowserType_MaterialInstance::StaticClass(); \
	UGenericBrowserType_ParticleSystem::StaticClass(); \
	UGenericBrowserType_PhysicsAsset::StaticClass(); \
	UGenericBrowserType_Prefab::StaticClass(); \
	UGenericBrowserType_Sequence::StaticClass(); \
	UGenericBrowserType_SHM::StaticClass(); \
	UGenericBrowserType_SkeletalMesh::StaticClass(); \
	UGenericBrowserType_SoundCue::StaticClass(); \
	UGenericBrowserType_Sounds::StaticClass(); \
	UGenericBrowserType_SoundWave::StaticClass(); \
	UGenericBrowserType_StaticMesh::StaticClass(); \
	UGenericBrowserType_TerrainLayer::StaticClass(); \
	UGenericBrowserType_TerrainMaterial::StaticClass(); \
	UGenericBrowserType_Texture::StaticClass(); \
	UInterpEdOptions::StaticClass(); \
	UKismetBindings::StaticClass(); \
	APhATActor::StaticClass(); \
	APhATFloor::StaticClass(); \
	UPhATSimOptions::StaticClass(); \
	UPhATSkeletalMeshComponent::StaticClass(); \
	UStaticMeshEditorComponent::StaticClass(); \
	UUnrealEdEngine::StaticClass(); \

#endif // UNREALED_NATIVE_DEFS

#ifdef NATIVES_ONLY
#endif // NATIVES_ONLY
#endif // STATIC_LINKING_MOJO

#ifdef VERIFY_CLASS_SIZES
VERIFY_CLASS_SIZE_NODIE(AASVActor)
VERIFY_CLASS_SIZE_NODIE(UCascadeOptions)
VERIFY_CLASS_SIZE_NODIE(ACascadePreviewActor)
VERIFY_CLASS_SIZE_NODIE(UCascadePreviewComponent)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_All)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Animation)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_AnimTree)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Material)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_MaterialInstance)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_ParticleSystem)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_PhysicsAsset)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Prefab)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Sequence)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_SHM)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_SkeletalMesh)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_SoundCue)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Sounds)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_SoundWave)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_StaticMesh)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_TerrainLayer)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_TerrainMaterial)
VERIFY_CLASS_SIZE_NODIE(UGenericBrowserType_Texture)
VERIFY_CLASS_SIZE_NODIE(UInterpEdOptions)
VERIFY_CLASS_SIZE_NODIE(UKismetBindings)
VERIFY_CLASS_SIZE_NODIE(APhATActor)
VERIFY_CLASS_SIZE_NODIE(APhATFloor)
VERIFY_CLASS_SIZE_NODIE(UPhATSimOptions)
VERIFY_CLASS_SIZE_NODIE(UPhATSkeletalMeshComponent)
VERIFY_CLASS_OFFSET_NODIE(U,StaticMeshEditorComponent,StaticMeshEditor)
VERIFY_CLASS_SIZE_NODIE(UStaticMeshEditorComponent)
VERIFY_CLASS_OFFSET_NODIE(U,UnrealEdEngine,hWndMain)
VERIFY_CLASS_SIZE_NODIE(UUnrealEdEngine)
#endif // VERIFY_CLASS_SIZES
