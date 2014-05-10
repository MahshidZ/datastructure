#include"singlylinkedList.hpp"
#include<iostream>

using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList(){
  head = NULL;
	tail = NULL;
  itemcount = 0;
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList(){
  typename LinkedListInterface<T>::Node* temp = head;
  while(head->next != NULL){
    temp = head;
    head = head->next;
    delete temp;
  }  
  delete head;
}

template<typename T>
bool SinglyLinkedList<T>::IsEmpty(){
		return (itemcount == 0);
}

template<typename T>
int SinglyLinkedList<T>::Size(){
  return itemcount;
}

template<typename T>
void SinglyLinkedList<T>::Add(T newitem){
  AddToEnd(newitem);
}

template<typename T>
void SinglyLinkedList<T>::AddToFront(T newitem){
  typename LinkedListInterface<T>::Node* newnode = new   typename LinkedListInterface<T>::Node();
  newnode->data = newitem;
  newnode->next = head;
  head = newnode;
  if (IsEmpty()){
    tail = head;
  }
  itemcount++;
}

template<typename T>
void SinglyLinkedList<T>::AddToEnd(T newitem){
    typename LinkedListInterface<T>::Node* newnode = new typename LinkedListInterface<T>::Node();
  newnode->data =  newitem;
  newnode->next = NULL;
  if (IsEmpty()){
    tail = newnode;
    head = newnode;
  }
  else{
  tail->next = newnode;
  tail = newnode;
  }
  itemcount++;
}

template<typename T>
T SinglyLinkedList<T>::EraseFront(){
   T frontdata;
  if(!IsEmpty()){
      typename LinkedListInterface<T>::Node* temp = head;
    head = head->next;
frontdata = temp->data;
    delete temp;
    itemcount --;
  }
  return frontdata;
}

template<typename T>
T SinglyLinkedList<T>::EraseEnd(){
    T backdata;
  if(!IsEmpty()){
    int iteration = Size() - 2;
    typename LinkedListInterface<T>::Node* temp = head;
    while(iteration > 0){
      temp = temp->next;
      iteration --;
    }
    backdata = tail->data;
    temp->next = NULL;
    delete tail;
    tail = temp;
    itemcount --;
  }
  return backdata;
}


template<typename T>
T SinglyLinkedList<T>::GetFront(){
  return head->data;
}


template<typename T>
T SinglyLinkedList<T>::GetEnd(){
  return tail->data;
}

template<typename T>
string SinglyLinkedList<T>::ToString(){
    typename LinkedListInterface<T>::Node* temp = head;
  string tostring = "";
  while(temp != NULL){
    tostring += to_string(temp->data).append(" ") ;
    temp = temp->next; 
 } 
  return tostring;
}


template class SinglyLinkedList<int>;
