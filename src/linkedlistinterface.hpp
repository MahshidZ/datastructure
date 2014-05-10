#ifndef _LINKEDLISTINTERFACE_HPP
#define _LINKEDLISTINTERFACE_HPP

#include <string>

using namespace std; 

template<typename T>
class LinkedListInterface{
  public:
    virtual ~LinkedListInterface(){}
    virtual bool IsEmpty() = 0;
    virtual int Size() = 0;
    virtual void AddToFront(T newdata) = 0;
	  virtual void AddToEnd(T newdata) = 0;
	  virtual void Add(T newdata) = 0; //default 
	  virtual T EraseFront() = 0;
    virtual T EraseEnd() = 0;
  virtual string ToString() {string str = ""; return str;};
	protected:
		struct Node{
		  T data;
      Node* next;
    };

		Node* head;
		Node* tail;
    int itemcount;
};

#endif


