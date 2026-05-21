#include<iostream>
#include<conio.h>
using namespace std;

class student {       // The class
  public:             // Access specifier
    int rollno;        // Attribute (int variable)
    string name;  // Attribute (string variable)

    void message()                  //method
    {
        cout<<" student roll number is "<<rollno<<endl;
        cout<<"student name is  "<<name<<endl;
    }

};



int main() {
  student s1;       // Create an object of MyClass
                  // Access attributes and set values
  s1.rollno = 100;
  s1.name = "rehan";
  s1.message();



  student s2;
  s2.rollno=50;
  s2.name="noman";
  s2.message();


  student s3;
  s3.rollno=500;
  s3.name="ahmed";
  s3.message();


  getch();
}
