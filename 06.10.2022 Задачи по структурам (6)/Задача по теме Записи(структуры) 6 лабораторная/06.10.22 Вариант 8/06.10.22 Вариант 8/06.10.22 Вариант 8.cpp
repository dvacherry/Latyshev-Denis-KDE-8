# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <time.h>
#include<windows.h>
struct TRAIN
{
    char item[15];
    int number;
    char time[6];
};

void zap(TRAIN* tr, int count)
{
    std::cout << "Информация для " << count++ << " поезда" << std::endl;
    std::cout << "Введите пункт назначения : ";
    std::cin >> tr->item;
    std::cout << "Введите номер поезда : ";
    std::cin >> tr->number;
    std::cout << "Введите время прибытия  ( ЧЧ : ММ )  : ";
    std::cin >> tr->time;
    std::cout << "----------------------------" << std::endl;
}
void sort(TRAIN* tr, int& n)
{
    TRAIN p;
    std::cout << "Сортирока по номерам поездов произведена" << std::endl;
    for (int j = 0; j < (n - 1); j++)
    {
        if (tr[j].number > tr[j + 1].number)
        {
            p = *(tr + j);
            *(tr + j) = *(tr + j + 1);
            *(tr + j + 1) = p;
        }
    }
}
void main()
{
    TRAIN inf[2];
    int count;
    int n = 2;
    int i;
    int nom;
    bool flag = false;
    char otv[3];
    char otv1[3];
    char zn[3] = "да";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    count = 0;
    while (count < n)
        zap(&inf[count++], count);
    std::cout << "Введите номер поезда для которого вы хотите получить информацию : ";
    std::cin >> nom;
    for (i = 0; i < 2; i++)
        if (inf[i].number == nom)
        {
            flag = true;
            std::cout << "Пункт назнаения : " << inf[i].item << std::endl;
            std::cout << "Номер поезда : " << inf[i].number << std::endl;
            std::cout << "Время прибытия : " << inf[i].time << std::endl;
        }
    if (flag == false)
        std::cout << "Информации по вашему запросу не найдено!" << std::endl;
    std::cout << "Хотите ли произвести сортировку базы по номеру поезда\nда/нет" << std::endl;
    std::cin >> otv;
    if (*otv == *zn)
    {
        sort(inf, n);
        for (i = 0; i < 2; i++)
        {
            std::cout << "Пункт назнаения : " << inf[i].item << std::endl;
            std::cout << "Номер поезда : " << inf[i].number << std::endl;
            std::cout << "Время прибытия : " << inf[i].time << std::endl;
        }
    }
    else
        std::cout << "Вывести на информацию о поездах?" << std::endl;
    std::cin >> otv1;
    if (*otv1 == *zn)
        for (i = 0; i < 2; i++)
        {
            std::cout << "Пункт назнаения : " << inf[i].item << std::endl;
            std::cout << "Номер поезда : " << inf[i].number << std::endl;
            std::cout << "Время прибытия : " << inf[i].time << std::endl;
        }
}