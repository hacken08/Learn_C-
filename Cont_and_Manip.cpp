#include <iostream> 
#include <iomanip>

using namespace std;



int ConstVaribale () {

    cout<< "<---------------- Const ---------------->"<< endl;

    // changable varibale
    cout<< "Changeable Variable"<<endl;
    int var = 69;
    float var1 = 69.69;
    char var2 = 'F';

    cout<< var<< endl;
    cout<< var1<< endl; 
    cout<< var2<< endl;

    cout<< "\n"; // for blank line

    // changing variable's value
    cout<< "values after changing"<<endl;
    var = 63;
    var1 = 66.96;
    var2 = 'q';
    
    cout<< var<< endl;
    cout<< var1<< endl; 
    cout<< var2<< endl;

    cout<< "\n"; // for blank line


    // const variable which cannot be changed
    cout<< "non chanable variable "<<endl;
    const int ConVar = 56;
    const float ConVar2 = 45;
    const char ConVar3 = 'S';

    //  error in this case
    // ConVar = 45;
    // ConVar2 = 23;
    // Convar3 = 'w';

    cout<<"\n"; //for blank line
    cout<<"\n"; //for blank line
 
    return 0;
}

int Manipulator() {

    cout<< "<----------------Manipulator---------------->"<< endl;
        
    int num = 1, num2 = 43, num3 = 234, num4 = 9245;

    cout<<"The value of num  before using setw: "<< num<< endl;
    cout<<"The value of num2 before using setw: "<< num2<< endl;
    cout<<"The value of num3 before using setw: "<< num3<< endl;
    cout<<"The value of num4 before using setw: "<< num4<< endl;

 
    cout<<"\n"; //for blank line

    cout<< "The value of num  after using setw:"<< setw(15)<< num << endl;
    cout<< "The value of num2 after using setw:"<< setw(15)<< num2<< endl;
    cout<< "The value of num3 after using setw:"<< setw(15)<< num3<< endl;
    cout<< "The value of num4 after using setw:"<< setw(15)<< num4<< endl;

    return 0;
}

int main(int argc, char const *argv[])
{
    
    Manipulator ();

    return 0;
}