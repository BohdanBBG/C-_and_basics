#include <iostream>
#include "Stack(array).cpp"
using namespace std;

const int SIZE_IN_INDEX = 4;

int main()
{
	Stack<int> St;
	St.Push(1);
	St.Push(2);
	St.Push(3);
	St.Push(4);
	St.Push(5);

	cout << St.Peek() << endl;

	St.Pop();

	cout << St.Peek() << endl;

	for (int i = 0; i < SIZE_IN_INDEX; i++)
	{
		cout << St[i] << " ";
	}
	cout << endl;


	return 0;
}
