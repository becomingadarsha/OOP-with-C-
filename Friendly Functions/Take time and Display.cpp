#include<iostream>
using namespace std;
class Distance
{
private:
int feet;
float inch;

public:
void read();
friend void display(Distance);
friend Distance add(Distance , Distance ,Distance );
};

void Distance::read()
{
cout<<"Enter distance in feet: "; cin>>feet;
cout<<"Enter distance in inch: "; cin>>inch;
}

void display(Distance d)
{
cout<<d.feet<<"ft. "<<d.inch<<"inches \n";
}

Distance add(Distance a, Distance b,Distance c)
{
c.feet=a.feet+b.feet;
c.inch=a.inch+b.inch;
if(c.inch>=12.0)
{
c.feet=a.feet+b.feet+(c.inch/12.0);
c.inch=(int)c.inch%12;
}
return c;
}


int main()
{
class Distance d1,d2,d3;
cout<<"First distance : \n";
d1.read();
cout<<"Second distance : \n";
d2.read();
cout<<"Inputed distances are:\n";
display(d1);
display(d2);
d3=add(d1,d2,d3);
cout<<"Distance after adding is:\n";
display(d3);

return 0;
}
