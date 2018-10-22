#include "List.h"

template<typename T>
List<T>::List(T data)
{
	this->data = data;
	this->pnext = nullptr;
}

template<typename T>
List<T>::List()
{
	this->data = T();
	this->pnext = nullptr;
}

template<typename T>
 void List<T>::AddFirst(T data)
{
	 this->head = new List<T>(data);
	 this->size++;
}

 template<typename T>
 void List<T>::Add(T data)
 {
	 if (size == 0)
	 {
		 AddFirst(data);
	 }
	 else
	 {
		 List<T>* temp = this->head;
		 while (temp->pnext != nullptr)
		 {
			 temp = temp->pnext;
		 }
		 temp->pnext = new List<T>(data);
		 this->size++;
	 }
 }

 template<typename T>
 void List<T>::AddInPosition(T data, int position)
 {
	 List<T>* temp = this->head;
	 List<T>* current = nullptr;
	 int k = 0;
	 position--;

	 if (size == 0 && position == 1){ AddFirst(data); }
	 else if (size == 0 && position > 0) { throw - 1; }
	 else
	 {
		 if (position > 0)
		 {
			 while (k < position - 1)
			 {
				 temp = temp->pnext;
				 k++;
			 }
			 current = temp->pnext;

			 temp->pnext = new List<T>(data);
			 temp->pnext->pnext = current;
			 this->size++;
		 }
		 else if (position == 0)
		 {
			 temp = new List<T>(data);
			 current = temp;
			 temp->pnext = this->head;
			 this->head = current;
			 this->size++;
		 }
	 }
 }

 template<typename T>
 void List<T>::pop_front()
 {
	 List<T> *temp = head;
	 head = head->pnext;
	 delete temp;
	 size--;

 }

 template<typename T>
 void List<T>::DeleteAll()
 {
	 if (this->size == 0)
	 {
		 pop_front()
	 }
	 else
	 {
		 while (this->size != 0)
		 {
			 List<T>* temp = this->head;
			 this->head = temp->pnext;
			 delete temp;
			 this->size--;
		 }
	 }
 }

 template<typename T>
 void List<T>::DeleteInPosition(int position)
 {
	 if (position == 0)
	 {
		 pop_front();
	 }
	 else
	 {
		 List<T> *previous = this->head;
		 for (int i = 0; i < position - 1; i++)
		 {
			 previous = previous->pnext;

		 }
		 List <T> *toDelete = previous->pnext;
		 previous->pnext = toDelete->pnext;
		 delete toDelete;
		 this->size--;
	 }
 }

 template<typename T>
 T List<T>::operator[](int position)
 {
	 List<T>* temp = this->head;
	 int k = 0;
	 
	 while (k < position)
	 {
		 temp = temp->pnext;
		 k++;
	 }
	 return temp->data;
 }

 template<typename T>
 int List<T>::getSize()
 {
	 return this->size;
 }
