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
Time (int);
void Display();
};

Time::Time(int x)
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
Time tm(duration);
tm.Display();



}
