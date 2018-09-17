#include <iostream>
#include "LinearSearchFunction.cpp"
using namespace std;

const int Size = 10;

int main()
{
	int arr[Size];
	int* positionArr= int();

	for (int  i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}

	positionArr = Search(arr, 4, Size);
	int x = Calculate(arr, 4,Size);

	for (int i = 0; i < x; i++)
	{
		cout << positionArr[i] << " ";
	
	}
	cout << endl;
	return 0;
}