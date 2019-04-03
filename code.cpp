#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) { 

  // code goes here   
  int x = 1;
 for(int i = 1; i <= num; i++)
 {  x *= i;                       } 
  return x;
            
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
}
