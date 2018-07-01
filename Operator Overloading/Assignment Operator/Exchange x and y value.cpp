/*
class Sample
{
//methods
}
use operator overloading =() to use the assignment operator to assign value of obj1=obj2
*/


#include<iostream>
using namespace std;
class sample
{
private:
int x, y;

public:
void getdata ()
{
cout <<"\nEnter the value of x and y: ";
cin>> x>>y;
}

void operator = (const sample &obj) //syntax that one argument is needed which takes value of oj1
{
x= obj.x; //obj2 x= obj1 x value
y= obj.y; //obj2 y= obj1 y value
}

void display ()
{
cout<<"Value of x: "<<x;
cout<<"\nValue of y: "<<y;
}

};

int main()
{
sample obj1, obj2;

obj1.getdata ();
cout<<"\nData of obj1: \n";
obj1.display ();
cout<<"\n------------------------------------------\n";

cout<<"\nAfter assigning value of obj1 to obj2: \n ";
obj2=obj1; //obj1 have value of x and y which is passed to the =( sample obj)

obj2.display();

return 0;
}
