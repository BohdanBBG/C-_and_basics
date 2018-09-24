#include "Insertion.h"

template <typename T>
void Sort(T* arr, int SIZE)
{
	T* helpArr = new T[SIZE];
	int counter = 0;
	T memory = T();


	for (int i = 0; i < SIZE; i++)
	{
		helpArr[i] = arr[i];
		arr[i] = T();
	}

	for (int i = 0; i < SIZE; i++)//3,5,2,4,1
	{
		arr[i] = helpArr[i];
		for (int j = counter; j >= 0; j--)
		{
			if (arr[j-1] > arr[j])
			{
				memory = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = memory;
			}
		}
		counter++;
	}
}