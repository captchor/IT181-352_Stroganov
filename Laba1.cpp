

#include "pch.h"
#include <iostream>
#include <bitset>
#include <string>
#include <locale.h>//Русскоязычная библиотека
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//Тут добавляем русский
	bool h = true;
	double pi = 3.14;
	long long int a = 260;
	long long int c = a * a*a*a; // Увеличение диапозона целочисленных
	long long int d = c * a*a*a*a; // Увеличение диапозона целочисленных
	char f = 'a'; // создаем переменную "f" и даем ей значение символа "а" ;
		cout << "a^4=" << c << endl; // выводим "а^4" ;
		cout << "a^8=" << d << endl; //выводим "а^8";
		cout << "a+53=" << f + 53 << endl;//выводим значение суммы символа"а" + 53;
		cout << "37+a=" << 37 + f << endl;//выводим значение суммы символа 37 + "а" ;
						// Далее вывод длинны типов данных по очереди
		cout << "Длина типа данных double=" << sizeof(double) << " байт" << endl;
		cout << "Длина типа данных int=" << sizeof(int) << " байт" << endl;
		cout << "Длина типа данных bool=" << sizeof(bool) << " байт" << endl;
		cout << "Длина типа данных char=" << sizeof(char) << " байт" << endl;

	getchar();
	return 0;
 
}
