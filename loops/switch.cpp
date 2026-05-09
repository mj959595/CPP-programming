#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int b;
    int c;
    char a;

    cout<<"enter 2 numbers =";
    cin>>b>>c;
    cout<<"enter your operation ( + - * /)= ";
    cin>>a;

    switch(a)
    {
    case '+':
        cout<<"addition result is = "<<b+c;
        break;
    case '-':
        cout<<"subtraction result is =" <<b-c;
        break;
    case '*':
        cout<<"multiplication result is = "<<b*c;
        break;
    case '/':
        cout<<"division result is =" <<b/c;
        break;
    default:
        cout<<"wrong operator";

    }


    getch();
}

