/* Program to convert basic type to class type using constructor
class Time
{
//convert time in hrs to mins and secs
}
*/

#include<iostream>
using namespace std;

class Time
{
private:
int hrs;
int mins;

public:
void operator =(int);
void Display();
};

void Time :: operator=(int x)
{
hrs=x/60;
mins=x%60;
}

void Time:: Display()
{
cout<<hrs<<" hrs "<<mins<<" mins";
}

int main()
{
int duration;
cout<<"Enter time duration in minutes: ";
cin>>duration;
Time obj;
obj=duration;
obj.Display();



}
