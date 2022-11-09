#include <iostream>
#include <Windows.h>

int One(int x)
{
    return x * x + 4 * x + 5;
}
int Two(int x)
{
    return 1 / x * x + 4 * x + 5;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите x: ";
    int x; std::cin >> x;
    std::cout << "Ответ: ";
    if (x <= 2)
    {
        std::cout << One(x);
    }
    else if (x > 2)
    {
        std::cout << Two(x);
    }
}