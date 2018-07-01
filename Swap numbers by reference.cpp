////WAP to swap two numbers using function (pass by reference)


#include<iostream>
using namespace std;
#include<iomanip>
int swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x,y;
	cout<<"Value of a and b ?";
	cin>>x>>y;
	cout<<"Before swapping the values of a and b are "<<x<< " and "<<y<<endl;
    swap(x,y);
	cout<<"After swapping value are "<<x<<" and "<<y;
}
