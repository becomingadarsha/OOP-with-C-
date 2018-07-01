//Use function overloading to find the area of rectangle and circle using the function named "area".

#include<iostream>
using namespace std;

int area(int l, int b)
{
return(l*b);
}

float area(int r)
{
return(3.14*r*r);
}

int main()
{
int length,breadth;
cout<<"Enter length and breadth:";
cin>>length>>breadth;
cout<<"Area of rectangle is "<<area(length,breadth)<<endl;
int rad;
cout<<"Enter Radius: ";
cin>>rad;
cout<<"Area of circle is "<<area(rad);
}
