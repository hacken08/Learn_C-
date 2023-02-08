#include <iostream> 

using namespace std;



int LogicalOperators () {


    int a = 23, b = 12, c = 12, d = 23;
    float work = 45.88f;

    
    cout<< "----------------logical operators---------------- "<< endl;
    cout<< work;

    // 1. logical or:
    cout<< ((a==c) || (b>c))<<endl;

    // 2. logical and:
    cout<< ((a==c) && (b==c))<<endl;

    // 3. logical not:
    cout<< (!(a==c))<< " chalega?? "<<endl;   

    return 0;
}

int ReferenceVariable () { 

  cout<<"----------------Reference Variable----------------"<< endl;

    float number = 84.34f; 

    // creating reference variabale: 
    float & mark = number;

    // printing number using reference variable:
    cout<< mark<< endl;
    cout<< number<< endl;

return 0;

 }

int typeCasting () {

    cout<< "----------------Type casting----------------"<< endl;

    float var = 'a';
    char num = 23.13f;
    int digit = 23;

    // using type casting:
    int type = char(var);
    cout<< type<< endl; 

    float Char = float(num);
    char type2 = char(var);
    cout<< Char<< endl<< type2<< endl;
    
    // Another way of casting:

    cout<< char(var)<<endl;
    cout<< float(num) + digit;

    return 0;

}

int main()
{

LogicalOperators ();

   return 0;
}
