#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter marks obtained: ";
    cin >> a;

    cout << "Enter total marks: ";
    cin >> b;

    c = (a / b) * 100;

    cout << "Your percentage is = " << c;

    getch();
}
