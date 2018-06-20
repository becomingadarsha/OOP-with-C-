/*
Create a class name Time with members hrs,secs and mins
Use function get_time() to get time
- Create two friendly functions:
add_time()to add two times
display() to display in the format hrs_mins_secs
*/
#include<iostream>
using namespace std;
class Time
{
private:
int hrs,mins,secs;
public:
void get_value();
friend Time add_time(Time,Time,Time);
friend void display(Time);
};

void Time::get_value()
{
cout<<"Hour: "; cin>> hrs;
cout<<"Minutes: "; cin>> mins;
cout<<"Seconds: "; cin>> secs;
}

Time add_time(Time a, Time b,Time c)
{
    c.secs=a.secs+b.secs;
    c.mins=a.mins+b.mins +(c.secs/60);
    c.secs=c.secs%60;
    c.hrs=(a.hrs+b.hrs) + (c.mins/60);
    c.mins = c.mins%60;
    return c;
}
void display(Time t)
{
cout<<t.hrs<<"hrs "<<t.mins<<"mins "<<t.secs<<"secs"<<endl;
}


int main()
{
Time t1,t2,t3;
cout<<"Enter first time:"<<endl;
t1.get_value();
cout<<"Enter next time:"<<endl;
t2.get_value();
cout<<"Two inputted times are:"<<endl;
display(t1);
display(t2);
cout<<"After addding :"<<endl;
t3=add_time(t1,t2,t3);
display(t3);
return 0;


}
