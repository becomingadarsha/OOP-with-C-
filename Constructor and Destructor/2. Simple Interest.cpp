/*
Class name interest
Data member:
Principal, rate, time, and total amount
Member functions:
Interest
- constructor (overload the constructor)
Calc
- to calculate total amount
Disp
- to display all the values
(Also make a destructor)
Declare different objects of interest class with different arguments, calculate total
amount for each object and display the values of all objects.

*/
#include<iostream>
using namespace std;
class Interest
{
private:
int principle,amount;
float rate,time;
float interest;

public:
Interest() //constructor created
{

}
Interest(int,float,float);
void getdata();
void Calc();
void Display();
~Interest()
{
cout<<"Memory freed using destructor.. "<<endl;
}
};


Interest::Interest(int p, float t, float r)
{
principle=p;
time=t;
rate=r;
}

void Interest::getdata()
{
	cout<<"Enter principle:";
	cin>>principle;
	cout<<"Enter rate:";
	cin>>rate;
	cout<<"Enter time:";
	cin>>time;
}

void Interest:: Calc()
{
interest=((principle*rate*time)/100);
amount=interest+principle;
}

void Interest::Display()
{
cout<<"Principle: "<<principle<<endl<<"Time: "<<time<<endl<<"Rate: "<<rate<<endl<<"Interest: "<<interest<<endl
<<"Final Amount: "<<amount<<endl;
}

int main()
{
Interest I1(2000,10,1); //doing nthng only doing default arguments as per ques
I1.Calc();
I1.Display();
Interest I2; //next object as per ques
I2.getdata();
I2.Calc();
I2.Display();
return 0;
}
