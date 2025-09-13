#include "AscMapKit/Public/Core/Global/AscMapKitGlobals.h"

template<typename T>
static T *LoadAsset(const TCHAR *Path)
{
	return LoadObject<T>(nullptr, Path);
}

UAscEnvironmentAreaDataAsset *UAscMapKitGlobals::GetEnvironmentAreaDataAsset()
{
	static UAscEnvironmentAreaDataAsset *Cached = LoadAsset<UAscEnvironmentAreaDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscEnvironmentAreaDataAsset.DA_AscEnvironmentAreaDataAsset"));
	return Cached;
}

UAscDecorDataAsset *UAscMapKitGlobals::GetDecorDataAsset()
{
	static UAscDecorDataAsset *Cached = LoadAsset<UAscDecorDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscDecorData.DA_AscDecorData"));
	return Cached;
}

UAscDoorDataAsset *UAscMapKitGlobals::GetDoorDataAsset()
{
	static UAscDoorDataAsset *Cached = LoadAsset<UAscDoorDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscDoorData.DA_AscDoorData"));
	return Cached;
}

UAscDoorFrameDataAsset * UAscMapKitGlobals::GetDoorFrameDataAsset()
{
	static UAscDoorFrameDataAsset *Cached = LoadAsset<UAscDoorFrameDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscDoorFrameData.DA_AscDoorFrameData"));
	return Cached;
}

UAscEnemyDataAsset *UAscMapKitGlobals::GetEnemyDataAsset()
{
	static UAscEnemyDataAsset *Cached = LoadAsset<UAscEnemyDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscEnemyData.DA_AscEnemyData"));
	return Cached;
}

UAscFanDataAsset *UAscMapKitGlobals::GetFanDataAsset()
{
	static UAscFanDataAsset *Cached = LoadAsset<UAscFanDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscFanData.DA_AscFanData"));
	return Cached;
}

UAscTriggerDataAsset *UAscMapKitGlobals::GetTriggerDataAsset()
{
	static UAscTriggerDataAsset *Cached = LoadAsset<UAscTriggerDataAsset>(TEXT("/AscMapKit/Editor/Tools/Data/DA_AscTriggerData.DA_AscTriggerData"));
	return Cached;
}