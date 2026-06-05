#include <iostream>
#include <conio.h>
using namespace std;

class base1 {
public:
void m1()
{
    cout<<"i am base class 1"<<endl;
};

};



class base2{
public:
void m2()
{
    cout<<" i am base class 2"<<endl;
}

};

class d1 : public base1,public base2 {
public:
void m3()
{
    cout<<" i am derived class"<<endl;
}

};




int main()
{
  d1 obj;
  obj.m3();
  obj.m2();
  obj.m1();


getch();
}
