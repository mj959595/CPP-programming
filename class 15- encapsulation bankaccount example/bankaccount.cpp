#include<iostream>
#include<conio.h>
using namespace std;

class bankaccount
{
private:
    float balance;

public:
    bankaccount (int a)
    {
        balance=a;
    }

/*     void setbalance(int a)
     {
         balance=a;
     }
*/

     void showbalance()
     {
         cout<<"your balance is = "<<balance<<endl;
     }


     void deposit(int damount)
     {
         balance = balance + damount;
     }

};



int main ()
{
    bankaccount farhan (600);
//    farhan.setbalance(500);

    bankaccount hasnain(1000);
    hasnain.deposit(400);
     hasnain.deposit(7000);
    //hasnain.showbalance();


    bankaccount hammad (300);
    hammad.deposit(700);
    hammad.showbalance();

getch();
}
