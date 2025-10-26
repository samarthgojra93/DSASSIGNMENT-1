#include <iostream>
using namespace std;

void inputMatrix(int mat[100][100], int rows, int cols) {
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
        cout << endl;
    }
}

void displayMatrix(int mat[100][100], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void displayTranspose(int mat[100][100], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the rows of matrix: ";
    cin >> rows;
    cout << "Enter the columns of matrix: ";
    cin >> cols;

    int mat[100][100]; 

    inputMatrix(mat, rows, cols);

    cout << "Matrix before transpose: " << endl;
    displayMatrix(mat, rows, cols);

    cout << "Matrix after transpose: " << endl;
    displayTranspose(mat, rows, cols);

    return 0;
}

