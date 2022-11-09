#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, ab;
    std::cout << "Введите первое однозначное число: "; std::cin >> a;
    std::cout << "Введите второе однозначное число: "; std::cin >> b;
    std::cout << "Произведение этих чисел = "; std::cin >> ab;
    if (a * b == ab)
        std::cout << "Правильно ";
    else
        std::cout << "Правильный ответ: " << a * b;
    return 0;
}