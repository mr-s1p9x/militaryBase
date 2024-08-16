#ifndef MILITARYBASE_BUS_H
#define MILITARYBASE_BUS_H

#include "Vehicle.h"

// Класс Bus наследуется от класса Vehicle и добавляет свойства и методы, специфичные для автобуса
class Bus : public Vehicle
{
private:
    // Кол-во пассажиров
    int people;

    // Макс кол-во пассажирова, которое может перевезти автобус
    int max_people;

public:
    // Конструктор автобуса с инициализацией кол-ва пассажиров, макс кол-ва пассажиров, топлива и объема бензобака
    Bus(int people, int max_people, double petrol, double max_petrol);

    // Метод для получения текущего кол-ва пассажиров
    int getPeopleCount() const;

    // Метод для получения макс кол-ва пассажиров
    int getMaxPeople() const;

    // Метод для прибытия на базу, переопределяет метод базового класаа
    void arrive() override;

    // Метод для покидания базы, переопределяет метод базового класса
    bool leave() override;
};

#endif //MILITARYBASE_BUS_H
