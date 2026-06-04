#include<iostream>
#include<conio.h>
using namespace std;

class car {       // The class
  public:             // Access specifier
    string brand;        // Attribute (int variable)
    string model;  // Attribute (string variable)
    int year;



    car(string a,string b,int c)  //perametrized constructor
    {
            brand=a;
            model=b;
            year=c;
            cout<<"brand of car "<<a<<" model is "<<b<<" year"<<c<<endl;
    }


};


int main() {

   car c1("bmw","racing car",2016);
   car c2("toyota","off roader",2026);
   car c3("ferari","racing",2023);

  getch();
}

