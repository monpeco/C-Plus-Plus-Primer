#include <iostream>
#include <memory>

using namespace std;

void f()
{
    shared_ptr<int> sp(new int(42)); // allocate a new object
   // code that throws an exception that is not caught inside f
} // shared_ptr freed automatically when the function ends


/* 
If an exception happens between the new and the delete, and is not caught inside
f, then this memory can never be freed.
*/

void f2()
{
    int *ip = new int(42);     // dynamically allocate a new object
    // code that throws an exception that is not caught inside f
    delete ip;                 // free the memory before exiting
}

int main(){


  return 0;
}