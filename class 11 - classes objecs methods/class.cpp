#include<iostream>
#include<conio.h>
using namespace std;

class mobile {       // The class
  public:             // Access specifier
    int price;        // Attribute (int variable)
    string model;  // Attribute (string variable)
};


int main() {
  mobile m1;       // Create an object of MyClass
                  // Access attributes and set values
  m1.price = 100;
  m1.model = "samsung";

  // Print attribute values
  cout << "mobile price is " <<m1.price <<endl;
  cout << "mobile model is "<<m1.model<<endl;


  mobile m2;
  m2.price= 200;
  m2.model="iphone";
  cout <<"mobile price is " <<m2.price <<endl;
  cout <<"mobile model is "<<m2.model<<endl;

  mobile m3;
  m3.price= 300;
  m3.model="nokia";
  cout <<"mobile price is " <<m3.price <<endl;
  cout <<"mobile model is "<<m3.model<<endl;


  getch();
}
