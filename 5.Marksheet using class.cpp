/* Declare a class student with data member roll no, name  marks, total,percentage
Member function: input() to input data, : display() to display data, calculate() to calculate avg and percent
*/

#include<iostream>
using namespace std;
class student{
private:
int roll,marks[100],total;
char name[30];
float percent,avg;

public:
void input();
void calculate();
void display();
};

 void student::input()
 {
 cout<<"Enter name of student: "; cin>>name;
 cout<<"Enter roll no.: "; cin>>roll;

 cout<<"Enter marks of 5 subjects:"<<endl;
 for(int i=0;i<5;i++)
 {
 cin>>marks[i];
 }

 }

void student::calculate()
 {
 total=0;
 for(int i=0;i<5;i++)
 {
 total=total+marks[i];
 }

 percent=(total/5);

 }

 void student::display()
 {
 cout<<"Name: "<<name<<endl<<"Roll no.: "<<roll<<endl;
cout<<"Marks of student is :"<<endl;
 for(int i=0;i<5;i++)
 {
 cout<<marks[i]<<endl;
 }

cout<<"Percentage :"<<percent<<"%"<<endl;
 }

int main()
{
int i,n;
cout<<"How many students? "; cin>>n;
student stu[n];

for(i=0;i<n;i++)
{
stu[i].input();
stu[i].calculate();
stu[i].display();
}
return 0;
}
