#include "Base.h"
#include "Bus.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main()
{
    // Создаем базу и отображаем начальное состояние
    cout << "==== Base status ====" << endl;
    Base::showStatus();
    cout << endl;

    cout << "==== Bus is arriving ====" << endl;
    // Создаем автобус с 30 пассажирами, максимальной вместимостью 50 пассажиров, 50 литров топлива, баком на 100 литров
    Bus bus(30, 50, 50.0, 100.0);
    bus.arrive(); // Автобус прибывает на базу
    Base::showStatus(); // Отображаем состояние базы после прибытия автобуса
    cout << endl;

    cout << "==== Truck is arriving ====" << endl;
    // Создаем грузовик с загрузкой 10 тонн, макс загрузкой 20 тонн, 70 литров топлива, баком на 120 литров
    Truck truck(10.0, 20.0, 70.0, 120.0);
    truck.arrive(); // Грузовик пребывает на базу
    Base::showStatus(); // Отображаем состояние базы после прибытия грузовика
    cout << endl;

    cout << "==== Bus leaving the base ====" << endl;
    // Автобус покидает базу
    if (bus.leave())
    {
        cout << "Bus left the base." << endl;
    }
    else
    {
        cout << "Bus could not leave the base." << endl;
    }
    Base::showStatus(); // Отображаем состояние базы после отъезда автобуса
    cout << endl;

    cout << "==== Truck leaving the base ====" << endl;
    // Грузовик покидает базу
    if (truck.leave())
    {
        cout << "Truck left the base." << endl;
    }
    else
    {
        cout << "Truck could not leave the base." << endl;
    }
    Base::showStatus(); // Отображаем состояние базы после отъезда грузовика

    return 0;
}