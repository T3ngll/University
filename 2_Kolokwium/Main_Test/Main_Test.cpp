#include <iostream>
using namespace std;
void get(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void Zamien(int* arr, int size)
{
	int min;
	for (int i = size - 1; i > 0; i--)
	{
		min = arr[i - 1];
		for (int j = i - 2; j >= 0; j--)
		{
			if (min > arr[j])
			{
				min = arr[j];
			}
		}
		arr[i] = min;
	}
}
void Checker(int* arr, int size, int checker)
{
	for (int i = 1; i < size; i++)
	{
		if ((arr[i] < 0 && arr[i - 1] > 0) || (arr[i] > 0 && arr[i - 1] < 0))
		{
			checker++;
		}
	}
	cout << checker;
}

void WstawK(int* arr,int size, int k)
{
}
int main()
{
	int size;
	int checker=0;
	cout << "Write size: ";
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	cout << "Write elements: \t";
	get(arr, size);
	cout << "Array elements: \t";
	print(arr, size);
	cout << endl;
	Checker(arr, size,checker);
	

	/*cout << "Write k for function: ";
	cin >> k;
	cout << "After WstawK function: \t";
	
	cout << "Po Zamienie: \t";
	print(arr, size);
	cout << endl;*/

	delete[]arr;
	return 0;


}
