#include <iostream>
#include "Selection.cpp"
using namespace std;

const int CONSIZE = 10;

int main()
{
	//int arr[CONSIZE] = { 3,5,2,4,1 };

	int arr[CONSIZE];

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	Sort(arr, CONSIZE);

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	return 0;
}