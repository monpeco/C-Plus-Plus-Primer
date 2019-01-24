#include <iostream>
#include <memory>

using namespace std;

struct destination{  // respresents what we are connecting to
  string name;
};  

struct connection{   // information needed for use the connection
  string name;
};

connection connect(destination*){    // open the connection
  return connection();
};

void disconnect(connection);         // close the given connection

void f(destination &d){
  // get a connection
  connection c = connect(&d);
  // use the connection
  // if we forget to call disconnect before exiting f, there will be no way to close c
}

int main(){
  
  
  
  return 0;
}