#include <iostream>
using namespace std;
#define delimiter "\n---------------------------------------------------------------------\n";

const int ROWS = 8;
const int COLS = 5;

template <typename T>
T FillRand(T arr[], T n);

template <typename T1, typename T2>
T1 FillRand(T1 arr[], T2 n);

template <typename T1, typename T2>
T1 FillRand(T1 arr[ROWS][COLS], T2 z, T2 m);

template <typename T>
T Print(T arr[], T n);

template <typename T1, typename T2>
T1 Print(T1 arr[], T2 n);

template <typename T1, typename T2>
T1 Print(T1 arr[ROWS][COLS], T2 z, T2 m);

template <typename T>
T Addition(T a, T b);

template <typename T>
T MinValueIn(T arr[], T n);

template <typename T1, typename T2>
T1 MinvalueIn(T1 arr[ROWS][COLS], T2 z, T2 m);

template <typename T>
T MaxValueIn(T arr[], T n);

template <typename T1, typename T2>
T1 MaxvalueIn(T1 arr[ROWS][COLS], T2 z, T2 m);

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


template <typename T>
T Addition(T a, T b)
{
	return a + b;
}

template <typename T>
T FillRand(T arr[], T n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	return 0;
}

template <typename T>
T Print(T arr[], T n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}

template <typename T1, typename T2>
T1 FillRand(T1 arr[], T2 n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] = arr[i] / 10;
	}
	return 0;
}

template <typename T1, typename T2>
T1 FillRand(T1 arr[ROWS][COLS], T2 z, T2 m)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] = arr[i][j] / 10;
		}
	}
	return 0;
}


template <typename T1, typename T2>
T1 Print(T1 arr[], T2 n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}

template <typename T1, typename T2>
T1 Print(T1 arr[ROWS][COLS], T2 z, T2 m)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

template <typename T>
T MinValueIn(T arr[], T n)
{
	int a = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < a)
		{
			a = arr[i];
		}
	}
	cout << "Минимальное значения массива: " << a << endl;
	return 0;
}

template <typename T1, typename T2>
T1 MinvalueIn(T1 arr[ROWS][COLS], T2 z, T2 m)
{
	int a = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < a)
			{
				a = arr[i][j];
			}
		}
	}
	cout << "Минимальное значения двухмерного массива: " << a << endl;
	return 0;
}

template <typename T>
T MaxValueIn(T arr[], T n)
{
	int a = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > a)
		{
			a = arr[i];
		}
	}
	cout << "Максимальное значения массива: " << a << endl;
	return 0;
}

template <typename T1, typename T2>
T1 MaxvalueIn(T1 arr[ROWS][COLS], T2 z, T2 m)
{
	int a = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > a)
			{
				a = arr[i][j];
			}
		}
	}
	cout << "Максимальное значения двухмерного массива: " << a << endl;
	return 0;
}