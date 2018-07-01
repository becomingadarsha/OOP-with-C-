#include<iostream>
using namespace std;
class Subract
{
private:
int first,second;
public:
Subract() //creating constructor
{
first=0;
second=0;
}
void get_data();
void display();
Subract operator -(Subract c);

 ~Subract()
 {
//Destructor
 }
};

void Subract::get_data()
{
cout<<"Enter two values: ";
cin>>first>>second;
}

void Subract::display()
{
cout<<"First = "<<first<<endl<< "Second = "<<second<<endl;
}

Subract Subract :: operator-(Subract x)
{
Subract temp;
temp.first=first - x.first;
temp.second=second - x.second;
return temp;
}

int main()
{
Subract obj1,obj2,obj3;
obj1.get_data();
obj2.get_data();
cout<<"Subracting first and second of both objects: "<<endl;
obj3=obj1 - obj2; //obj3=obj1.operator*(obj2)
obj3.display();
}
