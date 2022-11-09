#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m[20][20];
    std::cout << "Введите матрицу: " << std::endl;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
        if (i % 2 == 1)
            for (int j = 0; j < n; j++)
                std::cin >> m[i][j];
        else
            for (int j = n - 1; j >= 0; j--)
                std::cin >> m[i][j];
    std::cout << "Матрица:" << std::endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << m[i][j] << "\t";
        std::cout << std::endl;
    }
    system("pause>Alex566");
    return 0;
}
