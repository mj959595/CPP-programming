#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks;
    cout<<"enter your marks= ";
    cin>>marks;

    if(marks>=50)
    {
        if(marks>=80)
            {
                cout<<"excellent"<<endl;

            }
        cout<<"pass";
    }
    else
    {
        cout<<"fail";
    }


    getch();
}
