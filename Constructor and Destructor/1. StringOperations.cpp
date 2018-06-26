/*
Define a class string with the following specifications
Data members:
- Char n[20]
- Char m[20]
Member functions:
String - constructor to initialize both the strings
Void rev() - to reverse both the string
Void copy() - to copy m to n
Void concat() - to concatenate both the string
Void count() - to count the number of characters in both strings
*/

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class String
{
private:
char str[20],str1[20];

public:
String() //initializing constructor
{
	str[20]=0;
	str1[20]=0;
}
void getdata();
void Rev();
void Copy();
void Concat();
void Count();
~String()
{
cout<<"\n\nFreed up memory using destructor....";
}

};

void String::getdata()
{
cout<<"Enter first string: "; cin>> str;
cout<<"Enter second string: "; cin>>str1;
}


void String::Count()
{
cout<<"Length of first string is: "<<strlen(str)<<endl;
cout<<"Length of first string is: "<<strlen(str1)<<endl;
}

void String::Concat()
{
cout<<"Concated string: "<<strcat(str,str1)<<endl;
}

void String::Copy()
{
strcpy(str,str1);
cout<<"After copying first string: "<<str1;
}

void String::Rev()
{
cout<<"First reverse: "<<strrev(str)<<endl;
cout<<"Second reverse: "<<strrev(str1)<<endl;
}

int main()
{
String s1;
s1.getdata();
s1.Count();
s1.Rev();
s1.Concat();
s1.Copy();
}

