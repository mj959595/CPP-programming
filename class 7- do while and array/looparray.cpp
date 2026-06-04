#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    string cars[5] = {"toyota","chevrolet","kia","mercedes","ferrari"};

    for(int i = 0; i < 5; i++) {
        cout << cars[i] << endl;
    }

    getch();
    return 0;
}
