//Operator overloading by using unary operator --()  where I'm going to subract the three numbers by 1


#include<iostream>
using namespace std;
class Test
{
private:
int x,y,z;

public:
void get_data();
void display();
void operator --(); //unary operator takes no argument
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

void Test::operator--()
{
x--;
y--;
z--;
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

