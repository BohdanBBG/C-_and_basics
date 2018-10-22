#pragma once


template <typename T>
class List
{
private:
	T data = T();
	List* pnext = nullptr;
	List* head = nullptr;
	int size = 0;

	List(T data);
	void pop_front();//delete head
public:
		List();
		void AddFirst(T data);
		void Add(T data);
		void AddInPosition(T data, int position);
		void DeleteAll();
		void DeleteInPosition(int position);
		T operator[](int position);

		int getSize();
};


