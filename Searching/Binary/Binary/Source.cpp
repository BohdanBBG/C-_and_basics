#include <iostream>
#include <ctime>
#include "BinarySearchFunction.cpp"

using namespace std;

const int CONSIZE = 100000;

int main()
{
	//int arr[CONSIZE] = {0,1,2,3,4,5,6,7,8,9};
	int arr[CONSIZE];
	int* positionArr = int();
	int search = 3;

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % CONSIZE;
	}
	int lenght = Calculate(arr, search, CONSIZE);



	Sort(arr, CONSIZE);

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout  <<endl;

	unsigned start = clock();
	positionArr = SearchBuble(arr, search, 0, 99, CONSIZE);
	unsigned end = clock();
	
	for (int i = 0; i < lenght; i++)
	{
		cout << positionArr[i] << " ";

	}
	cout << endl;

	cout << "Time of searching: " << (double)(end - start)<< endl;
	return 0;
}