#include"Jump_search.h"


template <typename T>
int* Search(T* arr,T value ,int SIZE)
{
	int* positionArr = new int[Calculate(arr, value, SIZE)];
	int step = sqrt(SIZE);
	int k = 0;
	int incStep = 0;
	int x = 0;


	while( !((x - step) >= SIZE))
	{
		if (arr[x] >= value || x == SIZE)
		{
			incStep = x - step + 1;
			for (incStep; incStep <= x; incStep++)
			{
				if (arr[incStep] == value)
				{
					positionArr[k] = incStep;
					k++;
				}
			}
			
		}
		x += step;
	}
	
	return positionArr;
}

template <typename T>
int Calculate(T* arr, T vallue, int Size)//callculate similar elements
{
	int total = 0;

	for (int i = 0; i < Size; i++)
	{
		if (arr[i] == vallue)
		{
			total++;
		}
	}

	return total;
}