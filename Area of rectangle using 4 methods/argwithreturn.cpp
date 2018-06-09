#include<iostream>
using namespace std;
class rectangle
{
private:
int ar,peri;
public:
void input(int ,int);
int perimeter(int, int);
int area(int ,int);
};
/*void rectangle::input(int l, int b)
{
cout<<"Enter length of rectangle ";cin>>l;
cout<<"Enter breadth of rectangle "; cin>>b;

}*/
int rectangle::perimeter(int l,int b)
{
peri=2*(l+b);
return(peri);
}
int rectangle::area(int l, int b)
{
ar=l*b;
return(ar);

}

int main()
{
int x,y,l,b;
rectangle rect;
cout<<"Enter length of rectangle: "; cin>>l;
cout<<"Enter breadth of rectangle: "; cin>>b;
//rect.input(int l,int b);
x=rect.perimeter(l, b);
y=rect.area(l,  b);
cout<<"Perimeter is "<<x<<endl;
cout<<"Area is "<<y;
}
