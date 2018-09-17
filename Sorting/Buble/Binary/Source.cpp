#include <iostream>
#include "BubleSort.cpp"
using namespace std;

const int CONSIZE = 5;

int main()
{
	int arr[CONSIZE] = {2,4,4,5,3};

	//for (int i = 0; i < CONSIZE; i++)
	//{
	//	arr[i] = rand() % 10;
	//}

	Sort(arr, CONSIZE);

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	return 0;
}