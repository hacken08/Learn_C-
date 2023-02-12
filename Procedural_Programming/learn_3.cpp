#include <iostream>

using namespace std; 


int Break_and_Continue () {

   cout<< "<---------------Break and continue------------->"<< endl;

   for (int i = 0; i <= 10; i++)
   {
    
    if (i < 7) {continue;}

    cout<< i<< endl;
   }


     return 0;
}


int Pointers () {

      cout<< "<---------------Pointers--------------->"<< endl;

      int num = 20;
      char name = 'a';

    // creatging Pointer variable which stores value of "num" varibable
    int  * PtrNum = &num;
    char * ptrName = &name;

    // printing variable 
    cout<< * PtrNum<< endl; //  To print it's value 
    cout<< PtrNum<< endl; //  To print it's address

    cout<< endl;

    cout<< *ptrName <<endl; // To print value of char
    cout<< ptrName <<endl; // To print address of char
   
    cout<< endl;

    // print address directly 
    cout<< &PtrNum<< endl<< &ptrName<< endl;

    cout<< endl; 

    // pointer to pointer
    int **ptr2 = &PtrNum;

    cout<< **ptr2;

     return 0;
}


int main () {

Break_and_Continue ();
   
}
