#include "templated.h"


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
