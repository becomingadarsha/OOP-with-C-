//Use default argument concept to calculate SI (R=15%)

#include<iostream>
using namespace std;
inline float si(int p, int t, float r=15)
{
	float x;
	x=(p*t*r/100);
	return x;
}
int main()
{
	int p,t;
	float r;
	cout<<"Enter principle, time ";
	cin>>p>>t;
	cout<<"INTEREST IS " <<si(p,t);
}
