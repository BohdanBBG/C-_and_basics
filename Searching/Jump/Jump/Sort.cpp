#include "Sort.h"

template <typename T>
void Sort(T*arr, int SIZE)
{
	T min = T();

	for (int i = 0; i < SIZE; i++)
	{
		min = arr[i];

		for (int j = i; j < SIZE; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}

}