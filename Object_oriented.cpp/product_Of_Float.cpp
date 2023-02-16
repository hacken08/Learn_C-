#include <iostream>

using namespace std; 

int main () {

   float val[] = {12.2 , 15.5 , 65.2} ;

int a = 0, b = 1;
 while (a < 2) {
  float result = val[a] * val[b];

  cout<< result;

  a++;
  b++;
 }

     return 0;
}