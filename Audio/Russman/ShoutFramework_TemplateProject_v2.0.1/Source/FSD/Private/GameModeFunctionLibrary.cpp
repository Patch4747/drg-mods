#include "GameModeFunctionLibrary.h"

class AActor;
class AFSDGameState;
class UObject;
class USeamlessTravelEventKey;

bool UGameModeFunctionLibrary::IsCloseToImportantLocation(AFSDGameState* GameState, const FVector& Location) {
    return false;
}

FTransform UGameModeFunctionLibrary::FindRandomEscapePodLocation(UObject* WorldContextObject) {
    return FTransform{};
}

FTransform UGameModeFunctionLibrary::FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom) {
    return FTransform{};
}

void UGameModeFunctionLibrary::AddSeamlessTravelEventKey(UObject* WorldContextObject, USeamlessTravelEventKey* Key) {
}

UGameModeFunctionLibrary::UGameModeFunctionLibrary() {
}

