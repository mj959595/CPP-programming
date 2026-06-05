#include <iostream>
#include <conio.h>
using namespace std;

class base {
public:
void m1()
{
    cout<<"i am base class"<<endl;
};

};



class d1 : public base {
public:
void m2()
{
    cout<<" i am derived class 1"<<endl;
}

};

class d2 : public base {
public:
void m3()
{
    cout<<" i am derived class 2"<<endl;
}

};




int main()
{
   // d1 obj;
    //obj.m2();
    //obj.m1();

     d2 obj1;
     obj1.m3();
     obj1.m1();



getch();
}
