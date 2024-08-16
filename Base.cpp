#include "Base.h"
#include <iostream>
using namespace std;

// Инициализация статических переменных класса Base
// Начальное кол-во людей на базе - 50
int Base::people_on_base = 50;

// Начальное кол-во транспортных средств на базе - 10
int Base::vehicles_on_base = 10;

// Начальное кол-во бензина на базе - 5000 литров
double Base::petrol_on_base = 5000.0;

// Начальное кол-во груза на базе - 100 тонн
double Base::goods_on_base = 100.0;

// Метод для отображения текущего состояния базы
void Base::showStatus()
{
    cout << "People on base: " << people_on_base << endl;
    cout << "Vehicles on base: " << vehicles_on_base << endl;
    cout << "Petrol on base: " << petrol_on_base << endl;
    cout << "Goods on base: " << goods_on_base << endl;
}