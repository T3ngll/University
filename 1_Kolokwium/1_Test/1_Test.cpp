#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /*int r;
    double s;
    cout << "Write R>1: ";
    cin >> r;
    if (r <= 1)
    {
        for (; r <= 1;)
        {
            cout << "Wtite correct R: ";
            cin >> r;
        }
    }
    cout << "Write S>0 : ";
    cin >> s;
    if (s <= 0)
    {
        for (; s <= 0;)
        {
            cout << "Wtite correct S: ";
            cin >> s;
        }
    }
    int i = 0;
    int sum = 0;
    for (;sum<s;i++)
    {
        sum = sum + pow(r, i) - i;
    }
    cout << "liczb: " << i << ", wynik: " << sum;
    */
    char arr[100];
    cout << "Write text: ";
    cin.getline(arr, 100);
    int count = 0, max = 0;
    for (int i = 0;; i++)
    {
        if (arr[i] == ' ')
        {
            if (max < count)
            {
                max = count;
            }

            count = 0;
        }
        else if (arr[i] == '\0')
        {
            if (max < count)
            {
                max = count;
            }
            break;
        }
        else count++;
    }

    count = 0;
    for (int i = 0;; i++)
    {
        if (arr[i] != ' ' && arr[i] != '\0')
            count++;
        else
        {
            if (max == count)
            {
                for (int j = i - count; j < i; j++)
                {
                    cout << arr[j];
                }

                cout << " ";

            }

            count = 0;
        }

        if (arr[i] == '\0') break;

    }

}