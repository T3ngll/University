#include <iostream>
using namespace std;
int main()
{
	int arr[50];
	cout << "Write elements: ";
	for (int i = 0; i < 50; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			break;
		}
	}
	cout << "Elements: ";
	for (int i = 0; arr[i] !=0 ; i++)
	{
		cout<< arr[i]<<" ";
	}
	



	return 0;
}