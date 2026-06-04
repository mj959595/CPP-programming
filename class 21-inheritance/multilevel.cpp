#include <iostream>
#include <conio.h>
using namespace std;

class class1 {
public:
void display()
{
    cout<<"i am base class"<<endl;
};

};



class class2 : public class1{
public:
void message()
{
    cout<<" i am class 2"<<endl;
}

};


class class3 : public class2{
public:
void message1()
{
    cout<<" i am class 3"<<endl;
}

};



int main()
{

  class2 obj;
  obj.display();

getch();
}
