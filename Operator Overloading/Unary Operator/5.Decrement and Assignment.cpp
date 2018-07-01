/*Operator overloading by using unary operator -- where I'm going to subract the three numbers by 1
with returning value and also passing the value of one opertor to other */


#include<iostream>
using namespace std;
class Test
{
private:
int x,y,z;

public:
void get_data();
void display();
Test operator --(); //unary operator takes no argument
};

void Test:: get_data()
{
cout<<"Enter value of x, y and z: ";
cin>>x>>y>>z;
}

void Test::display()
{
cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
}

Test Test::operator--()
{
x--;
y--;
z--;
Test temp;
temp.x=x;
temp.y=y;
temp.z=z;
return temp;
}

int main()
{
Test t1,t2;
t1.get_data();
cout<<"Before reducing : "<<endl;
t1.display();
cout<<"After reducing by one : "<<endl;
--t1; //activating operator --()
t1.display();

t2=--t1; // the work of t1 is again done with the result of t1 here
cout<<"After assigning same value to new object : "<<endl;
t2.display();
}

