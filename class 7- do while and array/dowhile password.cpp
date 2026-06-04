#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    string password;

    do {
        cout << "Enter password: ";
        cin >> password;

    }

    while(password != "123");

    cout << "Access granted!";

    getch();

}
