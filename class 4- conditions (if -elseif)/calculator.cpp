#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a;
  int b;
  int c;

  cout<<"enter 1st number = ";
  cin>>a;
  cout<<"enter 2nd number = ";
  cin>>b;
  cout<<"enter operation (1: add, 2:sub, 3: mul, 4:div) = ";
  cin>>c;

  if(c==1)
  {
      cout<<"addition result is = "<<a+b;
  }
  else if(c==2)
  {
      cout<<"subtraction result is = "<<a-b;
  }
  else if(c==3)
  {
      cout<<"multiplication result is = "<<a*b;
  }
  else if(c==4)
  {
      cout<<"division result is = "<<a/b;
  }
  else
  {
      cout<<"wrong option";
  }


    getch();
}

