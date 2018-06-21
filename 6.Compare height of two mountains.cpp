/*  2ota mountain compare garne
jasko height badhi xa tesko complete detail dine*/
#include<iostream>
#include <cstring>
using namespace std;
class Mountain
{
private:
char name[40],loc[30];
int height;

public:
void take_data();
void compare_data(Mountain,Mountain);
void display();
};

void Mountain::take_data()
{
cout<<"Enter name of mountain: "; cin>>name;
cout<<"Where is it located? : "; cin>>loc;
cout<<"Enter height: "; cin>>height;
}

void Mountain::compare_data(Mountain a,Mountain b)
{
if(a.height>b.height)
{
 height=a.height;
  strcpy(loc,a.loc);
 strcpy(name,a.name);
}
else
{
height=b.height;
strcpy(loc,b.loc);
 strcpy(name,b.name);
}
}

void Mountain::display()
{
cout<<"Name of mountain:"<<name<<endl;
cout<<"Location of mountain:"<<loc<<endl;
cout<<"Height of mountain:"<<height<<endl;
}

int main()
{
Mountain m1,m2,m3;
cout<<"Enter information of two mountains:"<<endl;
m1.take_data();
m2.take_data();
/*cout<<"Inputed data:"<<endl;
m1.display();
m2.display();*/
m3.compare_data(m1,m2);
cout<<"Highest Mountain:"<<endl;
m3.display();


}
