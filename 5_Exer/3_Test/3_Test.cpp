#include <iostream>
using namespace std;
int main()
{
	int g, i, j;
	cin >> g;
	while (g < 1)
	{
		cin >> g;
	}
	i = 0;
	j = 0;

	for (int i = 0; i < g;)
	{
		i = i + i++;
		j++;
		cout << i << "  ";
	}
	cout << endl << j;
}

/*Napisać program pobierający od użytkownika całkowitą dodatnią liczbę G,
a następnie mówiący ile kolejnych liczb całkowitych dodatnich należy dodać, aby
otrzymać najmniejszą liczbę nie mniejszą niż G*/