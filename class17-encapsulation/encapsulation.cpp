#include<iostream>
#include<conio.h>
using namespace std;

class student {
  private:
      int marks;

  public:
      void setmarks(int a)
      {
          marks = a;
      }

      void getmarks()
      {
          cout << "your marks are = " << marks;
      }
};

int main()
{
    student s1;

    s1.setmarks(90);   // setting value
    s1.getmarks();     // displaying value

    getch();
}
