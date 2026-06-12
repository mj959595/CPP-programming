#include<iostream>
#include<conio.h>
using namespace std;

class MARKS{

public:
void GRADE(int a)
{
    cout<<"YOUR result is = "<<a<<endl;
}

void GRADE(string a)
{
     cout<<"YOUR result is = "<<a<<endl;
}


};

int main()
{
  MARKS obj;
  obj.GRADE("f");
  obj.GRADE(100);


  getch();
}


