#include <fstream>

int main(){
  std::ofstream out1, out2;
  
  out1 = out2;                // error: cannot assign stream objects
  ofstream print(ofstream);   // error: can't initialize the ofstream parameter
  out2 = print(out2);         // error: cannot copy stream objects
  
  // Because we can't copy the IO types, we cannot have a parameter or return
  // type that is one of the stream types. Functions that do IO typically pass
  // and return the stream through reference. Reading or writing an IO object
  // changes its state, so the reference must not by const.
  

  return 0;
}