#ifndef MILITARYBASE_BASE_H
#define MILITARYBASE_BASE_H

// Определение класса Base, который содержит статические переменные для хранения информации
class Base
{
public:
    // Кол-во людей на базе
    static int people_on_base;

    // Кол-во транспортных средств на базе
    static int vehicles_on_base;

    // Кол-во бензина на базе (в литрах)
    static double petrol_on_base;

    // Кол-во груза на базе (в тоннах)
    static double goods_on_base;

    // Метод для отображения текущего состояния базы
    static void showStatus();
};

#endif //MILITARYBASE_BASE_H
