#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum=0;
    int num;
    cout<<"enter number for sum = ";
    cin>>num;


    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<" sum of first 5 numbers are = "<<sum;

    getch();
}


