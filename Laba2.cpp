#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//Масссив-блок из нескольких однотипных переменных

	// 1. матрицы и вектора

	// 2. множество точек из 3D и 2D геометрии 

	// 3. числовой ряд, таблица и т.д. 

	// 4. строка - массивный символ 

	// 5. видеобуфер (двумерный массив, соответствующий пикселам экран )

		// обьявление двумерного массива int a[3][3] = {{0}}

		// обьявление трехмерного массива int a[10][10][10] = {{0}}

		//инициализация многомерных массивов 

			// int a[3][3] =

			// {{10,11,25},

			// {22,15}}

		// в оперативке массив хранится компактно(без разрывов,элемент за элиментом)

		// нумеруются массивы с 0 до (n - 1)(n- длинна)

		// обращение к элементам массива: имя_массива[индекс]

	// arr[1]=n


	int m1[3][3] = { { 2,3,5 },{ 2,2,3 },{ 3,4,5 }, };
	int m2[3][3] = { { 4,5,6 },{ 5,3,1 },{ 3,6,7 }, };
	int m3[3][3] = { {0} };
	int m4[3][3] = { {0} };
	int a;
	int sum = 0;
	int vec[3] = { 3,5,7 };
	int b;
	int vec1[3] = { 5,6,3 };
	int vec2[3];
	
		for (int i = 0; i < 3; i++)  {
			for (int j = 0; j < 3; j++) {
				m3[i][j] = m1[i][j] * m2[i][j];
				cout << m3[i][j] << '\t';
			}
			cout << "\n";
		}
		cout << '\n';
		cout << '\n'; 

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					
					m4[i][j] += m1[i][k] * m2[k][j];
				}
					cout << m4[i][j] << '\t';
			}
			cout << "\n";
		};

			cout << "\n";
			cout << "\n";
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
				a = m1[i][j] * vec[i];
				sum = sum + a;
		}
		vec[i] = sum;
		sum = 0;
		cout << vec[i];
		cout << "\n";
	}
		
	cout << "\n";
	cout << "\n";
	sum = 0;

	int vec5[3] = { 5 ,2 ,6 };
	int vec6[3] = { 3 ,5 ,7 };

	for (int i = 0; i < 3; i++) {
		b = vec5[i] * vec6[i];
		sum = sum + b;
		b = 0;
	}cout << sum ;


	
	getchar();
	return (0);
}
