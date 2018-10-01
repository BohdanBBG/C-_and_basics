#include <iostream>
#include "Quick_sort.cpp"

using namespace std;

const int CONSIZE = 11;

int main()
{
	int arr[] = { 3,3,2,4,2,4,4,2,2,3,4 };

	/*int arr[CONSIZE];

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % 10;
	}*/

	Sort(arr,0,10);

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	return 0;
}