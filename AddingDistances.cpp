/*
Overload ‘+’ operator to add two distance. Distance is taken in feet and inches.
a. Operator function as member function
b. Operator function as friend function
*/

#include<iostream>
using namespace std;
class Distance
{
private:
int feet, inch;
public:
Distance();
Distance(int f, int in);
void get_data();
friend Distance operator +(Distance, Distance);
void display();
};

Distance::Distance()
{
feet=0;
inch=0;
}


void Distance::get_data()
{
cout<<"Feet: "; cin>>feet;
cout<<"Inches: "; cin>>inch;
}

Distance operator +(Distance a, Distance b)
{
Distance c;
c.feet=a.feet+b.feet;
c.inch=a.inch+b.inch;
c.feet=a.feet+(b.inch/12);
c.inch=a.inch%12;
return c;
}

void Distance::display()
{
cout<<feet<<" feet "<<inch<<" inch"<<endl;

}

int main()
{
cout<<"Enter first distance: "<<endl;
Distance d1;
d1.get_data();

cout<<"Enter next distances: "<<endl;
Distance d2;
d2.get_data();

Distance d3;
d3=d1+d2;
cout<<"First Distance: ";
d1.display();

cout<<"Second Distance: ";
d2.display();
cout<<"Adding Distances: ";
d3.display();

}
