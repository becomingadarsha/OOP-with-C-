//Create a class named time with data members hours, minutes and second. Use member function gettime() to read time from user , add_time() to add two time and showtime() to display time in HH::MM::SS format.
#include<iostream>
using namespace std;
class   Time
{
private:
int hour,minute,second;
public:
void set_time(int,int,int);
void get_time();
void add_time(Time a, Time b);
void show_time();
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

void Time::add_time(Time a, Time b)
{
        second = a.second + b.second;
        minute = (a.minute+b.minute) + (second/60);
        second = second%60;
        hour = (a.hour+b.hour) + (minute/60);
        minute = minute%60;
}

void Time::show_time()
{
cout<<hour<<"hrs "<<minute<<"mins "<<second<<"secs "<<endl;
}

int main()
{
Time t1,t2,t3;
t1.set_time(2,40,50);
t2.get_time();
cout<<"Before adding time: \n";
t1.show_time();
t2.show_time();
t3.add_time(t1,t2);
cout<<"After adding time: \n";
t3.show_time();
}


