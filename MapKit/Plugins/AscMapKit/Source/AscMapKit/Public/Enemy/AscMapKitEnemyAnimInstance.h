#pragma once

// UE
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"

// Generated
#include "AscMapKitEnemyAnimInstance.generated.h"

UCLASS(Blueprintable)
class ASCMAPKIT_API UAscMapKitEnemyAnimInstance : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

public:
	void virtual NativeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION()
	void MontagePlayShimIn(const int32 &Index);

	UFUNCTION()
	void MontagePlayShimOut(const int32 &Index);

	UFUNCTION()
	void MontagePlay(const int32 &Index, const bool &bArg, UAnimMontage *Montage);

	UFUNCTION()
	void OnMontageEnded(UAnimMontage *Montage, bool bInterrupted, const int32 Index);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<UAnimMontage *> Montages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
    bool bAttack8;
    	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack11;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack14;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack16;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack17;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack18;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool bAttack19;
};