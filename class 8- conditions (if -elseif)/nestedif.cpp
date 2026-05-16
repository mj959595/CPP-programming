#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter number = ";
    cin>>a;

    if(a<0)
    {
        cout<<"this is negative number"<<endl;
    }
    else
    {
        cout<<"this is positive number"<<endl;
        if(a%2==0)
        {
            cout<<"this is even number";
        }
        else
        {
            cout<<"this is odd number";
        }
    }



    getch();
}
