#pragma once

#include "stackinterface.hpp"
#include "singlylinkedlist.hpp"
#include<memory> // required by NULL
using namespace std;

template<typename T>
class StackBySinglyLinkedList: public StackInterface<T>{

  public:
			StackBySinglyLinkedList();
			~StackBySinglyLinkedList();

    virtual bool IsEmpty();
    virtual int Size();
    virtual void Push(T newdata);
    virtual T Pop();
    virtual T GetTop();
    virtual string ToString();

private:
  SinglyLinkedList<T> mylist;

};



