#include<iostream>
using namespace std;
class first
{
private:
int len,brea;

public:
void set_data()
{
cout<<"Enter length and breadth of rectangle: "; cin>>len>>brea;
}
friend class second;
};

class second
{
private:
int ar;
public:
void area(first x)
{
ar= x.len * x.brea;
cout<<"The area of rectangle is "<<ar;
}
};

int main()
{
first a;
second b;
a.set_data();
b.area(a);
}
