/* #include<iostream> //area of circle
using namespace std;
#include<math.h>
#define PI 3.12
int main()
{
int r;
cout<< "Enter radius of circle";
cin>> r;
cout<< "Area of circle is"<< PI*pow(r,2);
} */

#include<iostream> // vol of sphere
using namespace std;
#include<math.h>
#define PI 3.14
int main()
{
int r;
float vol;
cout<< "Enter area of sphere:";
cin>>r;
vol=(4*PI*(pow(r,3)))/3;
cout<< "The volume of sphere is:"<<vol;
return 0;
}

