//argument and return
#include<iostream>
using namespace std;
class rectangle
{
private:
int ar,peri;
public:
int perimeter(int, int); //int peri as return value
int area(int ,int); //int,int as arguments
};
int rectangle::perimeter(int l,int b) 
{
peri=2*(l+b);
return(peri);
}
int rectangle::area(int l, int b) //int as returning int
{
ar=l*b;
return(ar); 
}

int main()
{
int x,y,l,b;
rectangle rect;
cout<<"Enter length of rectangle: "; cin>>l;
cout<<"Enter breadth of rectangle: "; cin>>b; //taking value of l and b
x=rect.perimeter(l,b);
y=rect.area(l,b); //calling the functions with value of l and b
cout<<"Perimeter is "<<x<<endl;
cout<<"Area is "<<y;  //display output from x and y
}
