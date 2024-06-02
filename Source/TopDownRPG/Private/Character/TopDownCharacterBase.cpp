#include "Character/TopDownCharacterBase.h"

ATopDownCharacterBase::ATopDownCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ATopDownCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}