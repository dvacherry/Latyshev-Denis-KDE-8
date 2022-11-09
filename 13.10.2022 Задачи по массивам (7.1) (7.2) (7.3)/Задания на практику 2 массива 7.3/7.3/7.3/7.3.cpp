#include <iostream>
#include<Windows.h>
int main(int argv, char* argc[]) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 3;
	std::cout << "Введите элементы массива: ";
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
		a[i] = new int[n];
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) std::cin >> a[i][j];
	int y = 0;
	for (int i = 1; i < n - 1; i++)
		for (int j = 0; j < j; j++)
			if (a[j][i] == a[i][j])y++;
			else break;
	if (y == n * n - n)std::cout << "Матрица симметрична";
	else std::cout << "Матрица не симметрична";
	return 0;
}