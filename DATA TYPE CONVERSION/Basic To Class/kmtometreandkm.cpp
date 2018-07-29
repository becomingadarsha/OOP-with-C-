#include<iostream>
using namespace std;

class Distance
{
private:
int meter,km;

public:
Distance(int x)
{
km=x/1000;
meter=x%1000;
}

void Display()
{
cout<<km<<" km and "<<meter<<" meter";
}
};

int main()
{
int a;
cout<<"Enter time in kilometers : "; cin>>a;
cout<<"\n";
Distance obj(a);
obj.Display();
}
