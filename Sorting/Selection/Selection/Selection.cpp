#include "Selection.h"

template<typename T>
void Sort(T * arr, int size)
{
	T min = T();
	T x = T();
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		min = arr[i];
		for (int j = i ; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j]; 
				k = j;
				arr[k] = arr[i];
				arr[i] = min;
			}
		}
	}
}