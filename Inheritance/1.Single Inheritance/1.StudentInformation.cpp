/*
Use single in heritance i.e only one base class and mai class
to get data of the student
*/
#include<iostream>
using namespace std;

class Student
{
private:
char name[30];
int age;

public:
Student()
{
//Constructor
}
void get_data()
{
cout<<"Enter name and age :";
cin>>name>>age;
}

void display()
{
cout<<"Name : "<<name<<endl;
cout<<"Age : "<<age<<endl;
}
};

class ForeignStudent:public Student
{
char country[30];

public:
ForeignStudent():Student()
{
//constructor
}

void get_country()
{
//get_data();
cout<<"Enter country name: ";
cin>>country;
}

void displayForeign()
{
display();
cout<<"Country: "<<country;
}
};

int main()
{
ForeignStudent obj1;
obj1.get_country();
obj1.displayForeign();


}
