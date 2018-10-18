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
T* SearchBuble(T* arr, T vallue, int left, int right, int Size)
{

	int countOfSimilaVallue = Calculate(arr, vallue, Size);
	T* positionArr = new T[countOfSimilaVallue];
	int j = 0;
	int midd = 0;
	bool flag = true;
	T* helpArr = new T[Size];
	
	for (int i = 0; i < Size; i++)
	{
		helpArr[i] = arr[i];
	}
	
	
	while(flag)
	{
		midd = (left + right) / 2;
		if (vallue < helpArr[midd])
		{
			right = midd - 1;
		}
		else if (vallue > helpArr[midd])
		{ 
			left = midd + 1; 
		}
		else if (vallue == helpArr[midd])
		{
			positionArr[j] = midd;
			helpArr[midd] = 0;
			j++;
		}

		 if (left > right)
		 { 
			 flag = false; 
		 }
	}
	delete helpArr;
	return positionArr;
}
