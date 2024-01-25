#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Homework 3\n" << endl;

	float result;
	result = 0;

	for (int i = 1; i <= 1000; i++)
	{
		result = result + i;
	}

	result = result / 1000;
	cout << "Среднее Арифметическое = " << result;
	return 0;
}