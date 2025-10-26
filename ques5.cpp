#include <iostream>
using namespace std;

void insert_matrix(int mat[100][100], int rows, int cols)
{
	cout << "Enter the element- " << endl;

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cin >> mat[i][j];
		}
		cout << endl;
	}
}

void display_matrix(int mat[100][100], int rows, int cols)
{	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << mat[i][j];
		}
		cout << endl;
	}
}

void matrix_addition(int Amat[100][100], int Bmat[100][100], int Cmat[100][100], int Arows, int Acols, int Brows, int Bcols)
{
	cout << "Matrix addition- " << endl;
	
	for(int i = 0; i < Arows; i++)
	{
		for(int j = 0; j < Brows; j++)
		{
			Cmat[i][j] = Amat[i][j] + Bmat[i][j];
		}
	}
	
	for(int i = 0; i < Arows; i++)
	{
		for(int j = 0; j < Brows; j++)
		{
			cout << Cmat[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int Arows, Acols, Brows, Bcols;
	int Amat[100][100], Bmat[100][100], Cmat[100][100];

	cout << "Enter the rows of first matrix: ";
	cin >> Arows;
	
	cout << "Enter the columns of first matrix: ";
	cin >> Acols;
	
	insert_matrix(Amat, Arows, Acols);
	
	cout << "Enter the rows of second matrix: ";
	cin >> Brows;
	
	cout << "Enter the columns of second matrix: ";
	cin >> Bcols;
	
	insert_matrix(Bmat, Brows, Bcols);
	
	cout << "First matrix- " << endl;
	display_matrix(Amat, Arows, Acols);
	
	cout << "Second matrix- " << endl;
	display_matrix(Bmat, Brows, Bcols);
	
	matrix_addition(Amat, Bmat, Cmat, Arows, Acols, Brows, Bcols);
}
