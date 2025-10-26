	#include <iostream>
	using namespace std;

	int removeDuplicates(int arr[], int n) {
		if (n == 0 || n == 1)
			return n;

		int temp[n];
		int j = 0;

		// Traverse each element
		for (int i = 0; i < n; i++) {
			bool duplicate = false;
			// Check if arr[i] already exists in temp
			for (int k = 0; k < j; k++) {
				if (arr[i] == temp[k]) {
					duplicate = true;
					break;
				}
			}
			if (!duplicate)
				temp[j++] = arr[i];
		}

		// Copy back unique elements
		for (int i = 0; i < j; i++)
			arr[i] = temp[i];

		return j; // Return new size
	}

	int main() {
		int arr[100], n;

		cout << "Enter number of elements: ";
		cin >> n;

		cout << "Enter array elements: ";
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		n = removeDuplicates(arr, n);

		cout << "Array after removing duplicates: ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";

		cout << endl;
		return 0;
	}
