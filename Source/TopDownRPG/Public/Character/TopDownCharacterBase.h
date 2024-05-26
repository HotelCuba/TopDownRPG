

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TopDownCharacterBase.generated.h"

UCLASS(Abstract)
class TOPDOWNRPG_API ATopDownCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATopDownCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
