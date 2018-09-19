/********************************************************************************************************/
/* Copyright by Kacper "Ogniok" Kowalczuk */
/********************************************************************************************************/
#pragma once

#include "Core.h"
#include "GameJoltAPIPrivatePCH.h"
/********************************************************************************************************/
struct FGameJoltRequestData
{
	ERequest RequestType;

	int32 TableID;

	FString Key;
	bool UserStorage;

	/* Clears stored data */
	void Reset();

	FGameJoltRequestData();
	FGameJoltRequestData(ERequest RequestType);
	FGameJoltRequestData(ERequest RequestType, int32 TableID);
};
/********************************************************************************************************/