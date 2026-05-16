#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int num ;
    int i = 1;

    cout<<"enter number for table = ";
    cin>>num;

    while(i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    getch();
}
