/*Operator overloading by using unary operator --() where I'm going to subract the three numbers by 1
Friend function operator --() which is going to decrease value
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
friend void operator --(Test &temp); //Friend function in unary operator takes one argument ...always pass by reference
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

void operator--(Test &temp) //working in friend function
{
temp.x--;
temp.y--;
temp.z--; //never use return in friend function
}

int main()
{
Test t;
t.get_data();
cout<<"Before reducing : "<<endl;
t.display();
cout<<"After reducing by one : "<<endl;
--t; //activating operator --()
t.display();
}

