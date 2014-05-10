//============================================================================
// Name        : stackbysinglylinkedlist_push.cpp
//============================================================================

// A driver program for testing Push method

#include "stackbysinglylinkedlist.hpp"
#include<string>
using namespace std;

int main(void) { 
  StackBySinglyLinkedList<int> myteststack;
  myteststack.Push(3);
  myteststack.Push(4);
  myteststack.Push(5);
  string expected = "3 4 5 ";
  
  if(myteststack.ToString().compare(expected) != 0 ) 
     return 1;

  if(myteststack.IsEmpty() == true) 
    return 1;

  if(myteststack.Size() != 3) 
    return 1;

  return 0;
}
