#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a;
  cout<<"enter number to show day = ";
  cin>>a;

switch(a) {
  case 1:
    cout<<"monday";
    break;
  case 2:
    cout<<"tuesday";
    break;
  case 3:
    cout<<"wednesday";
    break;
  case 4:
    cout<<"thursday";
    break;
  case 5:
    cout<<"friday";
    break;
  case 6:
    cout<<"saterday";
    break;
  case 7:
    cout<<"go home today is sunday";
  break;

  default:
      cout<<"wrong number for day";

}

    getch();
}

