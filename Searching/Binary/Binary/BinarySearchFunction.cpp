#include "BinarySearchFunction.h"
#include "BubleSort.cpp"
#include <iostream>
using namespace std;

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

	return total++;
}

template <typename T>
T* SearchBuble(T* arr, T vallue, const int Size)
{
	Sort(arr, Size);

	int countOfSimilaVallue = Calculate(arr, vallue, Size);
	T* positionArr = new T[countOfSimilaVallue];
	int j = 0;
	int midle = Size / 2;
	bool flag = true;
	T* helpArr = new T[Size];
	
	for (int i = 0; i < Size; i++)
	{
		helpArr[i] = arr[i];
	}

	
	while(flag)
	{
		 if (helpArr[midle] > vallue)
		{
		    midle = midle / 2;
		}
		else if (helpArr[midle] < vallue)
		{
			midle = (midle + Size) / 2;
		} 
		else if (helpArr[midle] == vallue)
		{
			positionArr[j] = midle;
			helpArr[midle] = 0;
			j++;
		}
		 if (j == countOfSimilaVallue) { flag = false; }
	}
	delete helpArr;
	return positionArr;
}
