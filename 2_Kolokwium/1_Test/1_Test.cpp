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
bool CzyFibPodobna(int* arr, int size)
{
    if (size < 3)
    {
        return 1;
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i - 1] + arr[i - 2] != arr[i])
        {
            return 0;
        }
    }
    return 1;
}
int NajwiekszaSumaNaprzemienna(int* arr, int size, int d)
{
    int max = 0, sum;
    for (int i = 0; i < size - d; i++)
    {
        sum = 0;
        int change = 0;
        for (int j = 1; j < d; j++)
        {
            change = arr[i + j] - arr[i + j - 1];
            sum += change;
        }

        if (i == 0 || max < sum)
            max = sum;


    }
    int* arrr = new int[d];
    for (int i = 0; i < size - d; i++)
    {
        sum = arr[i];
        int change = 0;
        for (int j = 1; j < d; j++)
        {
            change = arr[i + j] - arr[i + j - 1];
            sum += change;
        }

        if (sum == max)
        {

            for (int j = 0; j < d; j++)
            {
                arrr[j] = arr[i + j];

            }
        }

    }
    return *arrr;
}

int main()
{
    int size;
    cin >> size;
    int* arr = new int[size];
    Pobierz(arr, size);
    Wypisz(arr, size);
    if (CzyFibPodobna(arr, size) == 0)
    {
        cout << "Nie jest fib podobna";
    }
    else
    {
        cout << "Jest fib podobna";
    }



    return 0;
}

