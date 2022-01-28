#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cout << "Write int number 2 <= n <= 10" << endl;
    cin >> n;
    while (n < 2 || n>10)
    {
        cout << "wrong number,try again" << endl;
        cin >> n;
    }
    b = 2;
    a = 1;
    while (a < 1000000)
    {
        a = pow(n, b);
        b = b + 2;
    }
    b = b - 2;
    cout << b;
}




/*Napisać program pobierający od użytkownika liczbę całkowitą
dodatnią mniejszą od 10 (należy wymusić podanie odpowiedniej wartości),
a następnie sprawdzający która parzysta potęga tej liczby da wartość większą niż milion.*/