#include <iostream>
using namespace std;
//Zestaw 3 Zestawy B
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
        cout << arr[i]<<" ";
    }

}
/*int count(int* arr, int numb, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numb) count++;
    }

    return count;
}

int RarestNumber(int* arr, int size)
{
    int counter = count(arr, arr[0], size);
    int rarest = arr[0];
    int curr_count;

    for (int i = 1; i < size; i++)
    {
        curr_count = count(arr, arr[i], size);
        if (curr_count < counter)
        {
            counter = curr_count;
            rarest = arr[i];
        }
    }


    return rarest;
}*/
int* function2(const int* arr, const int size, const int n, int& real)
{
    int count;
    real = size;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (; i < size && arr[i] < 0; i++)
        {
            count++;
        }
        if (count <= n)
        {
            real -= count;
        }
    }

    int* arr2 = new int[real];

    for (int i = 0, j = 0; i < size;)
    {
        count = 0;
        if (arr[i] >= 0)
        {
            arr2[j] = arr[i];
            j++;
            i++;
            continue;
        }
        for (; arr[i] < 0 && i < size; i++)
        {
            count++;
        }
        if (count > n)
        {
            for (int z = i - count; z <= i; z++)
            {
                arr2[j] = arr[z];
                j++;

            }
            i++;
        }

    }
    return arr2;

}

int main()
{
    int size, n, real = 12;
    cout << "Write size : ";
    cin >> size;
    int* arr = new int[size];
    get(arr, size);
    //cout<< RarestNumber(arr, size);
    cout << "Write N for next function:";
    cin >> n;
    int* arr2 = function2(arr, size, n, real);
    print(arr2, real);








    return 0;
}