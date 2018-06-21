#include<iostream>
using namespace std;
class second;
class first
{
private:
int l;
public:
void set_data()
{
cout<<"Enter length: "; cin>>l;
}
friend int area(first x,second y);
};

class second
{
private:
int b;
public:
void set_data()
{
cout<<"Enter breadth: "; cin>>b;
}
friend int area(first x,second y);
};

int area(first x, second y)
{
return((x.l)*(y.b));
}

int main()
{
first a;
second b;
a.set_data();
b.set_data();
cout<<"Area is:"<<area(a,b);

}
