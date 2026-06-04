#include<iostream>
#include<conio.h>
using namespace std;
int main(){

string name;
int marks;

cout<<"enter name = ";
cin>>name;
cout<<"enter marks = ";
cin>>marks;

if(marks<=40 && marks>60)
{
    cout<<"your grade is c "<<endl;
}
else if (marks>=60 && marks<80)
{
    cout<<"your grade is B "<<endl;
}
else if (marks>=80)
{
    cout<<"your grade is A "<<endl;
}
else
{
     cout<<"you are fail ";
}

getch();
}

