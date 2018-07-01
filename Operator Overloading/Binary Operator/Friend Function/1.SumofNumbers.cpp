
//Use of friend function to add the two numbers of two ojects
#include<iostream>
using namespace std;
class Sum
{
private:
int first,second;
public:
Sum() //creating constructor
{
first=0;
second=0;
}
void get_data();
void display();
friend Sum operator +(Sum x, Sum y); //making friend function using 2 arguments as per rule

 ~Sum()
 {
//Destructor
 }
};

void Sum::get_data()
{
cout<<"Enter two values: ";
cin>>first>>second;
}

void Sum::display()
{
cout<<"First = "<<first<<endl<< "Second = "<<second<<endl;
}

Sum operator+(Sum x , Sum y) //Use two parameter for te frined function objects data
{
Sum temp; //return type is Sum so create temp of type Sum for easier 
temp.first=x.first + y.first; //adding x of objects 1 and 2 and givin it to temp.first
temp.second=x.second + y.second;
return temp; //return necessary always
}

int main()
{
Sum obj1,obj2,obj3;
obj1.get_data();
obj2.get_data();
cout<<"Adding first and second of both objects: "<<endl;
obj3=obj1 + obj2; //obj3=obj1.operator*(obj2)
obj3.display();
}
