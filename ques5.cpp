#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int arr[10][10];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> arr[i][j];

    // Sum of each row
    for (int i = 0; i < r; ++i) {
        int row_sum = 0;
        for (int j = 0; j < c; ++j)
            row_sum += arr[i][j];
        cout << "Sum of row " << i + 1 << ": " << row_sum << endl;
    }

    // Sum of each column
    for (int j = 0; j < c; ++j) {
        int col_sum = 0;
        for (int i = 0; i < r; ++i)
            col_sum += arr[i][j];
        cout << "Sum of column " << j + 1 << ": " << col_sum << endl;
    }

    return 0;
}
