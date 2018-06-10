/*  WAP to input the salaryof person an calculate the hra and da according to the following conditions
Salary          HRA         DA
5000-10000      10%         5%
10000-15000     15%         8%
*/
#include<iostream>
using namespace std;

int main()
{
float salary,hra,da;
cout<<"Enter salary of a person: ";
cin>>salary;

if(salary>=5000 && salary<10000)
{
hra=(10.0/100)*salary;
da= (5.0/100)*salary;
cout<<"House Rent Allowance is "<<hra<<endl
<<"Dearness Allowance is "<<da<<endl;
}

else if(salary>=10000 && salary<15000)
{
hra=(15.0/100)*salary;
da= (8.0/100)*salary;
cout<<"House Rent Allowance is "<<hra<<endl
<<"Dearness Allowance is "<<da<<endl;
}

else
{
cout<<"No allowance"<<endl;
}


}
