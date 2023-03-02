

#include <iostream>

using namespace std;

class Conversion
{

public:
    void Convert(float In);
    void chk_tempar(int In);
};

void Conversion ::Convert(float In)
{
    float Fah = (In * 9 / 5) + 32;
    //  result = 54 f;

    cout << In << " Celsius is equal to => " << Fah << " Fahrenheit";
}

void Conversion ::chk_tempar(int In)
{

    if (In < 0 || In > 100)
    {
        cout << "Error: Please enter value in celsius :( " << endl;
        exit(0);
    }
}

int main()
{

    int In;

    cout << "-----Celcius to Fahrenheit-----" << endl;
    cout << endl;
    cout << "Enter Celcius => ";
    cin >> In;

    Conversion temp;

    temp.chk_tempar(In);
    temp.Convert(In);

    return 0;
}
