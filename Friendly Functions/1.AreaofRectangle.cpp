//May look simple but you have no idea how I was happy making first friend function

#include<iostream>
using namespace std;
class area
{
int l,b;
public:
void set_data();
//friend fucntion
friend float areaofrect(area ar);
};

void area::set_data()
{
cout<<"Enter lengh and breadth: ";
cin>>l>>b;

}
//friend function defination
float areaofrect(area ar)
{
  //accessing private data from non-member function
return ((ar.l)*(ar.b));
}

int main()
{
area a;
a.set_data();
cout<<"Area of rectangle is "<<
areaofrect(a);
}
