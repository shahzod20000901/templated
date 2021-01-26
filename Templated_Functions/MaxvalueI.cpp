#include "templated.h"


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