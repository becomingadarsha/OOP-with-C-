/*  Define a class Amount with data member rupees and paisa 
Member function: - to read data member, - to display amount in appropriate format , - to add two amounts
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
void add(Amount a, Amount b);
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
void Amount:: add(Amount a, Amount b)
{
rupees=a.rupees+b.rupees;
paisa=a.paisa+b.paisa;
if(paisa>100)
{
rupees=a.rupees+b.rupees+(paisa/100);
paisa=paisa%100;
}
}

int main()
{
Amount amt1,amt2,amt3;
amt1.read();
amt2.read();
cout<<"Inputed amount:"<<endl;
amt1.display();
amt2.display();
amt3.add(amt1,amt2);
cout<<"Amount after adding is:"<<endl;
amt3.display();
}
