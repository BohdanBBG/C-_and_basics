#include <iostream>
#include "BinarySearchFunction.cpp"
using namespace std;

const int CONSIZE = 5;

int main()
{
	int arr[CONSIZE] = {2,4,4,5,3};
	int* positionArr = int();
	int lenght = Calculate(arr, 4, CONSIZE);

	//for (int i = 0; i < CONSIZE; i++)
	//{
	//	arr[i] = rand() % 10;
	//}

	positionArr = SearchBuble(arr, 4, CONSIZE);
	

	for (int i = 0; i < lenght; i++)
	{
		cout << positionArr[i] << " ";

	}
	cout << endl;
	return 0;
}