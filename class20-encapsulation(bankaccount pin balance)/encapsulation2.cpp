#include<iostream>
#include<conio.h>
using namespace std;


class bankaccount
{
 private:
    int balance;

 public:

     bankaccount(int a)
     {
         if(a>=2000)
         {
         balance=a;
         }
         else
            cout<<"enter 2000 or bigger amount"<<endl;

     }

 /*   void setbalance(int a)
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
        if(damount>0)
        {
        balance=balance+damount;
        }
        else
            cout<<"enter correct amount"<<endl;
    }


    void withdraw(int wamount)
    {
        if(wamount<=balance)

        {
        balance= balance-wamount;
        }
        else
            cout<<"enter correct amount"<<endl;
    }


};





int main ()
{

    bankaccount hasnain(2000);
    hasnain.deposit(1000);
    hasnain.withdraw(2000);
    hasnain.showbalance();



    getch();
}
