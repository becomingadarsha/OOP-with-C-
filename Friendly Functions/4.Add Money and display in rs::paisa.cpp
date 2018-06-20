/*  Define a class Amount with data member rupees and paisa
Member function: - to read data member,
Friend Function:
- to display amount in appropriate format ,
- to add two amounts
*/

#include<iostream>
using namespace std;
class Amount
{
private:
int rupees,paisa;

public:
void read();
friend void display(Amount);
friend Amount add(Amount a, Amount b, Amount c);
};
void Amount::read()
{
cout<<"Rupees="; cin>>rupees;
cout<<"Paisa="; cin>>paisa;
}

void display(Amount x)
{
cout<<"Rs."<<x.rupees<<" and "<<x.paisa<<" paisa"<<endl;
}
Amount add(Amount a, Amount b, Amount c)
{
c.rupees=a.rupees+b.rupees;
c.paisa=a.paisa+b.paisa;
if(c.paisa>100)
{
c.rupees=a.rupees+b.rupees+(c.paisa/100);
c.paisa=c.paisa%100;
}
return c;
}

int main()
{
Amount amt1,amt2,amt3;
amt1.read();
amt2.read();
cout<<"Inputed amount:"<<endl;
display(amt1);
display(amt2);
amt3=add(amt1,amt2,amt3);
cout<<"Amount after adding is:"<<endl;
display(amt3);
}
