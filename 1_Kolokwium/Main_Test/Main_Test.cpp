#include <iostream>
using namespace std;
int main()
{
    /*int checker, max;
    checker = max = 0;
    int arr[50];
    cout << "Write elements: ";
    for (int i = 0; i < 50; i++, max++)
    {
        cin >> arr[i];
        if (arr[i] == 0) break;
    }
    for (int i = 2; i < max; i++)
    {
        int checker, checker2, sum, sum2;
        checker = checker2 = sum = sum2 = 0;
        sum = arr[i] + arr[i - 1];
        for (int i = 1; i <= sum; i++)
            if (sum % i == 0)  checker++;
        sum2 = arr[i - 1] + arr[i - 2];
        for (int i = 1; i <= sum2; i++)
            if (sum2 % i == 0)  checker2++;
        if (checker2 > checker)
        {
            cout << arr[i - 1] << ", " << arr[i] << "\t";
        }

    }*/
    int size;
    cout << "Write size (>0): ";
    cin >> size;
    for (; size <= 0;)
    {
        cout << "Wtite correct size(>0): ";
        cin >> size;
    }
    int* arr = new int[size];
    cout << "Write elements(>0): ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
        {
            for (; arr[i] <= 0;)
            {
                cout << "Wtite correct element(>0): ";
                cin >> arr[i];
            }
        }
    }
    cout << "Elements: ";
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        cout << arr[i] << " ";
    }
    for (int i = 1; i + 2 < size; i += 3)
    {
        int max = arr[i - 1];
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) max = arr[i];
        if (arr[i+1] >= arr[i - 1] && arr[i+1] >= arr[i]) max = arr[i+1];
        if (arr[i-1] == max) arr[i-1] = arr[i-1] % min;
        if (arr[i] == max)   arr[i] = arr[i] % min;
        if (arr[i+1] == max) arr[i+1] = arr[i+1] % min;
    }
    cout << "Elements after function: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}