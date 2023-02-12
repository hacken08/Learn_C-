#include <iostream>

using namespace std; 

void Binary_TO_Decimal (int Deci) {

     int Binary_Digit[50];
    int i = 0;

    while (Deci > 0) {

        Binary_Digit[i] = Deci % 2;
        Deci = Deci / 2;
        i++;
    }

    for (int index = i - 1; index >= 0; index--) {
        cout<< Binary_Digit[index];
    }
} 


int main () {


   int Deci;

   cout<< "Enter a decimal number = ";
   cin>> Deci;

    Binary_TO_Decimal (Deci);


     return 0;
}