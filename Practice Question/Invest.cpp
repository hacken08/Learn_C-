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

inline void Amout ::EstAmt(int Inv, int Int, int year)
{

    float Int_per_year = Int * year;

    float PerYear = (Inv * Int_per_year) / 100;
    float FinalAmt = PerYear + Inv;

    cout << "Total earning => " << FinalAmt << endl;
}

inline void Amout::getData()
{
    cout
        << "--------Invesment Calculator-------" << endl;

    cout << endl;

    cout << "Enter Invisted amount: ";
    cin >> InvAmt;

    cout << "Enter per year Interst rate in percentage: ";
    cin >> Interest;

    cout << "Enter Number of year: ";
    cin >> year;

    EstAmt(InvAmt, Interest, year);
}

int main()
{

    Amout i1, i2, i3, i4, i5;

    i1.getData();
    i2.getData();
    i3.getData();
    i4.getData();
    i5.getData();

    return 0;
}