#include<iostream>
#include<conio.h>
using namespace std;

class fruites {       // The class
  public:             // Access specifier
    string name;        // Attribute (int variable)
    string color;  // Attribute (string variable)
    string taste;



    fruites (string a,string b,string c)  //perametrized constructor
    {
        name=a;
        color=b;
        taste=c;
        cout<<"name of froute="<<a<<endl;
        cout<<"color = "<<b<<endl;
        cout<<"taste = "<<c<<endl;
    }


};


int main() {

       fruites f1("mango","yellow","sweet");
       fruites f2 ("apple","red","sour");

  getch();
}
