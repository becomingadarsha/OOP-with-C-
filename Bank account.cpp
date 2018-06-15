//Incomplete 
#include<iostream>
using namespace std;
class account
{
private:
int ac_no,bal;
char name[30];
public:
	void create_account();
	void deposit(int b);
	void withdraw(int a);
	void balance();
	
};
void account::create_account()
{
	cout<<"Enter account no: ";
	cin>>ac_no;
	cout<<"Enter name: ";
	cin>>name;
}
void account::deposit(int b)
{
	bal=0;
	bal=bal+b;
	/*cout<<"Enter amount to deposit: ";
	cin>>bal;*/
}


void account::withdraw(int a)
{
	if(bal>a)
	{
		bal=bal-a;
	}
    else
    {
    	cout<<"Not enough balance"<<endl<<endl<<endl;
    	
	}
}

void account::balance()
{
	cout<<"Final Balance: "<< bal;
}

int main()
{
	account ac;
	ac.create_account();
	int i,a,b;
	cout<<"Enter 1. Deposit 2. Withdraw balance"; cin>>i;
	if(i==1)
	{
		cout<<"Enter amount to deposit: ";
	cin>>b;
			ac.deposit(b);
	}

else
{
	cout<<"Enter amount to withdraw: ";
	cin>>a;
	ac.withdraw(a);
}
	
	
	ac.balance();
}
