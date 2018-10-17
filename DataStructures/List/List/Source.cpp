#include <iostream>
#include "List.cpp"
using namespace std;

int main()
{
	List<int> Lst;

	Lst.AddFirst(1);

	Lst.Add(2);
	Lst.Add(3);
	Lst.Add(4);
	Lst.Add(6);
	Lst.Add(7);
	Lst.Add(8);

	Lst.AddInPosition(5,5);

	cout<< Lst.getSize() << endl;

	//Lst.DeleteAll();
	cout << Lst.getSize() << endl;

	Lst.DeleteInPosition(4);

	cout << Lst.getSize() << endl;

	for (int i = 0; i < Lst.getSize(); i++)
	{
		cout << Lst[i] << " ";
	}
	cout << endl;
	return 0;
}