#include <iostream>
using namespace std;
int main()
{
	/*int arr[50] = {0};



	cout << "Write elements"<<endl;

	for (int i = 0;; i++)
	{
		cin >> arr[i];


		if (arr[i] == 0) break;
	}
	int sum = 0;
	int max = arr[0];
	for (int i = 1;arr[i]!=0;i++)
	{
		sum = arr[i] + arr[i - 1];
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if (sum < max)
		{
			cout << arr[i - 1] << " " << arr[i]<<endl;
		}

	}*/
	int a, b, max;
	cout << "write elements " << endl;
	cin >> a;
	if (a == 0)
	{
		return 0;
	}
	max = a;
	do
	{
		cin >> b;
		if (b == 0)
		{
			break;
		}
		if (b > max)
		{
			max = b;
		}
		if (a + b < max)
		{
			cout << a << " " << b << endl;
		}
		a = b;
	} while (true);



}

/*�������� ���������, ������� ��������� ������������� �������� �� ������������ �� ��� ���,
���� �� ����� ���� �������� 0, ��� ��������� ������� � ������������� ���� ���������������
�������� �����, ��� ������� ����� �������� ���� ������, ��� ��������� �������� ��������.
�� ��� ��� � �������������, ������� ����� ��� ���� (�������� ���� �� �����������; ������:
��� ������������������ �������� 4,1,2,3, -1,6,5,0 ���� ��������: 1,2; 3, -1; -1,6 � ����������
� ���, ��� ����� ��� ���� 3).*/