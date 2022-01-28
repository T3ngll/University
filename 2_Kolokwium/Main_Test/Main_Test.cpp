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

void WstawK(int* arr, int* new_arr, int size, int k)
{

	for (int i = 0, j = 0; i < size; i++)
	{
		if (arr[i] < 0 && arr[i++] >= 0 || arr[i] >= 0 && arr[i] < 0)
		{
			j = arr[i++];
		}


		for (int i = 0; i < j; i++)
			new_arr[i] = arr[i];
		new_arr[j] = k;

		for (int i = j + 1; i < size + 1; i++)
			new_arr[i] = arr[i - 1];
	}


	size++;
}
int main()
{
	int size, k;
	cout << "Write size: ";
	cin >> size;
	cout << endl;
	int* arr = new int[size];
	int* new_arr = new int[size + 1];
	cout << "Write elements: \t";
	get(arr, size);
	cout << "Array elements: \t";
	print(arr, size);
	cout << endl;
	cout << "Write k for function: ";
	cin >> k;
	cout << "After WstawK function: \t";
	WstawK(arr, new_arr, size, k);
	print(new_arr, size);
	Zamien(arr, size);
	cout << endl;
	cout << "Po Zamienie: \t";
	print(arr, size);
	cout << endl;

	delete[]arr;
	return 0;


}
