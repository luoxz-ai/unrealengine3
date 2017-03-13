/*=============================================================================
	UnCorObj.h: Standard core object definitions.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.
=============================================================================*/

/*-----------------------------------------------------------------------------
	UPackage.
-----------------------------------------------------------------------------*/

//
// A package.
//
class UPackage : public UObject
{
	DECLARE_CLASS(UPackage,UObject,0,Core)

	// Variables.
	UBOOL Bound;
	DWORD PackageFlags;
	UBOOL bDirty;			// Used by the editor to determine if a package has been changed

	// Constructors.
	UPackage();

	// UPackage interface.
	void* GetExport( const TCHAR* ExportName, UBOOL Checked );
};

/*-----------------------------------------------------------------------------
	USubsystem.
-----------------------------------------------------------------------------*/

//
// A subsystem.
//
class USubsystem : public UObject, public FExec
{
	DECLARE_ABSTRACT_CLASS(USubsystem,UObject,CLASS_Transient,Core)
	NO_DEFAULT_CONSTRUCTOR(USubsystem)

	// USubsystem interface.
	virtual void Tick( FLOAT DeltaTime )
	{}
};

/*-----------------------------------------------------------------------------
	UCommandlet.
-----------------------------------------------------------------------------*/

//
// A command-line applet.
//
struct UCommandlet_eventMain_Parms
{
	FString InParms;
	INT ReturnValue;
};
class UCommandlet : public UObject
{
	DECLARE_CLASS(UCommandlet,UObject,CLASS_Transient|CLASS_Abstract|CLASS_Localized,Core)
	FString HelpCmd, HelpOneLiner, HelpUsage, HelpWebLink;
	FStringNoInit HelpParm[16], HelpDesc[16];
	UCommandlet();
	BITFIELD IsServer      :1;
	BITFIELD IsClient      :1;
	BITFIELD IsEditor      :1;
	BITFIELD LogToConsole  :1;
	BITFIELD LazyLoad      :1;
	BITFIELD ShowErrorCount:1;
	virtual INT Main( const TCHAR* Parms );
	DECLARE_FUNCTION(execMain)
    INT eventMain(const FString& InParms)
    {
		UCommandlet_eventMain_Parms Parms;
        Parms.InParms=InParms;
        ProcessEvent(FindFunctionChecked(NAME_Main),&Parms);
		return Parms.ReturnValue;
    }
};

/*-----------------------------------------------------------------------------
	ULanguage.
-----------------------------------------------------------------------------*/

//
// A language (special case placeholder class).
//
class ULanguage : public UObject
{
	DECLARE_ABSTRACT_CLASS(ULanguage,UObject,CLASS_Transient,Core)
	NO_DEFAULT_CONSTRUCTOR(ULanguage)
	ULanguage* SuperLanguage;
};

/*-----------------------------------------------------------------------------
	UTextBuffer.
-----------------------------------------------------------------------------*/

//
// An object that holds a bunch of text.  The text is contiguous and, if
// of nonzero length, is terminated by a NULL at the very last position.
//
class UTextBuffer : public UObject, public FOutputDevice
{
	DECLARE_CLASS(UTextBuffer,UObject,0,Core)

	// Variables.
	INT Pos, Top;
	FString Text;

	// Constructors.
	UTextBuffer( const TCHAR* Str=TEXT("") );

	// UObject interface.
	void Serialize( FArchive& Ar );

	// FOutputDevice interface.
	void Serialize( const TCHAR* Data, EName Event );
};

/*----------------------------------------------------------------------------
	USystem.
----------------------------------------------------------------------------*/

class USystem : public USubsystem
{
	DECLARE_CLASS(USystem,USubsystem,CLASS_Config,Core)

	// Variables.
	INT LicenseeMode; 
	INT PurgeCacheDays;
	FString SavePath;
	FString CachePath;
	FString CacheExt;
	TArray<FString> Paths;
	TArray<FName> Suppress;
	TArray<FString> Extensions;
	TArray<FString> LocalizationPaths;

	// Constructors.
	void StaticConstructor();
	USystem();

	// FExec interface.
	UBOOL Exec( const TCHAR* Cmd, FOutputDevice& Ar=*GLog );
};

/*-----------------------------------------------------------------------------
	UComponent.
-----------------------------------------------------------------------------*/

class UComponent : public UObject
{
	DECLARE_CLASS(UComponent,UObject,CLASS_Abstract,Core)

	// UObject interface.

	virtual UBOOL IsPendingKill() { check(GetOuter()); return GetOuter()->IsPendingKill(); }
};

/*----------------------------------------------------------------------------
	The End.
----------------------------------------------------------------------------*/
