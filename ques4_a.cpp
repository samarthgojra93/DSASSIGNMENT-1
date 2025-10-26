#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size) {
	cout << "After reverse: " << endl; 
    int start = 0;
    int end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[100], size;
    cout << "Enter the size of the array: ";
    cin >> size;

    inputArray(arr, size);
	
	cout << "Original array: " << endl;
    displayArray(arr, size);
    
    reverseArray(arr, size);

    displayArray(arr, size);

    return 0;
}

