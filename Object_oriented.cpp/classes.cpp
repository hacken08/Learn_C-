#include <iostream>
#include <string>

using namespace std;

class student
{
    // Data Members
private:
    float mark;
    int UID;
    char result;



public:
    string Name, status;
    int email, phone_number;

    // member fucntion
    void PrivateInfo(int a, int b, int c)
    {
        mark = a;
        UID = b;
        result = c;
    }
   
};

 int Deci_to_binary(int num)
    {

        int Deci[200];

        int i = 0;
        while (num > 0)
        {
            Deci[i] = num % 2;
            num = num / 2;
            ++i;
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << Deci[j];
        }
    }
    
int main()
{
    student Anmol;
    Anmol.phone_number = 524;
    Anmol.email = 0;
    // Anmol.mark = 45;

    cout<< Anmol.email<< endl;
    // cout<< Anmol.mark << endl;

    // Anmol.mark = 50 ;  erro --> coz it's private variable only accessable by fuction
    Anmol.PrivateInfo(23.4f, 10236, 'p');
    //    Anmol.getInfo();

    int InNum;

    // cout << "Enter a Decimal NUmber: " << endl;
    // cin >> InNum;

    // Anmol.Deci_to_binary(50);

    return 0;
}
