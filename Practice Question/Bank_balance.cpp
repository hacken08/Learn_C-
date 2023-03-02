#include <iostream>

using namespace std;

class Bank
{

public:
    int accType;

    long AccNo;

    string name;

    float Dep, withdraw;

    int bal = 1000;

    void Bnk_data()
    {
        cout << "Account NO. ";
        cin >> AccNo;

        if (AccNo < 9999999 || AccNo > 99999999)
        {
            cout << "Your Account No. contain minimum 8 digits " << endl;
            exit(0);
        }

        cout << "Name: ";
        cin >> name;

        cout << "Choose:- \n 1. Current \n 2. saving" << endl;
        cin >> accType;

        switch (accType)
        {
        case 1:
            cout << "Your Accessing => Current Account " << endl;
            break;

        case 2:
            cout << "Your Accessing => saving Account" << endl;
            break;

        default:
            cout << "Type valid input";
            exit(0);
        }
    }

    void Balance()
    {
        cout << "Your Balance = " << bal << endl;
    }

    void Deposite()
    {
        cout << "Deposite Amount = ";
        cin >> Dep;
        bal += Dep;
    }

    void Withdraw()
    {
        cout << "Withdraw Amount = ";
        cin >> withdraw;

        if (bal > withdraw)
        {
            bal -= withdraw;
        }
    }
};

int main()
{
    Bank SBI;
    SBI.Bnk_data();

    int Action2;

    cout << "What you Want to do:- \n  1. Check Balance \n  2. Deposite \n  3. withdraw" << endl;
    cin >> Action2;

    switch (Action2)
    {
    case 1:
        SBI.Balance();
        break;

    case 2:
        SBI.Deposite();
        cout << "--------------" << endl;

        cout << "Your Balance status = " << SBI.bal;
        break;

    case 3:
        SBI.Withdraw();
        cout << "--------------" << endl;

        cout << "Your Balance status = " << SBI.bal;
        break;

    default:
        cout << "Choose correct option" << endl;
        break;
    }

    return 0;
}