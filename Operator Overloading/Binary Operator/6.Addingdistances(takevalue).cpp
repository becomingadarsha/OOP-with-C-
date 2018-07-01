#include<iostream>
using namespace std;
class Distance
{
int feet;
float inch;

public:
Distance()
{
inch=0;
feet=0;
}
void get_data();
void display();
Distance operator +( Distance d);
};

void Distance:: get_data()
{
cout<<"Enter distance in ft = "; cin>>feet;
cout<<"Enter distance in inch = "; cin>>inch;
}

Distance Distance::operator +( Distance d)
{
Distance temp;
temp.feet=feet+d.feet;
temp.inch=inch+d.inch;
if(temp.inch>=12.0)
{
temp.feet=feet+d.feet+(temp.inch/12.0);
temp.inch=(int)temp.inch%12;
}
return temp;
}

void Distance::display()
{
{
cout<<feet<<"\’"<<inch<<"\"";
}
}

int main()
{
Distance d1,d2,d3;
cout<<"First distance : "<<endl;
d1.get_data();
cout<<"Second distance : "<<endl;
d2.get_data();
d3=d1+d2;
cout<<"After adding distance : "<<endl;
d3.display();
}
