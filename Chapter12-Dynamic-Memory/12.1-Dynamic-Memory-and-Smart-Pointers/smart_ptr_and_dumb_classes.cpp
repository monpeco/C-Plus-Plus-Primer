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

void disconnect(connection){         // close the given connection
  cout << "disconnect" << endl; 
};

void end_connection(connection *p) { disconnect(*p); }

void f(destination &d){
  // get a connection
  connection c = connect(&d);
  shared_ptr<connection> p(&c, end_connection);
  // use the connection
  // when f exits, even if by an exception, the connection will be properly closed
}


int main(){
  
  
  
  return 0;
}