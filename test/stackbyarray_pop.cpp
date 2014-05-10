//============================================================================
// Name        : stackbyarray_pop.cpp
//============================================================================

// A driver program for testing Pop method

#include "stackbyarray.hpp"
#include<string>
using namespace std;

int main(void) { 
  StackByArray<int> myteststack(20);
  myteststack.Push(3);
  myteststack.Push(4);
  myteststack.Push(5);
  myteststack.Pop();
  string expected = "3 4 ";
  
  if(myteststack.ToString().compare(expected) != 0 ) 
     return 1;

  if(myteststack.IsEmpty() == true) 
    return 1;

  if(myteststack.Size() != 2) 
    return 1;

  return 0;
}
