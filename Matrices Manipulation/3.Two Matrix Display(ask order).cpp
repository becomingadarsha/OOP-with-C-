#include<iostream>
using namespace std;
class Matrix
{
private:
int a[10][10];

public:
void read_matrix(int , int );
void display_matrix(int , int );
};

void Matrix::read_matrix(int m,int n)
{
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
}

void Matrix::display_matrix(int m,int n)
{
 for(int i=0; i<m; i++)
    {
		for(int j=0; j<n; j++)
        {
           cout<<a[i][j]<<"\t";

	}
	cout<<endl;
}
}

int main()
{
Matrix mat1,mat2;
int m1,m2,n1,n2;
cout<<"Enter rows and columns of first matrix : "; cin>>m1>>n1;
cout<<"Enter rows and columns of second matrix: "; cin>>m2>>n2;
//entering matrix
cout<<"Elements of first matrix"<<endl;
mat1.read_matrix(m1,n1);
cout<<"Elements of second matrix"<<endl;
mat2.read_matrix(m2,n2);
//Displaying matrix
cout<<"First Matrix:\n";
mat1.display_matrix(m1, n1);
cout<<"Second Matrix:\n";
mat2.display_matrix(m2,n2);

}
