#include<iostream>
#include<conio.h>
using namespace std;


void addition(float a,float b)
{
  cout<<" your addition result is = "<<a+b;

}

void subtraction(float c,float d)
{
    cout<<" your subtraction result is = "<<c-d;
}
void multiplication(float e,float f)
{
     cout<<" your multiplication result is = "<<e*f;
}
void division(float g,float h)
{
     cout<<" your division result is = "<<g/h;
}


int main()
{
  float i,j;
  char opr;
  cout<<"enter numbers for operation = ";
  cin>>i>>j;
  cout<<"enter operator = ";
  cin>>opr;

  if(opr=='+')
  {
      addition(i,j);
  }
  else if (opr=='-')
  {
      subtraction(i,j);
  }
    else if (opr=='*')
  {
      multiplication(i,j);
  }
      else if (opr=='/')
  {
      division(i,j);
  }
  else
    cout<<"wrong operator";
  getch();

}


