// Bridging classes with friend fuctions
#include<iostream>
using namespace std;
class second; //declaration like function prototype
class first
{
private:
int data1;
public:
void setdata(int x)
{
data1=x;
}
friend int sum(first a, second b);//friend function
};
class second
{
private:
int data2;
public:
void setdata(int x)
{
data2=x;
}
friend int sum(first a, second b);//friend function
};
int sum(first a, second b)
{
return (a.data1 + b.data2);
}

int main()
{
first a;
second b;
a.setdata(15);
b.setdata(10);
cout<<"sum of first and second is: "<<sum(a, b);//displays 25
}
