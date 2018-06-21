#include<iostream>
using namespace std;
class second;
class first
{
private:
int n1;

public:
void setdata()
{
cout<<"Enter first number: "; cin>>n1;
}
friend void calculate(first x,second y);
};

class second
{
private:
int n2;

public:
void setdata()
{
cout<<"Enter second number: "; cin>> n2;
}
friend void calculate(first x, second y );
};

void calculate(first x,second y)
{
if(x.n1>y.n2)
{
cout<<x.n1;
}
else
{
cout<<y.n2;
}
}

int main()
{
first a;
second b;
a.setdata();
b.setdata();
cout<<"Greatest value:"<<endl;
calculate(a,b);
return 0;
}
