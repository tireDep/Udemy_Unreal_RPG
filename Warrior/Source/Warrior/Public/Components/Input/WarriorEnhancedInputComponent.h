#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"

#include "DataAssets/Input/DataAsset_InputConfig.h"

#include "WarriorEnhancedInputComponent.generated.h"

UCLASS()
class WARRIOR_API UWarriorEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
public:
	template<class UserObject, typename CallbackFunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag* InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func);
};
