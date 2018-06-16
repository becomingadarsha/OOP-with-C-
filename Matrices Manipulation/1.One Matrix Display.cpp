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
cout<<"Enter matrix"<<endl;
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
Matrix mat;
int m,n;
cout<<"Enter rows and columns of matrix"; cin>>m>>n;
mat.read_matrix(m,n);
cout<<"Inputed matrix is:\n";
mat.display_matrix(m, n);

}
