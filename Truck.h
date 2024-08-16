#ifndef MILITARYBASE_TRUCK_H
#define MILITARYBASE_TRUCK_H

#include "Vehicle.h"

// Класс Truck наследуется от класса Vehicle и добавляет свойства и методы, специфичные для грузовика
class Truck : public Vehicle {
private:
    // Текущая загруженность машины в тоннах
    double load;

    // Максимальная грузоподъемность машины
    double max_load;

public:
    // Конструктор грузовика с инициализацией текущей загрузки, максимальной загрузки, топлива и объема бензобака
    Truck(double load, double max_load, double petrol, double max_petrol);

    // Метод для получения текущей загрузки машины
    double getCurrentLoad() const;

    // Метод для получения максимальной грузоподъемности машины
    double getMaxLoad() const;

    // Метод для прибытия на базу, переопределяет метод базового класса
    void arrive() override;

    // Метод для покидания базы, переопределяет метод базового класса
    bool leave() override;
};

#endif //MILITARYBASE_TRUCK_H
