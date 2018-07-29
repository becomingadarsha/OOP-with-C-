#include<iostream>
using namespace std;

class Hour
{
int hr;
public:
Hour()
{
hr = 0;
}

operator int()
{
int temp;
temp = hr * 60;
return (temp);
}

void getdata()
{
cout<<"Enter the hours: ";
cin>> hr;
}
};

int main()
{
Hour h1;
// h1 is user defined data
float m;
//m is basic data
h1.getdata();
m = h1;
//convert from basic to user defined data.
cout<<"Minutes = ”"<<m;
}
