#include <iostream>
using namespace std;

void inputMatrix(int mat[100][100], int rows, int cols, const string& name) {
    cout << "Enter the elements of " << name << " matrix: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
        cout << endl;
    }
}

void displayMatrix(int mat[100][100], int rows, int cols, const string& name) {
    cout << name << " matrix:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix_multiplication(int Amat[100][100], int Arows, int Acols, int Bmat[100][100], int Brows, int Bcols, int Cmat[100][100])
{
	if(Acols == Brows)
	{		
		int Cmat[Arows][Bcols];

		for(int i = 0; i < Arows; i++)
		{
			for(int j = 0; j < Bcols; j++)
			{
				int sum = 0;
				for(int k = 0; k < Acols; k++)
				{
					sum = sum + Amat[i][k] * Bmat[k][j];
					Cmat[i][j] = sum;
					
				}
			}
		}
		cout << "Final matrix: " << endl;
		for(int i = 0; i < Arows; i++)
		{
			for(int j = 0; j < Bcols; j++)
			{
				cout << Cmat[i][j] << " ";
			}
		cout << endl;
		}
	}
	
	else
	{
		cout << "Matrix dimension does not match" << endl;
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

    inputMatrix(Amat, Arows, Acols, "first");
    displayMatrix(Amat, Arows, Acols, "First");

    cout << "Enter the rows of second matrix: ";
    cin >> Brows;
    cout << "Enter the columns of second matrix: ";
    cin >> Bcols;

    inputMatrix(Bmat, Brows, Bcols, "second");
    displayMatrix(Bmat, Brows, Bcols, "Second");
    
    matrix_multiplication(Amat, Arows, Acols, Bmat, Brows, Bcols, Cmat);		
}
