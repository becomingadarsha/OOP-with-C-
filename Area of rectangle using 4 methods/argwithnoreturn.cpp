/*#include<iostream>
using namespace std;
class rectangle
{
private:
int ar,peri,l,b;
public:
/*void input(int, int);
void perimeter(int ,int);
void area(int ,int);

void input(int l,int b)
{
cout<<"Enter length of rectangle ";cin>>l;
cout<<"Enter breadth of rectangle "; cin>>b;

}
void perimeter(int l,int b)
{
peri=2*(l+b);
cout<<"Perimeter is "<<peri<<endl;
}
void area(int l,int b)
{
ar=l*b;
cout<<"Area is "<<ar;
}
};

int main()
{
int l,b;
rectangle rect;
rect.input(l, b);
rect.perimeter(l , b);
rect.area(l , b);


}
*/
#include<iostream>
using namespace std;
class rectangle
{
private:
    int ar,peri,l,b;
public:
    //void input(int l,int b);
    void perimeter(int l,int b);
    void area(int l,int b);
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
