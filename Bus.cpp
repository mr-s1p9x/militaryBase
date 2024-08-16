#include "Bus.h"
#include "Base.h"
#include <algorithm> // для использования std::min

// Реализация конструктора класса Bus
Bus::Bus(int people, int max_people, double petrol, double max_petrol)
: Vehicle(petrol, max_petrol), people(people), max_people(max_people) {}

// Метод для получения текущего кол-ва пассажиров
int Bus::getPeopleCount() const
{
    return people;
}

// Метод для получения макс кол-ва пассажирских мест
int Bus::getMaxPeople() const
{
    return max_people;
}

// Реализация метода arrive() для автобуса
void Bus::arrive()
{
    // Увеличиваем кол-во людей на базе на кол-во пассажиров и водителя
    Base::people_on_base += people + 1;

    // Увеличиваем кол-во транспортных средств на базе
    Base::vehicles_on_base += 1;
}

// Реализация метода leave() для автобуса
bool Bus::leave()
{
    // Проверяем, есть ли на базе достаточно топлива для заправки автобуса
    if (Base::petrol_on_base < (tank_volume - petrol_amount))
    {
        return false; // Если недостаточно топлива, возвращаем false
    }
    // Заправляем бак
    Base::petrol_on_base -= (tank_volume - petrol_amount);
    petrol_amount = tank_volume;

    // Убираем кол-во людей, которое автобус может забрать, из базы
    int people_to_take = std::min(Base::people_on_base, max_people);
    Base::people_on_base -= people_to_take;

    // Уменьшаем кол-во транспортных средств на базе
    Base::vehicles_on_base -= 1;

    return true; // Если все в порядке, возвращаем true
}