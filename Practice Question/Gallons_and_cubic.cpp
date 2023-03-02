#include <iostream>

using namespace std;

void chk_decimal(float n)
{
    //    #define int long long int
    //    long double n;
    //    cin>>n;
    if ((long double)n == (int)n)
    {
        cout << "Error: enter a decimal number" << endl;
        exit(0);
    }
}

void GallonToCf(float num)
{

    float cubic = num / 7.481;

    cout << num << " Gallon is equal to => " << cubic << " CF";
}

int main()
{
    float gallon;

    cout << "-------Gallon To cubic-------" << endl;

    cout << endl;
    cout << "Enter Gallon: ";

    cin >> gallon;

    chk_decimal(gallon);
    GallonToCf(gallon);

    return 0;
}