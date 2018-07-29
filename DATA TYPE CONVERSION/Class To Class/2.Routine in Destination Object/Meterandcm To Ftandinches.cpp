#include<iostream>
using namespace std;
class Distance
{
    private:
	int meter;
	float cm;

	public:
		Distance(int m,int c)
		{
			meter=m;
			cm=c;
		}
		int getmeter()
		{
			return meter;
		}
		int getcentimeter()
		{
			return cm;
		}
};

class dist
{
	int feet,inch;

	public:
		dist()
		{
			feet=0;
			inch=0;
		}
		dist(int f,int i)
		{
			feet=f;
			inch=i;
		}
		dist(Distance d)
		{
			int m,c;
			m=d.getmeter();
			c=d.getcentimeter();
			feet=m*3.3;
			inch=c*0.4;
			feet=feet+inch/12;
			inch=inch%12;
		}
		void display()
		{
		cout<<feet<<" ft "<<inch<<" inches";
	}
};
int main()
{
	Distance d1(6,40);
	dist d2=d1;
	d2.display();
}
