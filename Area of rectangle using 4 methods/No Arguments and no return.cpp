//No arguments and noreturn value
#include<iostream>
using namespace std;
class rectangle
{
private:
int l, b,ar,peri;
public:
void input(); //void as no return value
void perimeter();
void area();
};
void rectangle::input() //takes input
{
cout<<"Enter length of rectangle ";cin>>l;
cout<<"Enter breadth of rectangle "; cin>>b;

}
void rectangle::perimeter() //calculate
{
peri=2*(l+b);
cout<<"Perimeter is "<<peri<<endl;
}
void rectangle::area()
{
ar=l*b;
cout<<"Area is "<<ar;
}

int main()
{
rectangle rect;
rect.input(); //calling functions one by one
rect.perimeter();
rect.area();
}
