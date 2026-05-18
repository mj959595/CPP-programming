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
    int a;
    int b;
    cout<<"enter your numbr";
    cin>>a;
    cout<<"enter your numbr";
    cin>>b;

    int c=addition(a,b);
    cout<<"your addition result is = "<<c;

    getch();
}
