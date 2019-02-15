//********************************** Banshee Engine (www.banshee3d.com) **************************************************//
//************** Copyright (c) 2016-2019 Marko Pintera (marko.pintera@gmail.com). All rights reserved. *******************//
#include "BsScriptAnimationSplitInfo.editor.generated.h"
#include "BsMonoMethod.h"
#include "BsMonoClass.h"
#include "BsMonoUtil.h"
#include "../../bsf/Source/Foundation/bsfCore/Importer/BsMeshImportOptions.h"

namespace bs
{
	ScriptAnimationSplitInfo::ScriptAnimationSplitInfo(MonoObject* managedInstance, const SPtr<AnimationSplitInfo>& value)
		:ScriptObject(managedInstance), mInternal(value)
	{
	}

	void ScriptAnimationSplitInfo::initRuntimeData()
	{
		metaData.scriptClass->addInternalCall("Internal_AnimationSplitInfo", (void*)&ScriptAnimationSplitInfo::Internal_AnimationSplitInfo);
		metaData.scriptClass->addInternalCall("Internal_AnimationSplitInfo0", (void*)&ScriptAnimationSplitInfo::Internal_AnimationSplitInfo0);
		metaData.scriptClass->addInternalCall("Internal_getname", (void*)&ScriptAnimationSplitInfo::Internal_getname);
		metaData.scriptClass->addInternalCall("Internal_setname", (void*)&ScriptAnimationSplitInfo::Internal_setname);
		metaData.scriptClass->addInternalCall("Internal_getstartFrame", (void*)&ScriptAnimationSplitInfo::Internal_getstartFrame);
		metaData.scriptClass->addInternalCall("Internal_setstartFrame", (void*)&ScriptAnimationSplitInfo::Internal_setstartFrame);
		metaData.scriptClass->addInternalCall("Internal_getendFrame", (void*)&ScriptAnimationSplitInfo::Internal_getendFrame);
		metaData.scriptClass->addInternalCall("Internal_setendFrame", (void*)&ScriptAnimationSplitInfo::Internal_setendFrame);
		metaData.scriptClass->addInternalCall("Internal_getisAdditive", (void*)&ScriptAnimationSplitInfo::Internal_getisAdditive);
		metaData.scriptClass->addInternalCall("Internal_setisAdditive", (void*)&ScriptAnimationSplitInfo::Internal_setisAdditive);

	}

	MonoObject* ScriptAnimationSplitInfo::create(const SPtr<AnimationSplitInfo>& value)
	{
		if(value == nullptr) return nullptr; 

		bool dummy = false;
		void* ctorParams[1] = { &dummy };

		MonoObject* managedInstance = metaData.scriptClass->createInstance("bool", ctorParams);
		new (bs_alloc<ScriptAnimationSplitInfo>()) ScriptAnimationSplitInfo(managedInstance, value);
		return managedInstance;
	}
	void ScriptAnimationSplitInfo::Internal_AnimationSplitInfo(MonoObject* managedInstance)
	{
		SPtr<AnimationSplitInfo> instance = bs_shared_ptr_new<AnimationSplitInfo>();
		new (bs_alloc<ScriptAnimationSplitInfo>())ScriptAnimationSplitInfo(managedInstance, instance);
	}

	void ScriptAnimationSplitInfo::Internal_AnimationSplitInfo0(MonoObject* managedInstance, MonoString* name, uint32_t startFrame, uint32_t endFrame, bool isAdditive)
	{
		String tmpname;
		tmpname = MonoUtil::monoToString(name);
		SPtr<AnimationSplitInfo> instance = bs_shared_ptr_new<AnimationSplitInfo>(tmpname, startFrame, endFrame, isAdditive);
		new (bs_alloc<ScriptAnimationSplitInfo>())ScriptAnimationSplitInfo(managedInstance, instance);
	}

	MonoString* ScriptAnimationSplitInfo::Internal_getname(ScriptAnimationSplitInfo* thisPtr)
	{
		String tmp__output;
		tmp__output = thisPtr->getInternal()->name;

		MonoString* __output;
		__output = MonoUtil::stringToMono(tmp__output);

		return __output;
	}

	void ScriptAnimationSplitInfo::Internal_setname(ScriptAnimationSplitInfo* thisPtr, MonoString* value)
	{
		String tmpvalue;
		tmpvalue = MonoUtil::monoToString(value);
		thisPtr->getInternal()->name = tmpvalue;
	}

	uint32_t ScriptAnimationSplitInfo::Internal_getstartFrame(ScriptAnimationSplitInfo* thisPtr)
	{
		uint32_t tmp__output;
		tmp__output = thisPtr->getInternal()->startFrame;

		uint32_t __output;
		__output = tmp__output;

		return __output;
	}

	void ScriptAnimationSplitInfo::Internal_setstartFrame(ScriptAnimationSplitInfo* thisPtr, uint32_t value)
	{
		thisPtr->getInternal()->startFrame = value;
	}

	uint32_t ScriptAnimationSplitInfo::Internal_getendFrame(ScriptAnimationSplitInfo* thisPtr)
	{
		uint32_t tmp__output;
		tmp__output = thisPtr->getInternal()->endFrame;

		uint32_t __output;
		__output = tmp__output;

		return __output;
	}

	void ScriptAnimationSplitInfo::Internal_setendFrame(ScriptAnimationSplitInfo* thisPtr, uint32_t value)
	{
		thisPtr->getInternal()->endFrame = value;
	}

	bool ScriptAnimationSplitInfo::Internal_getisAdditive(ScriptAnimationSplitInfo* thisPtr)
	{
		bool tmp__output;
		tmp__output = thisPtr->getInternal()->isAdditive;

		bool __output;
		__output = tmp__output;

		return __output;
	}

	void ScriptAnimationSplitInfo::Internal_setisAdditive(ScriptAnimationSplitInfo* thisPtr, bool value)
	{
		thisPtr->getInternal()->isAdditive = value;
	}
}
