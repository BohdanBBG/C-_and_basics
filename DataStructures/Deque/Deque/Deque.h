#pragma once


template <typename T>
class Deque
{
private:
	T data;
	Deque<T>* pnext;
	Deque<T>* pprev;
	Deque<T>* head;

	int size;
	Deque(T data, Deque<T>* pprev);
	void AddFirst(T data);
	void DeleteTheLastOneLeft();

public:
	Deque();
	void PushBack(T data);//add in end
	void PushFront(T data);//add in begin
	T PopBack();//get in from end
	T PopFront();//get in from begin
	void DeleteHead();
	void DeleteLast();
	void Clear();//delete all
	bool IsEmpty();//Empty?

	T operator[] (int position);
	int Size();
};

