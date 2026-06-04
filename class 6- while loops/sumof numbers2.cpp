#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;
    int number;

    cout<<"enter number for sum = ";
    cin>>number;
    while(i <= number) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
getch();
}
