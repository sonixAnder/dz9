#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int a;

    cout << "Введите значение a: ";
    cin >> a;

    cout << "Считаем, подождите... " << endl;
    Sleep(3000);

    if (a > 500) 
    {
        cout << "АХТУНГ. Введёное число больше 500, а надо меньше.\n";
    }

    int sum = 0;

    for (int i = a; i <= 500; i++) {
        sum += i;
    }

    cout << "Сумма чисел от " << a << " до 500 равна " << sum << endl;

    return 0;
}