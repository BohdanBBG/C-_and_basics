#include <iostream>
#include "Deque.cpp"

using namespace std;

int main()
{
	Deque<int> Deq;

	Deq.PushFront(1);
	Deq.PushFront(0);
	Deq.PushFront(-1);

	Deq.PushBack(2);

	cout << "The last element: " << Deq.PopBack() << endl;
	cout << "The first element: " << Deq.PopFront() << endl;

	cout << Deq.IsEmpty() << endl;
	
	Deq.DeleteHead();

	Deq.DeleteLast();

	//Deq.Clear();

	for (int i = 0; i < Deq.Size(); i++)
	{
		cout << Deq[i] << " ";
	}
	cout << endl;
	return 0;
}