#pragma once

#include "stackinterface.hpp"
#include<memory> // required by NULL
using namespace std;

template<typename T>
class StackByArray: public StackInterface<T>{

  public:
		StackByArray(int n);
		~StackByArray();

    virtual bool IsEmpty();
    virtual int Size();
    virtual void Push(T newdata);
    virtual T Pop();
    virtual T GetTop();
    virtual string ToString();

private:
   void DoubleCapacity();
   using StackInterface<T>::itemcount;
   T* inner_array;
   int array_capacity;

};



