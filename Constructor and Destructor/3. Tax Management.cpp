/*
Define a class taxpayer with following specifications:
Data members:
- Int pan
- Char name[]
- Float income
- Float tax
Member functions:
-Input() to input data
-Disp() to display data
-Calctax() to calculate tax
Tax is calculated according to the following rates
Income                      tax
<=100000                    0%
100000 to 200000            10%
200000 to 500000            15%
>500000                      20%
(Make constructor and destructor too)

*/


#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Taxpayer
{
private:
int pan;
char name[30];
float income;
float tax;

public:
Taxpayer() //constructor making
{
    pan=0;
    name[30]=0;
    income=0;
    tax=0;
}
Taxpayer(int p,char n[],float inc);
void Input();
void Display();
void Calctax();

~Taxpayer()
{
cout<<"Memory deallocated using destructor..."<<endl;
}
};

Taxpayer::Taxpayer(int p,char n[],float inc)
{
    pan=p;
    strcpy(name,n);
    income=inc;
}

void Taxpayer::Input()
{
cout<<"Enter pan number : ";
			cin>>pan;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter income : ";
			cin>>income;
}

void Taxpayer::Display()
		{
			cout<<"Pan no.:"<<pan<<endl<<"Name : "<<name
			<<endl<<"Income : "<<income<<endl;
		}

void Taxpayer::Calctax()
{
			if (income<=100000)
			{
				tax=0;
				cout<<"No tax is charged."<<endl;
			}
			else if (income>100000 && income<=200000)
			{
				tax=0.1*income;
				cout<<"Tax is charged and the taxable amount is : "<<tax<<endl;
			}
			else if (income>200000 && income<=500000)
			{
				tax=0.15*income;
				cout<<"Tax is charged and the taxable amount is : "<<tax<<endl;
			}
			else
			{
				tax=0.2*income;
				cout<<"Tax is charged and the taxable amount is : "<<tax<<endl;
			}
}

int main()
{
	Taxpayer t(12,"Ravan",233);
	t.Display();
	t.Input();
	t.Display();
	t.Calctax();
	return 0;
}

