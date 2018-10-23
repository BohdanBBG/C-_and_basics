#include "Merge.h"
#include <time.h>
#include <iostream>



template <typename T>
void Sort(T* arr, int left, int right, int  SIZE)
{
	int SIZES = SIZE;

	if (right == left)
	{
		return;
	}
	if (right - left == 1)
	{
		if (arr[right] < arr[left])
		{
			T save = arr[left];
			arr[left] = arr[right];
			arr[right] = save;
		}
		return;
	}
	int middle = (right + left) / 2;

	Sort(arr, left, middle, SIZES);
	Sort(arr, middle + 1, right, SIZES);

	T* buf = new T[SIZES];
	int xleft = left;
	int xright = middle + 1;
	int current = 0;
	while (right - left + 1 != current)
	{
		if (xleft > middle)
		{
			buf[current++] = arr[xright++];
		}
		else if (xright > right)
		{
			buf[current++] = arr[xleft++];
		}
		else if (arr[xleft] > arr[xright])
		{
			buf[current++] = arr[xright++];
		}
		else
		{
			buf[current++] = arr[xleft++];
		}

	}
	for (int i = 0; i < current; i++)
	{
		arr[i + left] = buf[i];
	}
	delete[] buf;
}


