#include <iostream>
#include <array>

using namespace std;

int main()
{ 
    int Row, Clm;
    
     cout<< "Enter Total Numbers: " << endl; 
    cin>> Row >> Clm;
    
    int num[Row][Clm];
    int sumArr = 0;

    float TotalNum = Row * Clm;

    cout << "Pls enter at least " << TotalNum << " Numbers to find avrg: ";
    for (int row = 0; row < Row; row++)
    {
        for (int clm = 0; clm <  Clm; clm++)
        {
            cin >> num[row][clm];
        }
    }

    // Finding Average  

    for (int row = 0; row < Row; row++)
    {
        for (int clm = 0; clm < Clm; clm++) { 
        sumArr += num[row][clm];

        }
    }


    // cout<< "total number" << TotalNum<< endl;

    float avrg = sumArr / TotalNum;

    cout << "Avrg of your number is: " << avrg;

    return 0;
}