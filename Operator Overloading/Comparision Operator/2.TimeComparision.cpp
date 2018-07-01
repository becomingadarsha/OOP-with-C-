/*
Use comparision operator >() to compae the Time of the two objects
class Time
{
//methods 
operator overload < operator to compare
}
*/

#include<iostream>
using namespace std;

class Time
{
private:
int hour,minute;
public:
void getdata();
bool operator >(Time t); //agument as per rule for second obj
};

void Time::getdata()
{
cout<<"Enter hour and minute: ";
cin>>hour>>minute;
}

bool Time::operator > (Time t) //parameter for second object
{
int first,second;
first=hour*60 + minute; //firt object can be written normally
ssecond=t.hour*60 + t.minute; //accessing objects elements for 2nd obj

if(first > second) 
{
return true;
}

else
{
return false;
}
}
int main()
{

Time t1,t2;
t1.getdata();
t2.getdata();

if(t1 > t2) //like this t1 >(object t2) which passes r=t2 objects value as parameter
{
cout<<"t1 is greater than t2";
}
else
{
cout<<"t1 is lesser than t2";
}
}
