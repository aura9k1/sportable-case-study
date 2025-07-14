// RJP: Code derived from blueprint; Fibonacci Number Generation algorithm

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemPowerCalculator.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API UItemPowerCalculator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, DisplayName="Item Power Calculator")
	static int32 ItemPowerCalculator(int32 n);
};
