#include<iostream>
#include<conio.h>
using namespace std;


int message()
{
    cout<<"hello"<<endl;
    message(); //recursion

}

int main()
{
  message();
  getch();
}



