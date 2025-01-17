#pragma once
#include "ElectricEngine.hpp"
#include "Car.hpp"
class ElectricCar : public virtual Car
{
protected:
    ElectricEngine* engine_;
    void charge();
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void feed() override;
    void changeEngine(int power, int batteryCapacity);
};

