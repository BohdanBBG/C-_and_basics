#pragma once



template <typename T>
class Stack
{
private:
	T* stack = T();
	int lastIndex = -1;
public:
	void Push(T data);//add
	void Pop();//delete
	T Peek();//read main element
	bool IsEmpty();
};

