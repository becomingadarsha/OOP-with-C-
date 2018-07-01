#include<iostream>
using namespace std;
class Amount
{
private:
int rupees,paisa;

public:
void read();
void display();
friend Amount operator+(Amount x, Amount y);
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

Amount operator+(Amount x, Amount y)
{
Amount temp;
temp.rupees=x.rupees+y.rupees;
temp.paisa=x.paisa+y.paisa;
if(temp.paisa>100)
{
temp.rupees=x.rupees+y.rupees+(temp.paisa/100);
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
