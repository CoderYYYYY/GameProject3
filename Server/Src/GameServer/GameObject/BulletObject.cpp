﻿#include "stdafx.h"
#include "BulletObject.h"
#include "SceneObject.h"

CBulletObject::CBulletObject(CSceneObject* pObject)
{
	m_pSceneObject = pObject;
}

CBulletObject::~CBulletObject()
{
	m_pSceneObject = NULL;
}

BOOL CBulletObject::OnUpdate(UINT32 dwTick)
{
	return TRUE;
}

