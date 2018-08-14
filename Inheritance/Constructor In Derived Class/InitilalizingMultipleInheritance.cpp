#include<iostream>
using namespace std;

class A
{
int a;

public:
A(int adata)
{
a=adata;
cout<<"Value of a initialised"<<endl;
}

void display_a()
{
cout<<" a = "<<a<<endl;
}
};

class B
{
int b;

public:
B(int bdata)
{
b=bdata;
cout<<"Value of b initialised"<<endl;
}

void display_b()
{
cout<<" b = "<<b<<endl;
}

};

class C: public A,public B
{
int c;

public:
C(int adata,int bdata, int cdata):A(adata),B(bdata)
{
c=cdata;
cout<<"Data of c initialised"<<endl;
}


void display_c()
{
cout<<" c = "<<c;
}
};

int main()
{
C obj(1,2,3);
 cout << "\n";
 obj.display_a();
 obj.display_b();
 obj.display_c();
}
