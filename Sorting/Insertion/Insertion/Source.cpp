#include <iostream>
#include "Insertion.cpp"
using namespace std;

const int CONSIZE = 20;

int main()
{
	//int arr[CONSIZE] = { 3,1,1,2,3,4,1,2,3,1 };

	int arr[CONSIZE];

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % 20;
	}

	Sort(arr, CONSIZE);

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	return 0;
}