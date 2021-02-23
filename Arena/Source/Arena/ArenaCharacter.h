// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Components/BoxComponent.h"

#include "ArenaCharacter.generated.h"

UCLASS(config=Game)
class AArenaCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
protected:
	//
	enum Input {
		IAttack = 0,
		IJump
	};

	std::vector<Input> inputBuffer;

public:
	AArenaCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//The total number of attacks in the base attack montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
		int maxNumAttacks;

	//Time in seconds before attack sequence is reset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
		float sequenceResetTime;

	// Sword attack montage
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Animation, meta = (AllowPrivateAccess = "true"))
		class UAnimMontage* KnightAttackMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* SwordCollisionBox;

public:
	//called at start
	virtual void BeginPlay() override;

	//called every frame
	virtual void Tick(float DeltaTime) override;

	//Initiates player attack
	void AttackStart();

	//Stops player attack
	void AttackEnd();

	//sets canAttack variable
	void SetInputActive(bool val) {
		inputActive = val;
	}

protected:
	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	//Triggers attack animations
	void AttackInput();
	
	//remove from buffer after set time
	void RemoveFromBuffer();

	//Adds an input to buffer
	void AddToInputBuffer(enum Input, float);
	
	//Adds an input to buffer
	void AddAttackToInputBuffer();
	
	//Adds an input to buffer
	void AddJumpToInputBuffer();

	//Change the currentAttackAnim variable to the next attack in sequence
	void NextAttackInSequence();

	//Will cancel the sequence after a period of time
	void CancelSequence();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	//time before input gets deleted from buffer
	float bufferTime = 0.5f;

	//to check if an action can be performed
	bool inputActive = true;

	//number representing the current attack in the sequence
	int currentAttackAnim = 1;

	//used to check when last attack was for resetting attack sequence
	float timeSinceLastAttack = 0;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

