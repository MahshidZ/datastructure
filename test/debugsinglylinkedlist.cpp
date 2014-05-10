

// A driver program for testing the behavior of a linked list

#include "singlylinkedlist.hpp"
#include<iostream>
using namespace std;

int main(void) {
  SinglyLinkedList<int> mytestlist;
  mytestlist.Add(3);
  mytestlist.Add(4);
  mytestlist.Add(5);
  cout << mytestlist.ToString() << endl;
  mytestlist.EraseFront();
  cout << mytestlist.ToString() << endl;
  return 0;
}
