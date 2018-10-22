#include "Deque.h"

template<typename T>
Deque<T>::Deque()
{
	this->data = T();
	this->size = 0;
	this->pnext = nullptr;
	this->pprev = nullptr;
	this->head = nullptr;
}

template<typename T>
void Deque<T>::PushBack(T data)
{
	if (IsEmpty())
	{
		AddFirst(data);
	}
	else
	{
		Deque<T>* temp = this->head;
		Deque<T>* current;

		while (temp->pnext != nullptr)
		{
			temp = temp->pnext;
		}

		current = temp;
		temp->pnext = new Deque<T>(data, temp);
		this->size++;

	}
}

template<typename T>
void Deque<T>::PushFront(T data)
{
	if (IsEmpty())
	{
		AddFirst(data);
	}
	else
	{
		Deque<T>* temp;
		Deque<T>* current = this->head;

		temp = new Deque<T>(data, nullptr);
		current->pprev = temp;
		temp->pnext = this->head;
		this->head = temp;
		this->size++;
	}
}

template<typename T>
T Deque<T>::PopBack()
{
	Deque<T>* temp = this->head;

	while (temp->pnext != nullptr)
	{
		temp = temp->pnext;
	}

	return  temp->data;
}

template<typename T>
T Deque<T>::PopFront()
{
	return this->head->data;
}

template<typename T>
void Deque<T>::DeleteHead()
{
	if (this->size == 1)
	{
		DeleteTheLastOneLeft();
	}
	else
	{
		Deque<T> *temp = this->head;
		this->head = head->pnext;
		this->head->pprev = nullptr;
		delete temp;
		size--;
	}
}

template<typename T>
void Deque<T>::DeleteLast()
{
	if (this->size == 1)
	{
		DeleteTheLastOneLeft();
	}
	else
	{
		Deque<T> *previous = this->head;
		for (int i = 0; i < this->size - 2; i++)
		{
			previous = previous->pnext;

		}
		Deque <T> *toDelete = previous->pnext;
		previous->pnext = toDelete->pnext;
		delete toDelete;
		this->size--;
	}
}


template<typename T>
void Deque<T>::Clear()
{
	if (IsEmpty())
	{
		throw - 1;
	}
	else
	{
		while (this->size != 0)
		{
			DeleteLast();
		}
	}
}

template<typename T>
bool Deque<T>::IsEmpty()
{
	return this->head == nullptr;
}


template <typename T>
Deque<T>::Deque(T data, Deque<T>* pprev)
{
	this->data = data;
	this->pprev = pprev;
	this->pnext = nullptr;
}

template<typename T>
void Deque<T>::AddFirst(T data)
{
	this->head = new Deque<T>(data, nullptr);
	this->size++;
}

template<typename T>
void Deque<T>::DeleteTheLastOneLeft()
{

	delete this->head;
	this->pnext = nullptr;
	this->pprev = nullptr;
	this->size--;
}

template<typename T>
int Deque<T>::Size()
{
	return this->size;
}

template<typename T>
T Deque<T>::operator[](int position)
{

	Deque<T>* temp = this->head;
	int k = 0;

	while (k < position)
	{
		temp = temp->pnext;
		k++;
	}
	return temp->data;
}