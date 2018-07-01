/*
Use binary operator overloading +()add to add the two numbers and display it
*/

#include<iostream>
using namespace std;
class Test
{
private:
int a;
public:

void get_data()
{
cout<<"Enter any integer: "; cin>>a;
}

void display()
{
cout<<"SUM = "<<a;
}

Test operator +(Test t) //binary operator
{
Test x;
x.a=a+t.a; //first operand should not be assigned to the object x but second should be(Test data type x)
return x;
}
};

int main()
{
Test t1,t2,t3;
t1.get_data();
t2.get_data();
t3 = t1 + t2; //calling the operator +
t3.display();
}
