#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    //this is data type and variable
    int marks;
    string name;
    float percentage;
    char grade;
    bool passFail;

//updating values of variable
    cout<<"enter your name=";
    cin>>name;

    cout<<"enter your marks=";
    cin>>marks;

    cout<<"enter your grade (A/B/C)=";
    cin>>grade;

    cout<<"enter your grade percentage=";
    cin>>percentage;

    cout<<"enter your grade pass or fail (pass:1/fail:0)=";
    cin>>passFail;

    cout<<endl<<endl<<endl<<endl;

    cout<<"========= result ========="<<endl;
    cout<<"your name is = ";
    cout<<name<<endl;

    cout<<"your marks are = ";
    cout<<marks<<endl;

    cout<<"your percentage is = ";
    cout<<percentage<<endl;

    cout<<"your grade is = ";
    cout<<grade<<endl;

    cout<<"pass or fail (1=pass/0=fail) = ";
    cout<<passFail<<endl;

    getch();

}
