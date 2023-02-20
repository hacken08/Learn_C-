#include <iostream>

using namespace std;

class Amout
{

public:
    float InvAmt, Interest;
    int year;

    void EstAmt(int Inv, int Int, int year);
    void getData();
    // void display (int Show);
};

void Amout ::EstAmt(int Inv, int Int, int year)
{

    float Int_per_year = Int * year;

    float PerYear = (Inv * Int_per_year) / 100;
    float FinalAmt = PerYear + Inv;

    cout << "Total earning => " << FinalAmt << endl;
}

void Amout::getData()
{
    Amout income;
}

int main()
{

    Amout income;
    cout
        << "--------Invesment Calculator-------" << endl;

    cout << endl;

    cout << "Enter Invisted amount: ";
    cin >> income.InvAmt;

    cout << "Enter per year Interst rate in percentage: ";
    cin >> income.Interest;

    cout << "Enter Number of year: ";
    cin >> income.year;

    income.EstAmt(income.InvAmt, income.Interest, income.year);

    return 0;
}