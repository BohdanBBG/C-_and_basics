#include <iostream>
#include "Queue.cpp"
using namespace std;

int main()
{
	Queue<int> Qu;

	Qu.Push(1);
	Qu.Push(2);
	Qu.Push(3);
	Qu.Push(4);

	Qu.Pop();
	
	cout << Qu.Peek() << endl;

	return 0;
}
