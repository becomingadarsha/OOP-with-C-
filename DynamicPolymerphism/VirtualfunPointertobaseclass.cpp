//Perfect example of how pointer to base class and virtual function works

#include<iostream>
using namespace std;

class A
{
public:
virtual void show()
{
cout<<"In class A"<<endl;
}
};

class B: public A
{
public:
void show()
{
cout<<"In class B"<<endl;
}
};

class C: public A
{
public:
void show()
{
cout<<"In class C"<<endl;
}

};

int main()
{
A a;
B b;
C c;
A *obj;

obj= &b;
obj -> show();

obj = &a;
obj -> show();

obj = &c;
obj -> show();

}
