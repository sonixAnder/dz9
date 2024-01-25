#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");

    int x, y;

    cout << "Введите два целых числа: ";
    cin >> x >> y;

    int result = pow(x, y);

    cout << "Результат: " << result << endl;

    return 0;
}