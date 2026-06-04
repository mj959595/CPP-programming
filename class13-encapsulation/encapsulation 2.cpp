#include<iostream>
#include<conio.h>
using namespace std;

class student {

private:
    int marks;

    void setmarks(int a)   // private function
    {
        marks = a;
    }

public:

    void data()   // public function
    {
        setmarks(90);   // calling private function inside class
    }

    void getmarks()
    {
        cout << "your marks are = " << marks;
    }
};

int main()
{
    student s1;

    s1.data();       // public function
    s1.getmarks();

    getch();
}
