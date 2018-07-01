//Use friend function for adding the distances

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
friend Distance operator +( Distance d1, Distance d2);//operator overloading using 2 parameters as per rule
}; 

void Distance:: get_data()
{
cout<<"Enter distance in ft = "; cin>>feet;
cout<<"Enter distance in inch = "; cin>>inch;
}

Distance operator +( Distance d1, Distance d2)
{
Distance temp; //return type is Distance so
temp.feet=d1.feet+d2.feet;
temp.inch=d1.inch+d2.inch;
if(temp.inch>=12.0)
{
temp.feet=d1.feet+d2.feet+(temp.inch/12.0); //look at normal working without operator overloading for beter understanding
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
d3=d1+d2; //d1 +(call operator +)for objects of d2
cout<<"After adding distance : "<<endl;
d3.display();
}
