#include<iostream>
using namespace std;
class distance
{
private:
static int count;
int feet;
int inches;

public:
void setdata(int f , int i);
void display();
};
int distance::count; //no initiliazation is needed i.e defination of static data member


void distance::setdata(int f, int i)
{
feet=f;
inches=i;
count++;
}
void distance::display()
{
cout<<"Count :"<<count<<endl;
}

int main()
{
class distance d1,d2,d3;
d3.display();
d1.display();
d2.display();

d1.setdata(10,5);
d2.setdata(2,4);
d3.setdata(9,10);

d3.display();
d1.display();
d2.display();

}
