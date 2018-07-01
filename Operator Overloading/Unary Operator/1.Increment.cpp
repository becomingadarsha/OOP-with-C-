/*Operator overloading using operator++() in Unary Operator for increment

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
void operator ++(); //overload unary plus also in unary operator there is 0 argument
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

void Test::operator++()
{
x++;
y++;
z++;
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


