#include <iostream>

using namespace std;

class Employee
{

public:
    string name;
    int Joining_year;
    string address;
};

int main()
{

    Employee employe;

    employe.name = "Anmol";
    employe.Joining_year = 2020;
    employe.address = "MOhali, Sector 82";

    Employee employe1;
    employe1.name = "Ayush";
    employe1.Joining_year = 2020;
    employe1.address = "Kharar";

    Employee employe2;
    employe2.name = "2vivek";
    employe2.Joining_year = 2019;
    employe2.address = "kharar, kadoua";

    Employee employe3;
    employe3.name = "Jatin";
    employe3.Joining_year = 2021;
    employe3.address = "Mansa, Streete no 2";

    Employee employe4;
    employe4.name = "Rashmi";
    employe4.Joining_year = 2018;
    employe4.address = "Mansa, Streete no 2";

    cout << "Name   Joining Year    adress" << endl;
    cout << employe1.name << "   " << employe1.Joining_year << "      " << employe1.address << endl;

    cout << employe2.name << "   " << employe2.Joining_year << "      " << employe2.address << endl;

    cout << employe3.name << "   " << employe3.Joining_year << "      " << employe3.address << endl;

    cout << employe4.name << "   " << employe4.Joining_year << "      " << employe4.address << endl;
    ;

    return 0;
}