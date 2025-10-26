#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;
    cin.ignore();  // Fix for input skipping

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;
    cin.ignore();  // Optional but good practice

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
