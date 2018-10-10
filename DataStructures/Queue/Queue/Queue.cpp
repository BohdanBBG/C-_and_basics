#include"Queue.h"

template<typename T>
inline void Queue<T>::Push(T data)
{
	if (this->size == 0)
	{
		this->queue =(T*) malloc(sizeof(T));
		this->queue[this->size] = data;
		this->size++;
		this->begin = 0;
		this->end = 0;
	}
	else
	{
		this->queue = (T*)realloc(this->queue, ((size + 1) * sizeof(T)));
		this->queue[this->size] = data;
		this->end = this->size;
		this->size++;
	}
}

template<typename T>
T Queue<T>::Peek()
{
	if (this->size <= 0)
	{
		throw - 1;
	}
	else
	{
		return this->queue[begin];
	}
}

template<typename T>
void Queue<T>::Pop()
{
	if (this->size <= 0)
	{
		throw -2;
	}
	else
	{
		T* temp = new T[this->size-1];
		
		for (int i = 1; i < this->size; i++)
		{
			temp[i-1] = this->queue[i];
		}
		delete[] queue;

		this->size--;

		this->queue = new T[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->queue[i] = temp[i];
		}
		delete[] temp;
	}
}

