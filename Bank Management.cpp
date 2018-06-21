/*WAP to create a class account with dta members account no, account holders anem, balance.
Add member functions create_account(), deposit(), withdraw(), and balance inquiry to the class.
Create an object of the account class and show all the operation with thsi*/
#include<iostream>
#include <stdlib.h>
using namespace std;
class account
{
private:
int account_no,bal;
char name[30];

public:
	void create_account();
	void deposit(int a);
	void withdraw(int b);
	void balance_inquery();

};

void account::create_account()
{
	cout<<"Enter account no: ";
	cin>>account_no;
	cout<<"Enter name: ";
	cin>>name;
	bal=2000;
}

void account::deposit(int a)
{
	bal=bal+a;
}

void account::withdraw(int b)
{
	if(bal>b)
	{
		bal=bal-b;
	}

    else
    {
    	cout<<"Not enough balance"<<endl;

	}
}

void account::balance_inquery()
{
	cout<<"Current Balance: "<<bal<<endl;
}

int main()
{
	account ac;
	ac.create_account();
	int i,a,b;
	cout<<"\nPress\n1 To Deposit Money\n2 To Withdraw Money\n";
	cin>>i;

	if(i==1)
	{
    cout<<"Enter amount to deposit: ";
	cin>>a;
			ac.deposit(a);
	}

else if(i==2)
{
	cout<<"Enter amount to withdraw: ";
	cin>>b;
	ac.withdraw(b);
}

else
{
exit(0);
}

ac.balance_inquery();
}
