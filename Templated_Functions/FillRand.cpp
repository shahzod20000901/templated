#include "templated.h"

template <typename T>
T FillRand(T arr[], T n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
