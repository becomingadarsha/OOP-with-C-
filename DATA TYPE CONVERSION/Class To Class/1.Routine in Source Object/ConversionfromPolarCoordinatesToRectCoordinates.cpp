//WAP to convert polar coordinates to rectcangular coordinates with conversion routine in sorce class

#include <math.h>
#include <iostream>
using namespace std;
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

Rec(float x, float y)
{
xco=x;
yco=y;
}

void display()
{
cout<<"("<<xco<<","<<yco<<")";
}
};

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
cout<<"Enter polar coordinates of radius and angle : ";
cin>>radius>>angle;
}

void display()
{
cout<<"("<<radius<<","<<angle<<")";
}

operator Rec();
};

Polar ::operator Rec()
{
float x= radius*cos(angle);
float y= radius*sin(angle);
return Rec(x,y);
}

int main()
{
Rec rec;
Polar pol;
pol.get_data();
rec=pol;
cout<<"\npol:";pol.display();
cout<<"\nrec:";rec.display();
}
