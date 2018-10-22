#pragma once

template <typename T>
class Stack
{
private:
	T data = T();
	Stack<T>* pnext = nullptr;
	Stack<T>* head = nullptr;
	int size = 0;
	Stack(T data);
	void AddFirst(T data);
	void DeleteHead();//delete head
public:
	Stack();
	

	
	void Push(T data);//add
	void Pop();//delete
	T Peek();//show last element
	T operator[] (int position);

};

