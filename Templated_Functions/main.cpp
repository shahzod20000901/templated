#include "templated.h"

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 10;
	int m = 5;
	int z = 8;
	int arr[n];
	char b_arr[n];
	double c_arr[n];
	int d_arr[ROWS][COLS];
	char a_arr[ROWS][COLS];
	double x_arr[ROWS][COLS];
	cout << "Сложение чисел типа int: " << Addition(4, 5) << endl;
	cout << delimiter;
	cout << "Сложение чисел типа double: " << Addition(4.3, 5.5) << endl;
	cout << delimiter;
	FillRand(arr, n);
	Print(arr, n);
	cout << delimiter;
	FillRand(b_arr, n);
	Print(b_arr, n);
	cout << delimiter;
	FillRand(c_arr, n);
	Print(c_arr, n);
	cout << delimiter;
	MinValueIn(arr, n);
	cout << delimiter;
	MaxValueIn(arr, n);
	cout << delimiter;
	FillRand(d_arr, z, m);
	Print(d_arr, z, m);
	cout << delimiter;
	FillRand(a_arr, z, m);
	Print(a_arr, z, m);
	cout << delimiter;
	FillRand(x_arr, z, m);
	Print(x_arr, z, m);
	cout << delimiter;
	MinvalueIn(d_arr, z, m);
	cout << delimiter;
	MaxvalueIn(d_arr, z, m);
	cout << delimiter;
}
