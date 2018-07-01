//Write a menu driven program to find the area of triangle,circle and rectangle using concept of function overloading.

#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;

void showchoices()
{
	cout << "MENU" << endl;
	cout << "1: Area of rectangle " << endl;
	cout << "2: Area of triangle" << endl;
	cout << "3: Area of circle " << endl;
	cout << "4: Exit " << endl;
}

void area(int l,int brea)
{
int area1=l*brea;
cout<<"Area of rectangle is:"<<area1<<endl;
}

void area(float b, float h)
{
float area2=(b*h)/2;
cout<<"Area of triangle is: "<<area2<<endl;
}

void area(float r)
{
float area3=PI*pow(r,2);
cout<<"Area of circle is: "<<area3<<endl;
}

int main()
{
int choice;
float h,b,r;
int l,brea;
showchoices();
cout<<"Enter your choice:"; cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter length and breadth of rectangle: ";
cin>>l>>brea;
area(l,brea);
break;

case 2:
cout<<"Enter base and height of triangle: ";
cin>>b>>h;
area(b,h);
break;

case 3:
cout<<"Enter radius of circle: ";
cin>>r;
area(r);
break;

case 4:
break;

default:
cout<<"Invalid input"<<endl;

}
}
