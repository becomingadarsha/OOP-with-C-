/*Operator overloading in Unary Operator for subraction addition ++()
use friend functionas friend void operator ++()
*/

#include<iostream>
using namespace std;
class Test
{
private:
int x,y,z;

public:
void get_data();
void display();
friend void operator ++(Test &temp); //overload unary plus also in unary operator there is 0 argument
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

void operator++(Test &temp) //always use pass by reference in friend function
{
temp.x++;
temp.y++;
temp.z++;
}

int main()
{
Test t;
t.get_data();
cout<<"Before increment : "<<endl;
t.display();
cout<<"After increment by one : "<<endl;
++t; //activate operator++() function
t.display();
cout<<"Again increment by one: "<<endl;
++t; //again increase first increased value by one
t.display();
}


