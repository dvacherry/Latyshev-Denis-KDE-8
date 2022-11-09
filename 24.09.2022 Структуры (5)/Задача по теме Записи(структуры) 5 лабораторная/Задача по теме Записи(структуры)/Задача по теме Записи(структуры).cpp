#include <iostream>
#include <clocale>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    struct stud
    {
        char surname[20];
        int klass;
        int mat;
        int lit;
        int bio;
        int xim;
        int fiz;
    }A[20];
    int a;
    cout << "Введите количество учеников, которые будут в базе данных (не больше 20) - ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "Заполняем данные про ученика № " << i + 1 << "\n";
        cout << "Введите фамилию ученика - ";
        cin >> A[i].surname;
        cout << "Введите класс в котором он учится - ";
        cin >> A[i].klass;
        cout << "Введите оценку по математике - ";
        cin >> A[i].mat;
        cout << "Введите оценку по литературе - ";
        cin >> A[i].lit;
        cout << "Введите оценку по биологии - ";
        cin >> A[i].bio;
        cout << "Введите оценку по химии - ";
        cin >> A[i].xim;
        cout << "Введите оценку по физике - ";
        cin >> A[i].fiz;
        cout << "\n\n";
    }
    int b = 0;
    float sr;
    cout << "Ученики, у которых нет троек за четверть: " << "\n";
    for (int i = 0; i < a; i++)
    {
        if (A[i].mat > 3 && A[i].lit > 3 && A[i].bio > 3 && A[i].xim > 3 && A[i].fiz > 3)
        {
            b++;
            cout << "Фамилия - " << A[i].surname << "\n";
            cout << "Класс - " << A[i].klass << "\n";
            sr = (A[i].mat + A[i].lit + A[i].bio + A[i].xim + A[i].fiz) / 5;
            cout << "Средний балл - " << sr << "\n\n";
        }
    }
    if (b == 0)
        cout << "Таких учеников нет";
    return 0;
}