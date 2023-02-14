#include <iostream>

using namespace std;

int main()
{

  int Num1, Num2, Num3;

  cout << "Enter Number 1: " << endl;
  cin >> Num1;

  cout << "Enter Number 2: " << endl;
  cin >> Num2;

  cout << "Enter Number 3: " << endl;
  cin >> Num3;

  if (Num1 > Num2 && Num1 > Num3)
  {

    cout << "your Larget Number is: " << Num1;
  }

  if (Num2 > Num1 && Num2 > Num3)
  {

    cout << "your Larget Number is: " << Num2;
  }

  if (Num3 > Num2 && Num3 > Num1)
  {

    cout << "your Larget Number is: " << Num3;
  }

  return 0;
}