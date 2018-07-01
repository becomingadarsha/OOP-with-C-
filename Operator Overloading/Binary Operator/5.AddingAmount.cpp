/*
Use binary operator overloading ++() to add the two amounts
Class Amount
{
//methods
}
and display the added amount
*/

#include<iostream>
using namespace std;
class Amount
{
private:
int rupees,paisa;

public:
void read();
void display();
Amount operator+(Amount x);
};
void Amount::read()
{
cout<<"Rupees="; cin>>rupees;
cout<<"Paisa="; cin>>paisa;
}

void Amount::display()
{
cout<<"Rs."<<rupees<<" and "<<paisa<<" paisa"<<endl;
}

Amount Amount:: operator+(Amount x)
{
Amount temp;
temp.rupees=rupees+x.rupees;
temp.paisa=paisa+x.paisa;
if(temp.paisa>100)
{
temp.rupees=rupees+x.rupees+(temp.paisa/100);
temp.paisa=temp.paisa%100;
}
return temp;
}

int main()
{
Amount amt1,amt2,amt3;
cout<<"Enter amount: "<<endl;
amt1.read();
amt2.read();
cout<<"Inputed amount:"<<endl;
amt1.display();
amt2.display();
cout<<"Amount after adding is:"<<endl;
amt3 = amt1 + amt2;
amt3.display();
}
