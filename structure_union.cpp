#include <iostream>

using namespace std; 


int structures () {

     cout <<"<---------------structure-------------->" <<endl;

     // creating struct data type
     typedef struct class_3A {
          
     string UID;
     string name;
     double phone_number;
     string section;
     float marks;

     } str;

     str students; // giving it a name "students"

// providing data to variables 
     students.UID = "22BCA10236";
     students.name = "Shisui";
     students.phone_number = 7009524322;
     students.marks = 23.35f;

// printing all the variable
     cout<< students.UID <<endl;
     cout<< students.name <<endl;
     cout<< students.phone_number <<endl;
     cout<< students.marks <<endl;



     return 0;
}

int Union () {
 
cout<< "<--------------Union-------------->"<< endl;


// creating union
typedef union subjects
{

// use only one of the data type
    int math;
    float science;
    char human ;
} sub;

sub marks;

marks.math = 91;
marks.science = 12;
marks.human = 'F';

cout<< marks.science<< endl;
// cout<< marks.human<< endl;


     return 0;
}

int Enum () {

cout<< "<-----------------Enum------------------->" <<endl;

// assign index number to the variable 
typedef enum anime {one_piece, naruto, death_note, another, finaly_fanatasy,} ani; // creating enum

ani anime2 = one_piece;
ani anime = naruto;
ani anime1 = death_note;


cout<< anime <<endl <<anime1 <<endl <<anime2 <<endl;

     return 0;
}

int main () {

   Enum();

     return 0;
}