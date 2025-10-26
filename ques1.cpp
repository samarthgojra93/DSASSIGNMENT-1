#include <iostream>
using namespace std;

void createArray(int arr[], int &n) {
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n) {
    if (n == 0)
        cout << "Array is empty." << endl;
    else {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

void insertElement(int arr[], int &n) {
    int pos, val;
    cout << "Enter position (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (pos < 0 || pos > n) {
        cout << "Invalid position." << endl;
        return;
    }
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    cout << "Element inserted successfully." << endl;
}

void deleteElement(int arr[], int &n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    int pos;
    cout << "Enter position (0-based index) to delete: ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Invalid position." << endl;
        return;
    }
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    cout << "Element deleted successfully." << endl;
}

void linearSearch(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position: " << i << endl;
            return;
        }
    }
    cout << "Element not found." << endl;
}

int main() {
    int arr[100], n = 0, choice;
    while (true) {
        cout << "\n—— MENU ——" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY" << endl;
        cout << "3. INSERT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. LINEAR SEARCH" << endl;
        cout << "6. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createArray(arr, n); break;
            case 2: displayArray(arr, n); break;
            case 3: insertElement(arr, n); break;
            case 4: deleteElement(arr, n); break;
            case 5: linearSearch(arr, n); break;
            case 6: cout << "Exiting program. Goodbye!" << endl; return 0;
            default: cout << "Invalid choice. Try again." << endl;
        }
    }
}
