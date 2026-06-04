#include<iostream>
#include<conio.h>
using namespace std;


class bankaccount
{
 private:
    int balance;
    string password;
 public:

     bankaccount(string pin,int amount)
     {
         if(pin.length() == 4 && amount>=2000)
         {
         password=pin;
         balance=amount;
         }
         else
            cout<<"enter 2000 or bigger amount or 4 digit pin"<<endl;

     }

 /*   void setbalance(int a)
    {
        balance=a;
    }

   */


    void showbalance(string spin)
    {
        if(password==spin)
        {
             cout<<"your balance is = "<<balance<<endl;
        }
        else
            cout<<"wrong pin try again"<<endl;

    }



    void deposit(string dpin,int damount)
    {
        if(dpin==password && damount>0)
        {
        balance=balance+damount;
        }
        else
            cout<<"enter correct amount or pin"<<endl;
    }


    void withdraw(string wpin,int wamount)
    {
        if(wpin==password && wamount<=balance)

        {
        balance= balance-wamount;
        }
        else
            cout<<"enter correct amount"<<endl;
    }


};





int main ()
{

    bankaccount hasnain("1234",2000);
    //hasnain.showbalance("1234");

    bankaccount farhan("1111",2000);
    farhan.withdraw("1111",500);
    farhan.showbalance("1111");




    getch();
}
