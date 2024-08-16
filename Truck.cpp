#include "Truck.h"
#include "Base.h"
#include <algorithm> // для std::min

// Реализация конструктора класса Truck
Truck::Truck(double load, double max_load, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol), load(load), max_load(max_load) {}

// Метод для получения текущей загруженности машины
double Truck::getCurrentLoad() const
{
    return load;
}

// Метод для получения макс грузоподъемности машины
double Truck::getMaxLoad() const
{
    return max_load;
}

// Реализация метода arrive() для грузовика
void Truck::arrive()
{
    // Увеличиваем кол-во груза на базе
    Base::goods_on_base += load;

    // Увеличиваем кол-во людей на базе (водитель)
    Base::people_on_base += 1;

    // Увеличиваем кол-во транспортных средств на базе
    Base::vehicles_on_base += 1;
}

// Реализация метода leave() для грузовика
bool Truck::leave()
{
    // Проверяем, есть ли на базе достаточно топлива для заправки грузовика
    if (Base::people_on_base < (tank_volume - petrol_amount))
    {
        return false; // Если недостаточно топлива, возвращаем false
    }

    // Заправляем бак
    Base::petrol_on_base -= (tank_volume - petrol_amount);
    petrol_amount = tank_volume;

    // Убираем кол-во груза, которое грузовик может забрать из базы
    double goods_to_take = std::min(Base::goods_on_base, max_load);
    Base::goods_on_base -= goods_to_take;

    // Уменьшаем кол-во транспортных средств на базе
    Base::vehicles_on_base -= 1;

    return true; // Если все в порядке, возвращаем true
}