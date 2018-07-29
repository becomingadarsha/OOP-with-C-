/*Write a program to convert Class to basic type

class Distance
{
//Methods for converting inch to feet
}


*/

#include<iostream>
using namespace std;
class Distance
{
private:
int feet,inch;

public:
Distance(int,int);
operator int();

~Distance()
{
cout<<"\nDestructer..."<<endl;
}

};

Distance::Distance(int a,int b)
{
feet=a;
inch=b;
}

Distance::operator int()
{
int x;
x=(inch/12)+feet;
return x;
}


int main()
{
int f,i,total;
cout<<"Enter feet: "; cin>>f;
cout<<"Enter inch: "; cin>>i;
Distance d(f,i);
total=d.operator int();
cout<<"The distance in feet is : "<<total;

}


