#include<iostream>
#include<conio.h>
using namespace std;

int b= 30;  //global variable
void addition();

int main()
{
  cout<<"this is main function"<<endl;
  cout<<"this is global variable = "<<b<<endl;
  addition();
  getch();
}

void addition()
{
 int a=2;
 cout<<"this is addition function = "<<a<<endl;
 cout<<"this is global variable = "<<b<<endl;
}
