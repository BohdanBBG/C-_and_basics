#include<iostream>
#include"Jump_search.cpp"
#include"Sort.cpp"
#include<ctime>

using namespace std;


const int CONSIZE = 10000;

int main()
{
	//int arr[CONSIZE] = { 3,5,2,4,1,2,6,2,7 };
	//int arr[CONSIZE] = { 1,2,2,2,5,6,7,8,9 };
	int arr[CONSIZE];
	int searchesElement = 2;

	for (int i = 0; i < CONSIZE; i++)
	{
		arr[i] = rand() % 100;
	}

	Sort(arr, CONSIZE);

	unsigned start = clock();
	int* x = Search(arr, searchesElement, CONSIZE);
	unsigned end = clock();

	cout << "Array: " << endl;
	for (int i = 0; i < CONSIZE; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;

	cout <<"Index of elements: ";
	for (int i = 0; i < Calculate(arr, searchesElement,CONSIZE ); i++)
	{
		cout << x[i] << " ";

	}
	cout << endl;

	cout << "Time of working algorithm (with 10 000 elements): ";
	cout <<(double) end - start << endl;

	return 0;
}