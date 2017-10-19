#include "iostream"
#include "math.h"
#include <iomanip>

using namespace std;

bool x = 0; //контроль завершения

bool y(); //меню

void add(); //сложение двух целочисленных значений
void sub(); //вычитание одного целочисленного значения из другого
void mul(); //умножение двух целочисленных значений
void div(); //деление одного целочисленного значения на другое
void error(); //ошибка

int main()
{
	setlocale(LC_ALL, "Russian");
	while (!x)
	{
		x = y();
	}

	return 0;

}

bool y()
{
	int a; 
	cout << "Выберете функцию:\n " << endl;
	cout << "1. Cложение двух целочисленных значений.\n2. Вычитание одного целочисленного значения из другого.\n3. Умножение двух целочисленных значений.\n4. Деление одного целочисленного значения на другое.\n    " << endl;
	cin >> a;
	cout << endl;
	if (a == 1)
		add();
	else if (a == 2)
		sub();
	else if (a == 3)
		mul();
	else if (a == 4)
		div();
	else if (a == 5)
		return true;
	else
		error();
	return false;
}

void error()
{
	cout << "Ошибка!" << endl;
}

void add()
{
	int a, b, c;
	cout << "Введите первое слагаемое:";
	cin >> a;
	cout << "Введите второе слагаемое:";
	cin >> b;
	c = a + b;
	cout << endl;
	cout << a << "+" << b << "=" << c << endl << endl;
}

void sub()
{
	int a, b, c;
	cout << "Введите уменьшаемое: " ;
	cin >> a;
	cout << "Введите вычитаемое: ";
	cin >> b;
	c = a - b;
	cout << endl;
	cout << a << "-" << b << "=" << c << endl << endl;
}

void mul()
{
	int a, b, c;
	cout << "Введите первый множитель: ";
	cin >> a;
	cout << "Введите второй множитель: ";
	cin >> b;
	c = a * b;
	cout << endl;
	cout << a << "*" << b << "=" << c << endl << endl;
}

void div()
{
	int a, b, c;
	cout << "Введите делимое: ";
	cin >> a;
	cout << "Введите делитель: ";
	cin >> b;
	c = a / b;
	cout << endl;
	cout << a << "/" << b << "=" << c << endl << endl;
}

