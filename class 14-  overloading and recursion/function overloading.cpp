#include<iostream>
#include<conio.h>
using namespace std;


void addition(int x,int y)
{
    cout<<"addition int result is = "<<x+y<<endl;
}


void addition(float i,float j)
{
  cout<<"addition float result is = "<<i+j<<endl;
}


void addition(bool k, bool l)
{
 cout<<"addition result for boolin is = "<<k+l<<endl;
}

int main()
{
  int a,b;
  float c,d;
  bool e=1;
  bool f=1;

  cout<<"enter number for addition = ";
  cin>>a>>b;
  addition(a,b);

  cout<<"enter float number for addition = ";
  cin>>c>>d;
  addition(c,d);

   cout<<"enter float number for addition = ";
  cin>>e>>f;
  addition(e,f);

  getch();
}


