<<<<<<< HEAD


=======
>>>>>>> 8ba563382c6bd64e9b73f70abfef89a6c15e1b59
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorBaseCharacter.generated.h"

UCLASS()
class WARRIOR_API AWarriorBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWarriorBaseCharacter();

<<<<<<< HEAD
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

=======
>>>>>>> 8ba563382c6bd64e9b73f70abfef89a6c15e1b59
};
