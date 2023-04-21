#pragma warning(disable:4996) // Очень важно - без этого strcat не работает.

#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>

using namespace std;
const int length = 120;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	int l1 = 5;				  // Количество массивов
	int l2 = 10;			  // Размеры массивов.
	int** arr = new int*[l1]; // Инициализация массивов

	for (int i = 0; i < l1; i++) {
		arr[i] = new int[l2]; // Инициализация каждого массива
		for (int j = 0; j < l2; j++) {
			arr[i][j] = i + j;// Любое заполнение массива
			cout << arr[i][j] << "\t"; // Вывод массивов
		}
		cout << endl;
	}

	for (int i = 0; i < l1; i++) {
		delete[] arr[i];	  // Удаление каждого массива
	}
	delete[] arr;			  // Удаление Массивов
}
