#include<iostream>
using namespace std;
class Matrix
{
private:
int a[10][10];

public:
void read_matrix(int m, int n);
void display_matrix(int m, int n);
void multiply_matrix(int ,int, int,Matrix x, Matrix y);
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
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j] <<"\t";
}
cout<<endl;
}
}

void Matrix::multiply_matrix(int r1,int c1, int c2, Matrix x, Matrix y)
{
 for(int i=0; i<r1; i++)
    {
		for(int j=0; j<c2; j++)
       	{
       		a[i][j]=0;
			for(int k=0;k<c1;k++)
       		{
       			a[i][j]+=x.a[i][k]*y.a[k][j]; ;
			}
   		}
	}
}


int main()
{
int r1,c1,r2,c2;
cout<<"Enter order of first matrix: "; cin>>r1>>c1;
cout<<"Enter order of seond matrix: "; cin>>r2>>c2;

Matrix mat1,mat2,mat3;
if(c1==r2)
{
cout<<"Enter elements of first matrix: \n";
mat1.read_matrix(r1,c1);
cout<<"Enter elements of second matrix: \n";
mat2.read_matrix(r2,c2);
cout<<"First Matrix:\n";
mat1.display_matrix(r1, c1);
cout<<"Second Matrix:\n";
mat2.display_matrix(r2 , c2);
//Multplying matrix
mat3.multiply_matrix(r1,c1,c2,mat1,mat2);
cout<<"Output matrix: \n";
mat3.display_matrix(r1,c2);
}
else
{
cout<<"MATRIX CAN'T BE MULTIPLIED !";
}
//mat3.display_matrix(r1,c2);



}
