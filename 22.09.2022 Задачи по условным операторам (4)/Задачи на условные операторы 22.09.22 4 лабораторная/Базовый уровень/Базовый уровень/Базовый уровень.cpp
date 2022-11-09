#include <iostream>
#include <Windows.h>

int triangle1(int a1, int b1, int c1)
{
	int p1 = (a1 + b1 + c1) / 2;
	int s1 = sqrt(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1));
	return s1;
}
int triangle2(int a2, int b2, int c2)
{
	int p2 = (a2 + b2 + c2) / 2;
	int s2 = sqrt(p2 * (p2 - a2) * (p2 - b2) * (p2 - c2));
	return s2;
}
int main(int p1, int s1, int p2, int s2)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите 3 стороный первого треугольника: " << std::endl;
	int a1;
	int b1;
	int c1;
	std::cin >> a1 >> b1 >> c1;
	s1 = triangle1(a1,b1,c1);
	std::cout << "Площадь первого треугольника равна: " << s1 << std::endl;
	std::cout << "Введите 3 стороный второго треугольника: " << std::endl;
	int a2;
	int b2;
	int c2;
	std::cin >> a2 >> b2 >> c2;
	s2 = triangle2(a2, b2, c2);
	std::cout << "Площадь второго треугольника равна: " << s2 << std::endl;

	if (s1 < s2) std::cout << "Площадь второго треугольника больше";
	else std::cout << "Площадь первого треугольника больше" << std::endl;
	return 0;
}