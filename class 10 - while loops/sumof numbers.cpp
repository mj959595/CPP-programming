#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;

    while(i <= 5) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;
getch();
}
