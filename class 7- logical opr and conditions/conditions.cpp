#include<iostream>
#include<conio.h>
using namespace std;
int main(){

float a,b,c;
float d;
float avg;
float per;
int attendance;

cout<<"enter marks of 3 subjects = ";
cin>>a;
cin>>b;
cin>>c;
cout<<"enter attendance = ";
cin>>attendance;

d=a+b+c;
avg=d/3;

per=(d/300)*100;

cout<<"your average marks are = "<<avg<<endl;
cout<<"your percentage is = "<<per<<endl;

if(per>50 && attendance>50)
{
    cout<<"you are pass";
}
else
{
    cout<<"you are fail";
}

getch();
}
