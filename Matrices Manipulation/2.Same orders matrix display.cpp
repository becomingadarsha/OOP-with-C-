#include<iostream>
using namespace std;
class Matrix
{
private:
int a[10][10];

public:
void read_matrix(int m, int n);
void display_matrix(int m, int n);
//void multiply matrix(Matrix a, Matrix b);
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
	cout<<"\n";
}
}

int main()
{
Matrix mat1,mat2;
int m,n;
cout<<"Enter rows and columns of matrix : "; cin>>m>>n;
cout<<"Elements of first matrix"<<endl;
mat1.read_matrix(m,n);
cout<<"Elements of second matrix"<<endl;
mat2.read_matrix(m,n);
cout<<"First Matrix:\n";
mat1.display_matrix(m, n);
cout<<"Second Matrix:\n";
mat2.display_matrix(m,n);

}
