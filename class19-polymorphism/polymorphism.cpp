#include<iostream>
#include<conio.h>
using namespace std;

class maths{

public:
void addition(int a,int b)
{
    cout<<"addition result is = "<<a+b<<endl;
}

void addition(int a,int b,int c)
{
    cout<<"addition result is = "<<a+b+c<<endl;
}

void addition(int a,int b,int c,int d)
{
    cout<<"addition int result is = "<<a+b+c+d<<endl;
}


};
int main()
{

  maths obj;
  obj.addition(2,3);
  obj.addition(2,3,5);
  getch();
}


