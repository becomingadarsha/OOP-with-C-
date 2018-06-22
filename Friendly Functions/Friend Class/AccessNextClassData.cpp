//Let us see how friend class works

#include<iostream>
using namespace std;
class first
{
int n1;
public:
void set_data(int x)
{
n1=x;
}
friend class second;
};

class second
{
int n2;
public:
void set_data(first x)
{
n2=x.n1;
cout<<"Value of first class is "<<n2;
}
};

int main()
{
first a;
second b;
a.set_data(10);
b.set_data(a);
}


