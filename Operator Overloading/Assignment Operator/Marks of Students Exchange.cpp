/*
Use operator overloading =() asssignment operator toassign the vlaue of object 1 to object 2
consider
Marks
{
//methods
}
*/

#include<iostream>
using namespace std;

class Marks
{
   private:
      int m1;
      int m2;

   public:
   //Default constructor
   Marks()
    {
        m1 = 0;
        m2 = 0;
   }

   // Parametrised constructor
    Marks(int i, int j)
    {
        m1 = i;
        m2 = j;
    }

   // Overloading of Assignment Operator
    void operator=(const Marks &M ) //one argument is needed which takes the vaue of obj1 which is of type Marks
    {
        m1 = M.m1; //obj2 value is m1 = obj1 value of m1
        m2 = M.m2;
    }

   void Display()
   {
      cout << "Marks in 1st Subject:" << m1<<endl;
      cout << "Marks in 2nd Subject:" << m2<<endl;
    }
};

int main()
{
  // Make two objects of class Marks
   Marks Mark1(45, 89);
   Marks Mark2(36, 59);

   cout << "\nMarks of first student : "<<endl;
   Mark1.Display();
   cout << "\nMarks of Second student :"<<endl;
   Mark2.Display();

   // use assignment operator
   Mark1 = Mark2; //Mark 2 para meter is passed as like =(Mark2)so that operator function is called

   cout << "\nMark in 1st Subject :"<<endl;
   Mark1.Display();

   return 0;
}
