#include "AscMapKit/Public/Enemy/AscMapKitEnemyAnimInstance.h"

UAscMapKitEnemyAnimInstance::UAscMapKitEnemyAnimInstance(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}

void UAscMapKitEnemyAnimInstance::NativeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	for (auto i = 0; i < 20; i++)
		MontagePlayShimIn(i);
}

void UAscMapKitEnemyAnimInstance::MontagePlayShimIn(const int32 &Index)
{
	bool bArg = false;

	switch (Index)
	{
		case 0:
			bArg = bAttack0;
			break;
		case 1:
			bArg = bAttack1;
			break;
		case 2:
			bArg = bAttack2;
			break;
		case 3:
			bArg = bAttack3;
			break;
		case 4:
			bArg = bAttack4;
			break;
		case 5:
			bArg = bAttack5;
			break;
		case 6:
			bArg = bAttack6;
			break;
		case 7:
			bArg = bAttack7;
			break;
		case 8:
			bArg = bAttack8;
			break;
		case 9:
			bArg = bAttack9;
			break;
		case 10:
			bArg = bAttack10;
			break;
		case 11:
			bArg = bAttack11;
			break;
		case 12:
			bArg = bAttack12;
			break;
		case 13:
			bArg = bAttack13;
			break;
		case 14:
			bArg = bAttack14;
			break;
		case 15:
			bArg = bAttack15;
			break;
		case 16:
			bArg = bAttack16;
			break;
		case 17:
			bArg = bAttack17;
			break;
		case 18:
			bArg = bAttack18;
			break;
		case 19:
			bArg = bAttack19;
			break;
	}

	if (Montages.IsValidIndex(Index))
		MontagePlay(Index, bArg, Montages[Index]);
}

void UAscMapKitEnemyAnimInstance::MontagePlayShimOut(const int32 &Index)
{
	switch (Index)
	{
		case 0:
			bAttack0 = false;
			break;
		case 1:
			bAttack1 = false;
			break;
		case 2:
			bAttack2 = false;
			break;
		case 3:
			bAttack3 = false;
			break;
		case 4:
			bAttack4 = false;
			break;
		case 5:
			bAttack5 = false;
			break;
		case 6:
			bAttack6 = false;
			break;
		case 7:
			bAttack7 = false;
			break;
		case 8:
			bAttack8 = false;
			break;
		case 9:
			bAttack9 = false;
			break;
		case 10:
			bAttack10 = false;
			break;
		case 11:
			bAttack11 = false;
			break;
		case 12:
			bAttack12 = false;
			break;
		case 13:
			bAttack13 = false;
			break;
		case 14:
			bAttack14 = false;
			break;
		case 15:
			bAttack15 = false;
			break;
		case 16:
			bAttack16 = false;
			break;
		case 17:
			bAttack17 = false;
			break;
		case 18:
			bAttack18 = false;
			break;
		case 19:
			bAttack19 = false;
			break;
	}
}

// todo: parameterize the rest of the Montage_Play params?
void UAscMapKitEnemyAnimInstance::MontagePlay(const int32 &Index, const bool &bArg, UAnimMontage *Montage)
{
	if (Montage && bArg)
	{
		// todo: make play rate a map kit setting? passed in as a property?
		Montage_Play(Montage, 1.f, EMontagePlayReturnType::MontageLength, 0.f, false);

		FOnMontageEnded EndDelegate;
		EndDelegate.BindUObject(this, &UAscMapKitEnemyAnimInstance::OnMontageEnded, Index);
		Montage_SetEndDelegate(EndDelegate, Montage);
	}
}

void UAscMapKitEnemyAnimInstance::OnMontageEnded(UAnimMontage *Montage, bool bInterrupted, const int32 Index)
{
	//UE_LOG(LogTemp, Log, TEXT("OnMontageEnded(): %s"), *Montage->GetName());
	MontagePlayShimOut(Index);
}