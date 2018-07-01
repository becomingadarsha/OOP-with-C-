#include<iostream>
using namespace std;
class Multiply
{
private:
int first,second;
public:
Multiply() //creating constructor
{
first=0;
second=0;
}
void get_data();
void display();
Multiply operator *(Multiply c);
 ~Multiply()
 {
//Destructor
 }
};

void Multiply::get_data()
{
cout<<"Enter two values: ";
cin>>first>>second;
}

void Multiply::display()
{
cout<<"First = "<<first<<endl<< "Second = "<<second<<endl;
}

Multiply Multiply :: operator*(Multiply x)
{
Multiply temp;
temp.first=first * x.first;
temp.second=second * x.second;
return temp;
}

int main()
{
Multiply obj1,obj2,obj3;
obj1.get_data();
obj2.get_data();
cout<<"Product of first and second of both objects: "<<endl;
obj3 = obj1 * obj2; //obj3=obj1.operator*(obj2)
obj3.display();
}
