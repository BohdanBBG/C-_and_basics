#include <iostream>
#include "LinearSearchFunction.cpp"
using namespace std;

const int Size = 100;

int main()
{
	int arr[Size];
	int* positionArr= int();

	for (int  i = 0; i < Size; i++)
	{
		arr[i] = rand() % Size;
	}

	positionArr = Search(arr, 4, Size);
	int x = Calculate(arr, 4,Size);

	for (int i = 0; i < Size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < x; i++)
	{
		cout << positionArr[i] << " ";
	
	}
	cout << endl;
	return 0;
}