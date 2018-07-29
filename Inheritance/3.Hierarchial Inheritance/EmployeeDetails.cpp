#include<iostream>
using namespace std;

class Employee
{
private:
int eid,salary;

public:
void getEmp()
{
cout<<"Enter ID and salary of employee: ";
cin>>eid>>salary;
}

void displayEmp()
{
cout<<"Employee ID: "<<eid<<endl;
cout<<"Salary : "<<salary<<endl;
}
};

class Engineer: public Employee
{
private:
char dept[20];

public:
void get_data()
{
getEmp();
cout<<"Enter department: "<<endl;
cin>>dept;
}

void display()
{
displayEmp();
cout<<"Department: "<<dept<<endl;
}
};

class Typist: public Employee
{
private:
int typespeed;

public:
void getdata()
{
getEmp();
cout<<"ENter typing speed: ";
cin>>typespeed;
}

void display()
{
displayEmp();
cout<<"TYping speed : "<<typespeed<<endl;
}

};

int main()
{
Engineer er;
Typist typ;
cout<<" Details of Er:"<<endl;
er.get_data();
cout<<" Details of Typist:"<<endl;
typ.getdata();
cout<<"\n\n------Employee Details-----\n\n"<<endl;
er.display();
typ.display();
}
