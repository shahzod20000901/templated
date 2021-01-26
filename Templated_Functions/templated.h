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
