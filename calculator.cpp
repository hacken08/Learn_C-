#include <iostream> 

using namespace std; 

void calculator( ) {

    int num1,  num2;
    char sign1, sign2;

    cout<< "Enter two values:  \n";
    cin>> num1>> sign1>> num2>> sign2;
    
    int sum, sub, multiplyed, divided;

    switch (sign1) {
        case '+':
        
         sum = num1 + num2;

         switch (sign2) {
    case  '=': /* constant-expression */
       cout<< "Your Answer is: ";
        cout<< sum;
        break;
    default:
    cout<< "pls use = sign";
        break;
    } break;

        case '-':  
         sub = num1 - num2;

       switch (sign2) {
    case  '=': /* constant-expression */
       cout<< "Your Answer is: ";
        cout<< sub;
        break;
    
    default:
    cout<< "pls use = sign";
        break;
    } break;

        case '*':
         multiplyed = num1 * num2;

        switch (sign2) {
    case  '=': /* constant-expression */
       cout<< "Your Answer is: ";
        cout<< multiplyed;
        break;
    default:
    cout<< "pls use = sign";
        break;
    } break;

        case '/':
        cout<< "Your Answer is: ";
         divided = num1 / num2;

           switch (sign2) {
    case  '=': /* constant-expression */
       cout<< "Your Answer is: ";
        cout<< divided;
        break;
    default:
    cout<< "pls use = sign"; break;
    } break;
       

        default:
        cout<< "Invalid arthmatical sign";
    }

   
}


int main(int argc, char const *argv[])
{

calculator();

}
