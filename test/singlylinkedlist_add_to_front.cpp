//============================================================================
// Name        : test_add_to_front.cpp
//============================================================================

// A driver program for testing Add_To_Front method

#include "singlylinkedlist.hpp"
#include<string>
#include<iostream>
using namespace std;

int main(void) { 
  SinglyLinkedList<int> mytestlist;
  mytestlist.AddToFront(3);
  mytestlist.AddToFront(4);
  string str = "4 3 ";
  
  if(mytestlist.ToString().compare(str) != 0 ) 
     return 1;

  if(mytestlist.IsEmpty() == true) 
    return 1;

  if(mytestlist.Size() != 2) 
    return 1;

  return 0;
}
