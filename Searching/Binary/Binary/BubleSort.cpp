#include <iostream>
#include "BubleSort.h"

template<typename T>
void Sort(T * arr, int size)
{
	T k = T();

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] >  arr[j + 1])
			{
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
}