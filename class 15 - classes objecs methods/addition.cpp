#include<iostream>
#include<conio.h>
using namespace std;

class add {       // The class
  public:             // Access specifier
    int a;        // Attribute (int variable)
    int b;

    void plus()                  //method
    {
        cout<<"your fist value is "<< a<<endl;
        cout<<"your 2nd value is "<< b<<endl;
        cout<<" addition result is  "<<a+b<<endl;

    }

};



int main() {
  add q1;       // Create an object of MyClass
                  // Access attributes and set values
  q1.a = 100;
  q1.b = 50;
  q1.plus();


  add q2;       // Create an object of MyClass
                  // Access attributes and set values
  q2.a = 50;
  q2.b = 30;
  q2.plus();


    add q3;       // Create an object of MyClass
                  // Access attributes and set values
  q3.a = 20;
  q3.b = 80;
  q3.plus();



  getch();
}
