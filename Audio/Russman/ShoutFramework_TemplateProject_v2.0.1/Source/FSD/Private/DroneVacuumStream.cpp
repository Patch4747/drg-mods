#include "DroneVacuumStream.h"
#include "Components/SceneComponent.h"

class AFoamPuddle;

void ADroneVacuumStream::Server_StartVacuumingPuddle_Implementation(AFoamPuddle* puddle) {
}

ADroneVacuumStream::ADroneVacuumStream() {
    this->VacuumPoint = CreateDefaultSubobject<USceneComponent>(TEXT("VacuumSource"));
}

