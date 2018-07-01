/*Use the binary operator ++() and --() to add and subract the two complex number by taking value from user
using operator overloading */

#include<iostream>
using namespace std;

class complex {
    int a, b;
public:

    void getvalue()
     {
        cout << "Enter the value of Complex Numbers a , b: ";
        cin >> a>>b;
    }

    complex operator+(complex ob)
    {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }

    complex operator-(complex ob)
     {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }

    void display()
     {
        cout << a << "+" << b << "i" << "\n";
    }
};

int main()
{
    clock();
    complex obj1, obj2, result, result1;

    obj1.getvalue();
    obj2.getvalue();

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

   cout << "\nSum is: ";
	result = obj1 + obj2;
	result.display();

cout<<"\nSubract is: ";
 result1 = obj1 - obj2;
    result1.display();

return 0;
}

