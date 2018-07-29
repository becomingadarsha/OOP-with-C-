/* Program to demonstrate Class type to Basic type conversion. */

#include "iostream"
using namespace std;
#include "iomanip"

class Time
{
  int hrs,min;
  public:
    Time(int ,int);   // constructor
    operator float();   // casting operator function
    ~Time()          // destructor
    {
      cout<<"\nDestructor called..."<<endl;
    }
};

Time::Time(int a,int b)
{
  cout<<"Constructor called with two parameters..."<<endl;
  hrs=a;
  min=b;
}

Time :: operator float()
{
  cout<<"Class Type to Basic Type Conversion..."<<endl;
  return(hrs*60+min);
}

int main()
{
clock();
  int h,m,duration;
  cout<<"Enter Hours ";
        cin>>h;
  cout<<"Enter Minutes ";
        cin>>m;
  Time t(h,m);       // construct object
  duration = t.operator float(); //    duration = (int) t;
  cout<<"Total Minutes are "<<duration;

}
