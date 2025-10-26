#include <iostream>
using namespace std;

void create(int arr[], int &size)
{
	cout << "Enter the size of array: ";
	cin >> size;
	
	cout << "Enter the element of array: " << endl;
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << endl;
}

int display(int arr[], int &size)
{
	cout << "Array: ";
	
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << endl;
}

int binary_search(int arr[], int &size)
{
	int target;
	
	cout << "Enter the target: ";
	cin >> target; 
	
	int str = 0;
	int end = size - 1;
	
	while(str <= end)
	{
		int mid = (str + end) / 2; 
		
		if(target > arr[mid])
		{
			str = mid + 1;
		}
		
		else if(target < arr[mid])
		{
			end = mid - 1;
		}
		
		else
		{
			cout << "Target found at: " << mid;
			return 0;
		}
	}
	cout << "Target not found";
	return - 1;
	cout << endl;	
}

void bubble_sort(int arr[], int &size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int arr[100], size;
	
	create(arr, size);
	
	bubble_sort(arr, size);
	display(arr, size);
	binary_search(arr, size);
	
}
