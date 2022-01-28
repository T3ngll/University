#include <iostream>
using namespace std;
int main()
{
    int sum, g, n, i, j;
    cout << "Write integer number g>=1" << endl;
    cin >> g;
    while (g < 1)
    {
        cout << "wrong number,try again" << endl;
        cin >> g;
    }
    cout << "Write integer number n>=1" << endl;
    cin >> n;
    while (n < 1)
    {
        cout << "wrong number,try again" << endl;
        cin >> n;
    }
    j = 0;
    sum = 0;
    for (int i = n; i < g; j++)
    {
        sum += i;
        cout << sum << " ";
        if (sum > g)
        {
            cout << endl << ">>>" << j;
            break;
        }
    }


}

/*Napisać program pobierający od użytkownika całkowitą dodatnią liczbę G
oraz całkowitą liczbę dodatnią N, a następnie mówiący ile kolejnych całkowitych
liczb dodatnich podzielnych przez N należy dodać aby otrzymać najmniejszą liczbę większą od G. */