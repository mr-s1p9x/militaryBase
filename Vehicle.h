#ifndef MILITARYBASE_VEHICLE_H
#define MILITARYBASE_VEHICLE_H

// Класс Vehicle вляется базовым для всех транспортных средств на базе
class Vehicle {
protected:
    // Кол-во топлива в баке
    double petrol_amount;

    // Объем бензобака
    double tank_volume;

public:
    // Конструктор, инициализирующий транспортное средство количеством топлива и объемом бензобака
    Vehicle(double petrol_amount, double tank_volume);

    // Метод для получения объема бензобака
    double getTankVolume() const;

    // Метод для получения текущего кол-ва топлива в баке
    double getPetrolAmount() const;

    // Метод для прибытия на базу [реализация в срр]
    virtual void arrive() = 0;

    // Метод для покидания базы [cpp]
    virtual bool leave() = 0;
};

#endif //MILITARYBASE_VEHICLE_H
