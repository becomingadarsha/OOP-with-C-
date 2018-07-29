//converts from polar to rec using routines in rect
#include <math.h>
#include <iostream>
using namespace std;
class Polar
{
private:
float radius;
float angle;

public:
Polar()
{
radius=0.0;
angle=0.0;
}

void get_data()
{
cout<<"Enter polar co-ordinates: "<<endl<<"Radius = "; cin>>radius;
cout<<"Angle = "; cin>>angle;
}

void display(void)
{
cout<<"("<<radius<<","<<angle<<")";
}

float getr()
{
return radius;
}

float geta()
{
return angle;
}
};

class Rec
{
private:
float xco;
float yco;

public:
Rec()
{
xco=0.0;
yco=0.0;
}


void display()
{
cout<<"("<<xco<<","<<yco<<")";
}

Rec(Polar p)
{
float r=p.getr();
float a=p.geta();
xco=r*cos(a);
yco=r*sin(a);
}
};

int main()
{
Rec rec;
Polar pol;
pol.get_data();
rec=pol;
cout<<"\npol:";pol.display();
cout<<"\nrec:";rec.display();
}
