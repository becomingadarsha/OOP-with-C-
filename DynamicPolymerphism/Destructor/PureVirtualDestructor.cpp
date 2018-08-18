#include<bits/stdc++.h>
using namespace std;
class Base
{
 public:
 virtual ~Base() = 0;     //Pure Virtual Destructor
};

Base::~Base()
 {
    cout << "Base Destructor"<<endl;
  } //Definition of Pure Virtual Destructor

class Derived:public Base
{
 public:
 ~Derived()
 {
    cout<< "Derived Destructor"<<endl;
    }
};

int main()
{
 Base *bptr = new Derived;
 delete bptr;

}
