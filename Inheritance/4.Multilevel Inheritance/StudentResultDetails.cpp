#include<iostream>
using namespace std;

class Student
{
private:
int roll;
char name[20];

public:
void getStudent()
{
cout<<"Enter name and roll no of the student: ";
cin>>name>>roll;
}

void displayStudent()
{
cout<<"Roll no: "<<roll<<endl;
cout<<"Name: "<<name<<endl;
}
};

class Marks: public Student
{
private:
int sub1,sub2,sub3;

public:
void getmark()
{
cout<<"Enter marks of three students";
cin>>sub1>>sub2>>sub3;
}

void displaymark()
{
cout<<"Subject 1: "<<sub1<<endl;
cout<<"Subject 2: "<<sub2<<endl;
cout<<"Subject 3: "<<sub3<<endl;
}

int findTotalMark()
{
return (sub1+sub2+sub3);
}
};

class Result: public Marks
{
private:
float total,percentage;

public:
void getdata()
{
getStudent();
getmark();
}

void displaydate()
{
displayStudent();
displaymark();
total= findTotalMark();
percentage= total/3;
cout<<"Total Marks: "<<total<<endl;
cout<<"Percentage: "<<percentage<<"%"<<endl;
}

};

int main()
{
Result r;
r.getdata();
cout<<"\n\n---RESULT DETAILS ---\n\n"<<endl;
r.displaydate();
}
