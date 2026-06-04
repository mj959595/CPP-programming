#include <iostream>
#include <conio.h>
using namespace std;

class baseclass {
public:
void display()
{
    cout<<"i am base class"<<endl;
};

};



class derived : public baseclass{
public:
void message()
{
    cout<<" i am derived class"<<endl;
}

};



int main()
{

  derived farhan;
  farhan.display();
  farhan.message();

getch();
}
