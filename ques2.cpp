#include <iostream>

using namespace std;

int main()
{
	int arr[100], n;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the element of array: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Array before deletion: \n";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	
	bool found = false;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				for(int k = j; k < n-1; k++)
				{
					arr[k] = arr[k + 1];
				}
				n--;
				found = true;
			}
		}
	}
	
	if(found = true)
	{
		cout << "After deletion: \n";
		for(int i = 0; i < n ; i++)
		{
			cout << arr[i] << endl;
		}
	}
	else
	{
		cout << "No duplicate value available" << endl;
	}
	cout << n;
}
