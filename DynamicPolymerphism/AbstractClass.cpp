#include<iostream>
using namespace std;
class Base
{
public:
void virtual message()=0;


};

class Derived1:public Base
{
public:
void message()
{
cout<<"In the Derived 1 class"<<endl;
}
};

class Derived2:public Base
{
public:
void message()
{
cout<<"In Derived 2 class";
}

};

int main()
{
Base *bptr;
Derived1 obj1;
Derived2 obj2;

bptr = &obj1;
bptr -> message();

bptr= &obj2;
bptr -> message();
}
