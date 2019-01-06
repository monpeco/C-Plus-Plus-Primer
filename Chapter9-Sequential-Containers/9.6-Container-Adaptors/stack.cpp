#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
  
  vector<string> svec = {"hello", "World", "!!!!"};
  // Container adaptors
  // By default both `stack` and `queue` are implemented in terms of `deque` and a 
  //`priority_queue` is implemented on a `vector`.
  
  // We can override the default container type by naming a sequential container as a 
  //second type argument when we create the adaptor:
  
  // empty stack implemented on top of `vector`
  stack<string, vector<string>> str_stk;
  
  // str_stk2 is implemented on top of `vector` and initially holds a copy of `svec`
  stack<string, vector<string>> str_skt2(svec);
  
  
  //## Stack adaptor
  // The `stack` type is defined in the stack header
  stack<int> intStack;   // empty stack
  
  // fill up the stack
  for(size_t ix = 0; ix != 10; ++ix){
    intStack.push(ix);     // intStack holds 0..9 inclusive
  }
  
  while(!intStack.empty()){   // while there are still values in intStack
    int value = intStack.top();
    // code that uses value
    intStack.pop();            // pop the top element, and repeat
  }
  
  // We can use only the adaptor operations and cannot use the operations of the 
  // underlying container type. i. e: We cannot call `push_back` on a `stack`
  
  
  // The Queue Adaptors
  // The `queue` and `priority_queue` adaptors are defined in the `queue` header.
  
  return 0;
}