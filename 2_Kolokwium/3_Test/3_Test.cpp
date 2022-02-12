#include <iostream>
using namespace std;
void Pobierz(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void Wypisz(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{

		cout << arr[i] << " ";
	}

}
/*
void Zamiana(int* arr, int size,int k)
{
	for (int i = 0; i < size; i++)
	{
		if(arr[i]<0 && arr[i]<-k)
		{
		}
		else if (arr[i] < k)
		{
			arr[i] = arr[i]*arr[i];
		}
	}
}*/


bool FirstNumbers(int* arr, int i, int size)
{
	for (int i = 2; i < arr[i]; i++)
	{
		if (arr[i] % i == 0)
		{
			return 0;
		}

	}
	return 1;
}
void Nowa(int* arr, int* newarr, int size)
{
	for (int i = 0, j = 0; i < size; i++)
	{
		if (FirstNumbers(arr, i, size) == 1)
		{
			newarr[j] = arr[i];
			j++;
		}

	}
}


int main()
{
	cout << "Write size : ";
	int size;
	int newsize;
	int k;
	cin >> size;
	int* arr = new int[size];
	int* newarr = new int[size];
	cout << "Write elements: ";
	Pobierz(arr, size);
	cout << "Array elements: " << endl;
	Wypisz(arr, size);
	cout << "Write K: ";
	cin >> k;
	//Zamiana(arr, size, k);
	//Wypisz(arr, size);
	Nowa(arr, newarr, size);
	Wypisz(newarr, size);
	delete[]arr;
	return 0;

}





/*#include <iostream>
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
int LiczbaMalych(int* arr, int size)
{
	int j = 0;
	for (int i = 0, max = arr[0]; i < size; i++)
	{
		if (max > arr[i])
		{
			j++;
		}
		else
			max = arr[i];

	}
	return j;
}
int main()
{
	int size;
	cout << "Write size: ";
	cin >> size;
	int* arr = new int[size];
	get(arr, size);
	print(arr, size);
	cout << LiczbaMalych(arr, size);
	*/



