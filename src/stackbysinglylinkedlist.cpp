#include"stackbysinglylinkedList.hpp"
#include<iostream>

using namespace std;

template<typename T>
StackBySinglyLinkedList<T>::StackBySinglyLinkedList(){
}

template<typename T>
StackBySinglyLinkedList<T>::~StackBySinglyLinkedList(){
}

template<typename T>
bool StackBySinglyLinkedList<T>::IsEmpty(){
		return (mylist.IsEmpty());
}

template<typename T>
int StackBySinglyLinkedList<T>::Size(){
  return mylist.Size();
}

template<typename T>
void StackBySinglyLinkedList<T>::Push(T newitem){
  mylist.AddToEnd(newitem);
}

template<typename T>
T StackBySinglyLinkedList<T>::Pop(){
  return mylist.EraseEnd();
}

template<typename T>
T StackBySinglyLinkedList<T>::GetTop(){
  return mylist.GetEnd();
}

template<typename T>
string StackBySinglyLinkedList<T>::ToString(){
  return mylist.ToString();
}

template class StackBySinglyLinkedList<int>;



