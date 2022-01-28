#include<iostream>
using namespace std;
int main()
{
    /*int D, jump_distance, lim;
    cout << "Write jump distance (cm) [X] : ";
    cin >> jump_distance;
    cout << "Write bottom line of stamina[Y]: ";
    cin >> lim;
    cout << "Write Distance(m)[D]: ";
    cin >> D;
    D = D * 100;
    int jumps = 0;
    bool finished = true;
    for (int passed = 0; passed < D;)
    {
        passed = passed + jump_distance;
        jumps++;
        if (jumps % 10 == 0)
        {
            jump_distance = jump_distance / 2;
            if (jump_distance < lim)
            {
                finished = false;
                break;
            }
        }

    }
    if (finished == true)
    {
        cout << "Tak, w " << jumps << " skokach" << endl;
    }
    else
    {
        cout << "nie";
    }*/
    int size;
    cout << "Write size: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Write elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    const int middle = (max + min) / 2;
    for (int i = 0; i + 2 < size; i++)
    {
        if ((arr[i] + arr[i + 1] + arr[i + 2]) / 3 <= middle)
        {
            cout << arr[i] << " " << arr[i + 1] << " " << arr[i + 2] << "   ";
            i += 2;
        }
    }

    delete[] arr;
    return 0;
}