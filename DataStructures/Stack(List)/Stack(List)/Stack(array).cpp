#include "Stack(array).h"

template<typename T>
Stack<T>::Stack(T data)
{
	this->data = data;
	this->pnext = nullptr;
}

template<typename T>
void Stack<T>::AddFirst(T data)
{
	this->head = new Stack<T>(data);
	this->size++;
}

template<typename T>
void Stack<T>::DeleteHead()
{
	Stack<T> *temp = head;
	head = head->pnext;
	delete temp;
	size--;
}

template<typename T>
Stack<T>::Stack()
{
	this->head = nullptr;
	this->pnext = nullptr;
}

template<typename T>
inline void Stack<T>::Push(T data)
{
	if (size == 0)
	{
		AddFirst(data);
	}
	else
	{
		Stack<T>* temp = this->head;

		while (temp->pnext != nullptr)
		{
			temp = temp->pnext;
		}
		temp->pnext = new Stack<T>(data);
		this->size++;
	}
}

template<typename T>
void Stack<T>::Pop()
{

	if (this->size == 1)
	{
		DeleteHead();
	}
	else
	{
		Stack<T> *previous = this->head;
		for (int i = 0; i <this->size - 2; i++)
		{
			previous = previous->pnext;

		}
		Stack <T> *toDelete = previous->pnext;
		previous->pnext = toDelete->pnext;
		delete toDelete;
		this->size--;
	}
}


template<typename T>
T Stack<T>::Peek()
{
	Stack<T>* temp = this->head;
	
	if (this->size == 0)
	{
		throw - 2;
	}
	else
	{
		while (temp->pnext != nullptr)
		{
			temp = temp->pnext;
		}
	}
	return temp->data;
}



template<typename T>
T Stack<T>::operator[](int position)
{

	Stack<T>* temp = this->head;
	int k = 0;

	while (k < position)
	{
		temp = temp->pnext;
		k++;
	}
	return temp->data;
}

