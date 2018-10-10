#pragma once

template<typename T>
class Queue
{
private:
	T* queue = nullptr;
	int begin = 0, end = 0;
	int size = 0;
public:
	void Push(T data);//add last element
	T Peek();//read first element
	void Pop();//delete firts element
	
};

