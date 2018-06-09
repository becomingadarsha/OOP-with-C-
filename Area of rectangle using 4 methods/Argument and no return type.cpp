//Find area of rectangle using arguments but no return type
#include<iostream>
using namespace std;
class rectangle
{
private:
    int ar,peri,l,b;
public:
  
    void perimeter(int l,int b); //arguments initilializtaion
    void area(int l,int b); //void as there is no return type
};

void rectangle::perimeter(int l,int b)
{
peri=2*(l+b);
cout<<"Perimeter is "<<peri<<endl;
}

void rectangle::area(int l,int b)
{
ar=l*b;
cout<<"Area is "<<ar;
}

int main()
{
    int a,c;
    rectangle rect;
    cout<<"Enter length: ";cin>>a;
    cout<<"Enter breadth: ",cin>>c;
    rect.perimeter(a,c);
    rect.area(a,c);
}
