#pragma once

#include "linkedlistinterface.hpp"
#include<memory> // required by NULL
#include <string.h> 
using namespace std;

template<typename T>
class SinglyLinkedList: public LinkedListInterface<T>{

  public:
			SinglyLinkedList();
			~SinglyLinkedList();

    virtual bool IsEmpty();
    virtual int Size();
    virtual void AddToFront(T newdata);
	  virtual void AddToEnd(T newdata);
	  virtual void Add(T newdata); //default 
	  virtual T EraseFront();
    virtual T EraseEnd();
    virtual T GetFront();
    virtual T GetEnd();
    virtual string ToString();
private:

  using LinkedListInterface<T>::head;
  using LinkedListInterface<T>::tail;
  using LinkedListInterface<T>::itemcount;		    
};



