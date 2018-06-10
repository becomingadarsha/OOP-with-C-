/* Declare a class student with data member roll no, name  marks, total,percentage
Member function: input() to input data, : display() to display data, calcavg() to calculate avg
Take data of 5 students
*/
#include<iostream>
using namespace std;
class student{
private:
int roll,marks[100],total;
char name[30];
float avg;

public:
void input();
void calculate();
void calavg(student,student,student,student,student);
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

 }
 
 void student::calavg(student a , student b , student c , student d , student e)
 {
avg=(a.total+b.total+c.total+d.total+e.total)/5;
 cout<<"Average is"<<avg<<endl;
 }

 void student::display()
 {
 cout<<"Name: "<<name<<endl<<"Roll no.: "<<roll<<endl;
cout<<"Marks of student is :"<<endl;
 for(int i=0;i<5;i++)
 {
 cout<<marks[i]<<endl;
 }
 }

int main()
{
int i;
student stu[5],st;

for(i=0;i<5;i++)
{
stu[i].input();
stu[i].calculate();
stu[i].display();
}

st.calavg(stu[0],stu[1],stu[2],stu[3],stu[4]);

return 0;
}
