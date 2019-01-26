#include <iostream>
#include <memory>

using std::unique_ptr;
using std::string;
using std::cout;
using std::endl;

struct destination{
  string name;
};  

struct connection{
  string name;
};

connection connect(destination*){
  return connection();
};

void disconnect(connection){
  cout << "disconnect" << endl; 
};

void end_connection(connection *p) { disconnect(*p); }

void f(destination &d){
  connection c = connect(&d);  // open the connection
  // when p is destroyed, the connection will be closed
  unique_ptr<connection, decltype(end_connection)*> p(&c, end_connection);
  // use the connection
  // when f exits, even if by an exception, the connection will be properly closed
}

int main(){
  
  // p points to a object of type objT and uses an object of type delT to free that object
  // it will call an object call fcn of type delT
  //unique_ptr<objT, delT> p(new objT, fcn);
  
  
  
  return 0;
}