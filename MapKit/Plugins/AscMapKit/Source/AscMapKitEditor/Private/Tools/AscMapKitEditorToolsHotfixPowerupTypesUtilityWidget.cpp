#include "AscMapKitEditor/Public/Tools/AscMapKitEditorToolsHotfixPowerupTypesUtilityWidget.h"

#include "AscMapKit/Public/Powerup/AscMapKitPowerupActor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget()
{
}

void UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::NativeConstruct()
{
	Super::NativeConstruct();

	TxtBoxOutput->SetText(FText::FromString(TEXT("Waiting...")));

	BtnExecute->OnClicked.Clear();
	BtnExecute->OnClicked.AddDynamic(this, &UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::BtnExecuteOnClick);
}

void UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::BtnExecuteOnClick()
{
	const auto TransactionContext = FString::Printf(TEXT("%s::%hc"), *GetClass()->GetName(), *__FUNCTION__);

	ClearOutput();

	AppendOutput(TEXT("Executing..."));

	TArray<AActor *> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAscMapKitPowerupActor::StaticClass(), FoundActors);

	if (FoundActors.Num() > 0)
	{
		UKismetSystemLibrary::BeginTransaction(TransactionContext, FText::FromString(TEXT("Hotfix Powerup Types")), nullptr);

		for (auto i = 0; i < FoundActors.Num(); i++)
		{
			const auto Powerup = Cast<AAscMapKitPowerupActor>(FoundActors[i]);

			if (Powerup == nullptr)
				continue;

			const auto PowerupName = Powerup->GetName();
			const auto ActionMessage = FString::Printf(TEXT("Hotfixed Powerup Type: (%s)"), *PowerupName);

			auto PowerupType = EAscMapKitPowerupTypeEnum::None;

			if (PowerupName.Contains(TEXT("Laser")) && !PowerupName.Contains(TEXT("Coupler")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_01;
			else if (PowerupName.Contains(TEXT("Shred")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_02;
			else if (PowerupName.Contains(TEXT("Mech")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_03;
			else if (PowerupName.Contains(TEXT("Tox")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_04;
			else if (PowerupName.Contains(TEXT("Coil")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_05;
			else if (PowerupName.Contains(TEXT("Phase")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_06;
			else if (PowerupName.Contains(TEXT("Hydra")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_07;
			else if (PowerupName.Contains(TEXT("Neutron")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_08;
			else if (PowerupName.Contains(TEXT("Hammer")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Pri_09;
			else if (PowerupName.Contains(TEXT("Assault")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_01;
			else if (PowerupName.Contains(TEXT("Assault")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_02;
			else if (PowerupName.Contains(TEXT("Prowler")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_03;
			else if (PowerupName.Contains(TEXT("Prowler")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_04;
			else if (PowerupName.Contains(TEXT("RNA")))
            	PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_05;
			else if (PowerupName.Contains(TEXT("Deadeye")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_06;
			else if (PowerupName.Contains(TEXT("Deadeye")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_07;
			else if (PowerupName.Contains(TEXT("Vex")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_08;
			else if (PowerupName.Contains(TEXT("Aftershock")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Sec_09;
			else if (PowerupName.Contains(TEXT("Radial")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_01;
			else if (PowerupName.Contains(TEXT("Radial")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_02;
			else if (PowerupName.Contains(TEXT("Bio")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_03;
			else if (PowerupName.Contains(TEXT("Bio")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_04;
			else if (PowerupName.Contains(TEXT("Howler")) && !PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_05;
			else if (PowerupName.Contains(TEXT("Howler")) && PowerupName.Contains(TEXT("Pack")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_06;
			else if (PowerupName.Contains(TEXT("Chaff")))
				PowerupType = EAscMapKitPowerupTypeEnum::Weapon_Tet_07;
			else if (PowerupName.Contains(TEXT("Power")) && !PowerupName.Contains(TEXT("Transfer")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_01;
			else if (PowerupName.Contains(TEXT("Shield")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_02;
			else if (PowerupName.Contains(TEXT("Conceal")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_03;
			else if (PowerupName.Contains(TEXT("Invincible")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_04;
			else if (PowerupName.Contains(TEXT("LaserCoupler")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_05;
			else if (PowerupName.Contains(TEXT("Ammo")) && !PowerupName.Contains(TEXT("Cache")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_06;
			else if (PowerupName.Contains(TEXT("AmmoCache")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_07;
			else if (PowerupName.Contains(TEXT("Boost")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_08;
			else if (PowerupName.Contains(TEXT("PowerTransfer")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_09;
			else if (PowerupName.Contains(TEXT("NavmapReveal")))
				PowerupType = EAscMapKitPowerupTypeEnum::Aux_10;

			if (PowerupType == EAscMapKitPowerupTypeEnum::None)
			{
				const auto WarningMessage = FString::Printf(TEXT("WARN: Could not hotfix powerup type: (%s)!"), *PowerupName);
				AppendOutput(WarningMessage);
				GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, WarningMessage);
			}
			else
			{
				UKismetSystemLibrary::TransactObject(Powerup);
				Powerup->MapKit.PowerupType = PowerupType;
				AppendOutput(ActionMessage);
				GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, ActionMessage);
			}
		}

		UKismetSystemLibrary::EndTransaction();

		AppendOutput(TEXT("...done!"));
	}
	else
	{
		const auto NotFoundMessage = TEXT("No powerups were found (AAscMapKitPowerupActor).");
		AppendOutput(NotFoundMessage);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, NotFoundMessage);
	}

	ScrollBoxOutput->ScrollToEnd();
}

void UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::AppendOutput(const FString &Arg)
{
	const auto Line = FString::Printf(TEXT("%s\n%s"), *TxtBoxOutput->GetText().ToString(), *Arg);
	TxtBoxOutput->SetText(FText::FromString(Line));
	ScrollBoxOutput->ScrollToEnd();
}

void UAscMapKitEditorToolsHotfixPowerupTypesUtilityWidget::ClearOutput()
{
	TxtBoxOutput->SetText(FText::FromString(TEXT("")));
}