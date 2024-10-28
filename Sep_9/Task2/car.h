#pragma once
#include "ivehicle.h"

class Car : public IVehicle {
public:
	void startEngine() override;
	void stopEngine() override;
	void refuel() override;
};