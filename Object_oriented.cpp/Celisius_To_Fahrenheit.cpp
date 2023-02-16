#include <iostream>

using namespace std;

int Convert(float In)
{
     float Fah = (In * 9/5) + 32 ;
     //  result = 54 f;

cout<< In <<" Celsius is equal to " <<Fah << " Fahrenheit";
     
}

 int chk_tempar (int In) {

if (In < 0 || In > 100) {
     cout<< "Error: Please enter value in celsius :( " << endl;
     exit (0);
}

 }

int main()
{

int In;

     cout << "Temprature To Fahrenheit: " << endl;
     cin >> In;

     chk_tempar (In);
     Convert(In);

         return 0;
}