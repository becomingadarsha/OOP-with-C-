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
Sum operator +(Sum c);

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

Sum Sum :: operator+(Sum x)
{
Sum temp;
temp.first=first + x.first;
temp.second=second + x.second;
return temp;
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
