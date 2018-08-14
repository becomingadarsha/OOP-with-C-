#include<iostream>
using namespace std;
class Base
{
protected:
int adata;

public:
Base(int a)
{
adata=a;
}

};

class Derived:public Base
{
private:
int bdata;

public:
Derived(int a, int b):Base(a)
{
bdata=b;
}

void display()
{
cout<<"a = "<<adata<<endl<<"b = "<<bdata;
}

};

int main()
{
Derived obj(2,3);
obj.display();
}
