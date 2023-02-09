#include <iostream>

using namespace std; 


int structures () {

     // 
     struct class_3A {
          
     string UID;
     string name;
     double phone_number;
     string section;
     float marks;

     };

     struct class_3A students;
     students.UID = "22BCA10236";
     students.name = "Shisui";
     students.phone_number = 7009524322;
     students.marks = 23.35f;

cout<< students.UID <<endl;
cout<< students.name <<endl;
cout<< students.phone_number <<endl;
cout<< students.marks <<endl;



     return 0;
}

int main () {

   structures();

     return 0;
}