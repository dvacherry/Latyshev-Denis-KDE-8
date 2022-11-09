#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double A, B, C;
    std::cout << "Введите длину катета: " << std::endl;
    std::cout << "Катет A: ";
    std::cin >> A;
    std::cout << "Катет B: ";
    std::cin >> B;
    C = sqrt(pow(A, 2) + pow(B, 2));
    std::cout << "Периметр=" << A + B + C << std::endl;
}