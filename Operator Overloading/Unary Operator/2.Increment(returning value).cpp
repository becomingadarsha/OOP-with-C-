/*Operator overloading in Unary Operator for addition++() with returning value
*/
#include<iostream>
using namespace std;
class Test
{
private:
int x,y,z;

public:
void get_data();
void display();
Test operator ++(); //overload unary ++ also in unary operator there is 0 argument ; Test data type as we have to return value
};

void Test:: get_data()
{
cout<<"Enter value of x, y and z: ";
cin>>x>>y>>z;
}

void Test::display()
{
cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl;
}

Test Test::operator++() //returning test type value so creating fucntion type Test
{
x++;
y++;
z++;
Test temp; //creating temp variable with data type Test
temp.x=x;
temp.y=y; //assigning value of x,y and z in temp so that it will be easier to return
temp.z=z;
return temp; //return all temp value

}

int main()
{
Test t;
t.get_data();
cout<<"Before increment : "<<endl;
t.display();
cout<<"After increment by one : "<<endl;
++t; //activate operator++() function
t.display();
cout<<"Again increment by one: "<<endl;
++t; //again increase first increased value by one
t.display();
}
