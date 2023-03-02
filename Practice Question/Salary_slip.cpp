#include <iostream>

using namespace std;

class Employee
{
public:
  string name, Department, Bank_Name;

  float base_salary, HR, DA, HRA, total_salary;

  void Get_Date();
  void Net_salary();
  void display();
};

void Employee ::Get_Date()  
{

  cout << "Name: ";
  cin >> name;

  cout >> "Department Name: ";
  cin >> Department;

  cout >> "Bank Name: ";
  cin >> Bank_Name;

  cout >> "Base Salary: ";
  cin >> base_salary;
}

void Employee ::Net_salary()
{
  HRA = 800;

  DA = 0.18 * base_salary;
  HR = 0.12 * base_salary;

  total_salary = HRA + DA - HR + base_salary;
}

void Employee ::display()
{

  cout << "Name: " << name << endl;

  cout << "Department Name: " << Department << endl;

  cout << "Bank Name: " << Bank_Name << endl;

  cout << "---Your salary receipt ---" << endl;

  cout << endl;

  cout << "Base Salary:     " << base_salary << endl;
  cout << "HRA:     " << HRA << endl;
  cout << "DA:     " << DA << endl;
  cout << "TA:     " << HR << endl;
  cout << "Net Pay:     " << base_salary << endl;
}

int main()
{

  Employee Rohan, anmol;

  Rohan.Get_Date();
  Rohan.Net_salary();
  Rohan.display();

  return 0;
}