#include <iostream>

int main(){
  
  int currVal = 0, val = 0;
  
  if(std::cin >> currVal){
    
    int cnt = 1;
    while(std::cin >> val){
      
      if(currVal == val)
        ++cnt;
      else{
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt=1;
      }
    }
    
    std::cout << currVal << " occurs " << cnt << " times" << std::endl; 
  }
  
  return 0;
}

/* Output:

42 42 42 42 42 55 55 62 100 100 100
42 occurs 5 times
55 occurs 2 times
62 occurs 1 times
100 occurs 3 times

*/