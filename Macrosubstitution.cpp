/* #include<iostream> //Simple
using namespace std;
#define PI 3.12
int main()
{
cout <<PI ;
cout <<"\n";
#undef PI;
#define PI 3.14;
cout<< PI;
} */

/* #include<iostream> //argumented
using namespace std;
#define SQUARE(x) (x*x)
int main()
{
  int n=3;
  cout << SQUARE(n);
}
*/


#include<iostream> //nested
using namespace std;
#define SQUARE(x) (x*x)
#define CUBE(x) ((SQUARE (x))* (SQUARE (x)))
int main()
{
 int n=4;
 cout << SQUARE(n);
cout <<"\n";
 cout<< CUBE(n);
}
