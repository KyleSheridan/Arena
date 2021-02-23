// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackNotifyState.h"
#include "ArenaCharacter.h"

#include "Engine.h"

void UAttackNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL) {
		AArenaCharacter* player = Cast<AArenaCharacter>(MeshComp->GetOwner());
		if (player != NULL) {
			player->AttackStart();
		}
	}
}

void UAttackNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL) {
		AArenaCharacter* player = Cast<AArenaCharacter>(MeshComp->GetOwner());
		if (player != NULL) {
			player->AttackEnd();
		}
	}
}