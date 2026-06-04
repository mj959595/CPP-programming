#include<iostream>
#include<conio.h>
using namespace std;


int addition(int x,int y)
{
    int z;
    z=x+y;
    return z;
}


int main()
{
  int a,b;
  cout<<"enter values = ";
  cin>>a>>b;
  int c=addition(a,b);
  cout<<"result is "<<c;
  getch();
}


