#include<iostream>
using namespace std;
class rectangle
{
private:
int l, b,ar,peri;
public:
void input();
int perimeter();
int area();
};
void rectangle::input()
{
cout<<"Enter length of rectangle ";cin>>l;
cout<<"Enter breadth of rectangle "; cin>>b;

}
int rectangle::perimeter()
{
peri=2*(l+b);
return(peri);
}
int rectangle::area()
{
ar=l*b;
return(ar);

}

int main()
{
int x,y;
rectangle rect;
rect.input();
x=rect.perimeter();
y=rect.area();
cout<<"Perimeter is "<<x<<endl;
cout<<"Area is "<<y;
}
