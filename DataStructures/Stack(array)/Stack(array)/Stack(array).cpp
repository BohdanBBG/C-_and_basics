#include"Stack(array).h"


template<typename T>
inline void Stack<T>::Push(T data)
{
	if (IsEmpty())
	{
		this->lastIndex++;
		this->stack = (T*)malloc(sizeof(T));
		stack[ this->lastIndex] = data;
		this->lastIndex++;
	}
	else
	{
		
		this->stack = (T*)realloc(stack, (this->lastIndex +1) * sizeof(T));
		stack[ this->lastIndex] = data;
		this->lastIndex++;
		
	}
}

template<typename T>
void Stack<T>::Pop()
{
	if (IsEmpty()) { throw -1; }
	else
	{
		lastIndex--;
		T* temp = new T[lastIndex];

		for (int i = 0; i < lastIndex; i++)
		{
			temp[i] = stack[i];
		}
		delete[] stack;

		this->stack = new T[lastIndex];

		for (int i = 0; i <  lastIndex ; i++)
		{
			this->stack[i] = temp[i];
		}
		delete[] temp;
	}
}

template<typename T>
T Stack<T>::Peek()
{
	if (IsEmpty())
	{
		throw - 3;
	}
	return this->stack[lastIndex-1];
}

template<typename T>
bool Stack<T>::IsEmpty()
{
	return lastIndex < 0;
}
