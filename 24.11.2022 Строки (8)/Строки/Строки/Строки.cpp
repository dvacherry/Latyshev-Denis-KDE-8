#include <string.h>
#include <iostream>

void del_char(char in[], int num)
{
    for (int i = num; i < strlen(in); i++)
        in[i] = in[i + 1]; // Двигаем содержимое строки после нужного нам символа 1 влево
}
void repeat_char(char in[], int num)
{
    for (int i = strlen(in) + 1; i > num + 1; i--)
        in[i] = in[i - 1]; // Двигаем содержимое строки после нужного символа вправо
    in[num + 1] = in[num]; // Удваиваем символ
}
int main()
{
    char string[50];
    std::cin >> string;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '*')
        {
            del_char(string, i);
            i--;
        }
        else {
            repeat_char(string, i);
            i++;
        }
    }
    std::cout << string << std::endl;
    system("Pause");
    return 0;
}