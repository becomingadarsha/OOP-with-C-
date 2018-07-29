#include<iostream>
using namespace std;

class Teacher
{
private:
int teachid;
char subject[30];

public:
void getTeacher()
{
cout<<"Enter teacher ID: "; cin>>teachid;
cout<<"Enter Subject: "; cin>>subject;
}

void displayTeacher()
{
cout<<"Teacher ID: "<<teachid<<endl;
cout<<"Subject: "<<subject<<endl;
}
};

class Staff
{
private:
int stid;
char level[20];

public:
void getStaff()
{
cout<<"Enter name of staff: "; cin>>stid;
cout<<"Enter his/her level: "; cin>>level;
}

void displayStaff()
{
cout<<"Staff Name: "<<stid<<endl;
cout<<"Level :"<<level<<endl;
}
};

class Faculty:public Teacher: public Staff
{
private:
char program[30];

public:
void getdata()
{
getTeacher();
getStaff();
cout<<"Enter program : ";
cin>>program;
}

void displayData()
{
displayTeacher();
displayStaff();
cout<<"Program : "<<program;
}

};

int main()
{
Faculty obj;
obj.getdata();
obj.displayData();
}
