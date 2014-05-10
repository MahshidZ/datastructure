#include"stackbyarray.hpp"

using namespace std;

template<typename T>
StackByArray<T>::StackByArray(int n){
	array_capacity = max(1, n);
	inner_array = new T[array_capacity];
}

template<typename T>
StackByArray<T>::~StackByArray(){
	delete[] inner_array;
}

template<typename T>
bool StackByArray<T>::IsEmpty(){
  return (itemcount == 0);
}

template<typename T>
int StackByArray<T>::Size(){
  return itemcount;
}

template<typename T>
void StackByArray<T>::Push(T newitem){
  if(itemcount == array_capacity)
    DoubleCapacity();
  inner_array[itemcount] = newitem;
  itemcount ++;
}

template<typename T>
T StackByArray<T>::Pop(){
	T lastitem = inner_array[itemcount - 1];
	itemcount --;
  return lastitem;
}

template<typename T>
T StackByArray<T>::GetTop(){
  return inner_array[itemcount - 1];
}

template<typename T>
string StackByArray<T>::ToString(){
  string tostring = "";
  for(int i = 0; i < itemcount ; i++){
  	tostring.append( to_string (inner_array[i]).append(" ") );
  }
  return tostring;
}

template<typename T>
void StackByArray<T>::DoubleCapacity(){
 T* oldarray = inner_array;
 inner_array = new T[2 * array_capacity];
 for(int i = 0; i < itemcount; i++){
   inner_array[i] = oldarray[i];
 }
 array_capacity = 2 * array_capacity;
delete[] oldarray;
}

template class StackByArray<int>;



