#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"Enter String:   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
               friend String operator+(String x, String y)  //Concatenating String
                {
                        String temp;
                        strcat(x.str,y.str);
                        strcpy(temp.str,x.str);
                        return temp;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display_string();   //Displaying First String

        cout<<"\n\n Second String is          :  ";
        str2.display_string();  //Displaying Second String

        cout<<"\n ----------------------------------------------";
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is    :  ";
        str3.display_string();

        return 0;
}
