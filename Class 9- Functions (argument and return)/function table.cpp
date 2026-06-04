
#include<iostream>
#include<conio.h>
using namespace std;

void table(int x){

             for(int i=1;i<=20;i++)
             {
                 cout<<x<<"x"<<i<<"="<<i*x<<endl;

             }

            }  //function defination


int z; //global variable

int main()
{
     int a;  //local variable
     cout<<"enter number for table "<<endl;
     cin>>a;

     table(a);
}
