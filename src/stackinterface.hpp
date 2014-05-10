#ifndef _STACKINTERFACE_HPP
#define _STACKINTERFACE_HPP

#include <string>

using namespace std; 

template<typename T>
class StackInterface{
  public:
    virtual ~StackInterface(){}
    virtual bool IsEmpty() = 0;
    virtual int Size() = 0;
    virtual void Push(T newdata) = 0;
    virtual T Pop() = 0;
    virtual T GetTop() = 0;
    virtual string ToString() {string str = ""; return str;};
  protected:
    int itemcount;
};

#endif


