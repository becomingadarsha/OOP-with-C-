/*
Over load te binary operator +() to add the two times
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
Time operator +(Time x);
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

Time Time::operator +(Time x) //as per rule one argument is necessay in class members to access second oject members
{
        Time temp;
        temp.second = second + x.second; //first object +second object
        temp.minute = (minute+ x.minute) + (temp.second/60);
        temp.second = temp.second%60;
        temp.hour =   (hour+x.hour) + (temp.minute/60);
        temp.minute = temp.minute%60;
        return temp;
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
t3=t1+t2; //passes like +(object t2)
cout<<"After adding time: \n";
t3.show_time();
}
