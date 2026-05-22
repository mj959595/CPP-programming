#include<iostream>
#include<conio.h>
using namespace std;

class student {       // The class
  public:             // Access specifier
    int rollno;        // Attribute (int variable)
    string name;  // Attribute (string variable)

    student()                  //default constructor
    {
      cout<<" constructor method called "<<endl;
    }

    student(int a,string b)  //perametrized constructor
    {
        rollno=a;
        name=b;
        cout<<"student name is "<<b<< " roll no is "<<a<<endl;
    }

};



int main() {

  student s1(2026,"ahmed");
  student s2(2015,"noman");
  student s3(2365,"rehan");

  getch();
}
