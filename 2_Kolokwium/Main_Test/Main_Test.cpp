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
int Checker(int* arr,int checker,int size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i]*arr[i+1]<0)
		{
			checker++;
		}
	}
	return checker;
}
void WstawK(int* arr, int* arr2, int size, int k)
{
	int j = 0;
	for (int i = 0; i < size-1; i++)
	{
		arr2[j] = arr[i];
		if (arr[i] * arr[i + 1] < 0)
		{
			j++;
			arr2[j] = 0;

		}
		j++;
	}
	arr2[j] = arr[size - 1];

}

int main()
{
	int size,k;
	int checker = 0;
	cout << "Write size: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Write elements: ";
	get(arr, size);
	cout << "Array elements: ";
	print(arr, size);


	checker = Checker(arr,checker ,size);
	int size2 = size + checker;
	int* arr2 = new int[size2];
	cout <<endl<< "Write K for next function: ";
	cin >> k;
	WstawK(arr, arr2, size,k);
	cout << "After \"Wstaw K\" function: ";
	print(arr2, size2);
	

	Zamien(arr, size);
	cout <<endl<< "After \"Zamien\" function: ";
	print(arr, size);
	
	delete[]arr;
	delete[]arr2;
	return 0;


}
