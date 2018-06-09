/*Define a class distance with data members a) feet in int and b) inches in float
Member functions: - to read data member, to display distance in format feet- inches ,
to add two distance object and returning distance object
*/
#include<iostream>
using namespace std;
class Distance
{
private:
int feet;
float inch;

public:
void read();
void display();
void add(Distance a, Distance b);
};

void Distance::read()
{
cout<<"Enter distance in feet: "; cin>>feet;
cout<<"Enter distance in inch: "; cin>>inch;
}

void Distance::display()
{
cout<<feet<<"ft. "<<inch<<"inches \n";
}
void Distance::add(Distance a, Distance b)
{
feet=a.feet+b.feet;
inch=a.inch+b.inch;
if(inch>=12.0)
{
feet=a.feet+b.feet+(inch/12.0);
inch=(int)inch%12;
}
}


int main()
{
class Distance d1,d2,d3;
cout<<"First distance : \n";
d1.read();
cout<<"Second distance : \n";
d2.read();
cout<<"Inputed distances are:\n";
d1.display();
d2.display();
d3.add(d1,d2);
cout<<"Distance after adding is:\n";
d3.display();

return 0;
}
