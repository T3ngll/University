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
bool symmetry(int* arr, int size)
{

	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		if ((arr[i] >= 0 && arr[j] >= 0) || (arr[i] < 0 && arr[j] < 0))
		{

		}
		else
		{
			return 0;
		}

	}
	return 1;
}
int Identity(int* arr, int size)
{
	if (size % 2 == 0)
	{

	}
	else
	{
		size = size - 1;
	}




	return 0;
}
int main()
{
	int size;
	cout << "Write size: ";
	cin >> size;
	int* arr = new int[size];
	get(arr, size);
	print(arr, size);
	if (symmetry(arr, size) == 0)
	{
		cout << "Nie jest symmetryczna";
	}
	else
	{
		cout << "Jest symmetryczna";
	}
}
