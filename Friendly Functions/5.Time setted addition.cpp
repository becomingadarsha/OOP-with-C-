/*
Create a class named time with data members hours, minutes and second.
Use member function settime() to set time, gettime() to read time from user ,
Friend Function:
 add_time() to add two time and showtime() to display time in HH::MM::SS format.
*/
#include<iostream>
using namespace std;
class   Time
{
private:
int hour,minute,second;
public:
void set_time(int,int,int);
void get_time();
friend Time add_time(Time a, Time b,Time c);
friend void show_time(Time);
};

void Time::set_time(int hrs,int mins,int secs)
			{
				hour=hrs;
				minute=mins;
				second=secs;
				}

void Time:: get_time()
{
cout<<" **Enter next time ** \n";
cout<<"Hour :"  ; cin>>hour;
cout<<"Minutes :"  ; cin>>minute;
cout<<"Seconds :"  ; cin>>second;
}

Time add_time(Time a, Time b,Time c)
{
        c.second = a.second + b.second;
        c.minute = (a.minute+b.minute) + (c.second/60);
        c.second = c.second%60;
        c.hour = (a.hour+b.hour) + (c.minute/60);
        c.minute = c.minute%60;
        return c;
}

void show_time(Time x)
{
cout<<x.hour<<"hrs "<<x.minute<<"mins "<<x.second<<"secs "<<endl;
}

int main()
{
Time t1,t2,t3;
t1.set_time(2,40,50);
t2.get_time();
cout<<"Before adding time: \n";
show_time(t1);
show_time(t2);
t3=add_time(t1,t2,t3);
cout<<"After adding time: \n";
show_time(t3);
return 0;
}
