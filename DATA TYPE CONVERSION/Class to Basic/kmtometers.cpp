/*Write a program to convert Class to basic type

class Distance
{
//Methods for converting km to meter
}


*/

#include<iostream>
using namespace std;
class Distance
{
private:
int meter,kilometer;

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
meter=a;
kilometer=b;
}

Distance::operator int()
{
return((kilometer*1000)+meter);
}


int main()
{
int m,km,total;
cout<<"Enter kilometer: "; cin>>km;
cout<<"Enter meter: "; cin>>m;
Distance d(m,km);
total=d.operator int();
cout<<"The distance in meter is : "<<total;








}


