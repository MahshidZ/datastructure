//============================================================================
// Name        : testaddtoend.cpp
//============================================================================

// A driver program for testing Add_To_End method

#include "singlylinkedlist.hpp"
#include<string>
#include<iostream>
using namespace std;

int main(void) { 
  SinglyLinkedList<int> mytestlist;
  mytestlist.AddToEnd(3);
  mytestlist.AddToEnd(4);
  string str = "3 4 ";
  
  if(mytestlist.ToString().compare(str) != 0 ) 
     return 1;

  if(mytestlist.IsEmpty() == true) 
    return 1;

  if(mytestlist.Size() != 2) 
    return 1;

  return 0;
}
