#include <iostream>
#include "Merge.cpp"
#include <time.h>
using namespace std;

const int CONSIZE = 100000;

int main()
{
	//int arr[CONSIZE] = { 3,5,2,8,2,2,2,1,2,5,7,9,4,2,0,2,1,6,3,4 };

	int arr[CONSIZE];

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % 100000;
	}

	double start_time = clock();
	Sort(arr, 0, 99999,CONSIZE);
	double end_time = clock();
	double time_spent = end_time - start_time;

	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
	cout << "Time working algorithm: "<< time_spent <<endl;
	return 0;
}