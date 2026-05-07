#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a;
  int b;
  int c;

  cout<<"enter 1st and 2nd numbers = ";
  cin>>a>>b;
  cout<<"enter operation (1: add, 2:sub,3:mul,4:div) = ";
  cin>>c;

switch(c) {
  case 1:
    cout<<"addition result is = "<<a+b;
    break;
  case 2:
    cout<<"subtraction result is = "<<a-b;
    break;
  case 3:
    cout<<"multiplication result is = "<<a*b;
    break;
  case 4:
  cout<<"division result is = "<<a/b;
  break;

  default:
    cout<<"wrong option";
}

    getch();
}
