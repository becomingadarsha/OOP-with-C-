#include<iostream>
using namespace std;

class A
{
int a;

public:
int b;
void get_ab();
int get_a();
void show_a();
};

class B: private A
{
int c;

public:
void mul();
void display();
};


void A::get_ab()
{
cout<<"Enter values of a and b: ";
cin>>a>>b;
}

int A::get_a()
{
return a;
}

void A::show_a()
{
cout<<"a = "<<a<<endl;
}

void B::mul()
{
get_ab();
c= b*get_a();
}

void B::display()
{
show_a();
cout<<"b = "<<b<<endl<<"c = "<<c<<endl;
}

int main()
{
B obj;
obj.mul();
obj.display();

obj.mul();
obj.display();
}
