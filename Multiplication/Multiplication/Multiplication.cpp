#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int num1;

    cout << "Введите число, которое будем умножать: ";
    cin >> num1;

    cout << "Таблица умножения на " << num1 << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num1 << " * " << i << " = " << num1 * i << endl;
    }

    return 0;
}
