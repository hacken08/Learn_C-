#include <iostream>

using namespace std; 

int main () {

   int InNum, OutNum;

   cout<< "Enter your Number A = " <<endl;
   cin>> InNum;

   cout<< "Enter your number B = " <<endl;
   cin>> OutNum;

   int temp1 = InNum;
   InNum = OutNum;
   OutNum = temp1;


   cout<< "Your number A is now: " <<InNum <<endl;
   cout<< "Your number B is now: " <<OutNum<< endl;

     return 0;
}