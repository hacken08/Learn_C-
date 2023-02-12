#include <iostream>

using namespace std; 

// void sum ();

int main () {

   int num1;
   int num2 ;

   cin>> num1>> num2;

   cout<< sum(&num1, &num2);

     return 0;
}

void sum (int *a, int *b) {

int plus = *a+*b;

cout<< plus;

}

