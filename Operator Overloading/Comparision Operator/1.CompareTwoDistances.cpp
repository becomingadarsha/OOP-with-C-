/*
Use comparision operator <() to compae the distance of the two objects
class Distance
{
//methods 
operator overload < operator to compare
}
*/

#include <iostream>
using namespace std;

class Distance
 {
   private:
      int feet;             // 0 to infinite
      int inches;           // 0 to 12

   public:
      // required constructors
      Distance()
      {
         feet = 0;
         inches = 0;
      }

      void get_data()
       {
         cout<< " Feet : "; cin>>feet;
         cout<< " Inches : "; cin>>inches;
      }

      // overloaded < operator
      bool operator <( Distance d) //One argument as per rule which takes value of second object
      {
      int first, second;
        first=(feet*12) +inches; //first can be witten normallly
        second=(d.feet*12) + d.inches; //for second object whose argument is passed


         if(first<second)
          {
            return true; //return true 
         }

        else
        {
        return false;
        }


      }
};

int main() {
   Distance D1,D2;
    D1.get_data();
    D2.get_data();
   if( D1 < D2 ) //passes the value of <(D2 object) like this
    {  //if true comes
      cout << "D1 is less than D2 " << endl;
   }
   else //if false comes
   {
      cout << "D2 is less than D1 " << endl;
   }

   return 0;
}
