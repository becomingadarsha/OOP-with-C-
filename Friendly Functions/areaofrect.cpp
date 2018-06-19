#include<iostream>
using namespace std;
class area
{
int l,b;
public:
void set_data();
friend float areaofrect(area ar);
};

void area::set_data()
{
cout<<"Enter lengh and breadth: ";
cin>>l>>b;

}

float areaofrect(area ar)
{
return ((ar.l)*(ar.b));
}

int main()
{
area a;
a.set_data();
cout<<"Area of rectangle is"<<
areaofrect(a);
}
