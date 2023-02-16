#include <iostream>
#include <string>

using namespace std;

class Mark
{
    // Data Members
string decimal;

public:
    void read();
    void chk();
    void get();
    void outPut();
};

void Mark ::read()
{
    cout << "Enter a binary Number: " << endl;
    cin >> decimal;
}

void Mark ::chk()
{
    for (int a = 0; a < decimal.length(); a++)
    {

        if (decimal.at(a) != '0' && decimal.at(a) != '1')
        {
            cout << "Binary format is not acceptable" << endl;
            break;
        }
    }
}

void Mark :: get()
{

    for (int j = 0; j < decimal.length(); j++)
    {

        if (decimal.at(j) == '0')
        {
            decimal.at(j) = '1';
        }
        else
        {
            decimal.at(j) = '0';
        }
    }
}

void Mark ::outPut()
{

    for (int j = 0; j < decimal.length(); j++)
    {
        cout << decimal.at(j);
    }
    cout<< endl;
}

int main()
{
    Mark science;

    science.read();
    science.chk();
    science.get();
    science.outPut();

    return 0;
}
