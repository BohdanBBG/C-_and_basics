#include<iostream>
#include "Stack(array).cpp"
using namespace std;

int main()
{
	Stack<int> St;
	St.Push(1);
	St.Push(2);
	St.Push(3);
	St.Push(4);

	cout<<St.Peek()<<endl;

	St.Pop();

	cout << St.Peek()<<endl;
	cout << endl;

	cout<<St.IsEmpty() << endl;
	return 0;
}