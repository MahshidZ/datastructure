//============================================================================
// Name        : singlylinkedlist_erase_back.cpp
//============================================================================

// A driver program for testing EraseBack method

#include "singlylinkedlist.hpp"
#include<string>
#include<iostream>
using namespace std;

int main(void) { 
  SinglyLinkedList<int> mytestlist;
  mytestlist.AddToEnd(3);
  mytestlist.AddToEnd(4);
  mytestlist.EraseEnd();
  string expected = "3 ";
  
  if(mytestlist.ToString().compare(expected) != 0 ) 
     return 1;

  if(mytestlist.IsEmpty() == true) 
    return 1;

  if(mytestlist.Size() != 1) 
    return 1;

  return 0;
}
