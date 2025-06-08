#pragma once

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int32 InKey = -1)
	{
		if (GEngine == nullptr)
		{
			return;
		}

		GEngine->AddOnScreenDebugMessage(InKey, 7.0f, Color, Msg);
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
	}
}