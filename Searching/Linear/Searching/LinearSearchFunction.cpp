#include "LinearSearchFunction.h"
#include <iostream>
using namespace std;

template <typename T>
int Calculate(T* arr,T vallue,int Size)
{
	int total = 0;

	for (int i = 0; i < Size; i++)
	{
		if (arr[i] == vallue)
		{
			total++;
		}
	}

	return total++;
}

template <typename T>
T* Search(T* arr, T vallue, int Size)
{
	int countOfSimilaVallue = Calculate( arr,vallue, Size);

	T* positionArr = new T[countOfSimilaVallue];
	
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == vallue)
		{
			positionArr[j] = i;
			j++;
		}
	}
	return positionArr;
}


