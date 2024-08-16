#include "Vehicle.h"
#include "Base.h"

// Реализация конструктора класса Vehicle
Vehicle::Vehicle(double petrol_amount, double tank_volume)
{
    // Установка начального значения кол-ва топлива
    this->petrol_amount = petrol_amount;

    // Установка объема бензобака
    this->tank_volume = tank_volume;
}

// Метод для получения объема бензобака
double Vehicle::getTankVolume() const
{
    return tank_volume;
}

// Метод для получения текущего кол-ва топлива в баке
double Vehicle::getPetrolAmount() const
{
    return petrol_amount;
}
