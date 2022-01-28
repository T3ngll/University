#include <iostream>
using namespace std;
int main()
{
	char a, b;
	double x, y;
	cout << " >> Write 'e' to shutdown programm << " << endl;
	while (true)
	{
		cout << "Write first currency (d-dol # h-uah # r-rub # z-pln;)" << endl;          //d-dol;h-uah;r-rub;z-pln; dol=universal;
		cin >> a;
		if (a == 'e')
		{
			return 0;
		}
		cout << "Write second currency" << endl;
		cin >> b;
		if (b == 'e')
		{
			return 0;
		}
		cout << "write amount of first currency: ";
		cin >> x;


		if (a == 'd') {}
		else if (a == 'h')
		{
			x = x / 27;
		}
		else if (a == 'r')
		{
			x = x / 73;
		}
		else if (a == 'z')
		{
			x = x / 4;
		}



		if (b == 'd')
		{
			y = x;
		}
		else if (b == 'h')
		{
			y = x * 27;
		}
		else if (b == 'r')
		{
			y = x * 73;
		}
		else if (b == 'z')
		{
			y = x * 4;
		}


		cout << y << endl;
	}


	return 0;
}

/*Napisać kalkulator walutowy (umożliwiający zamianę kwoty podanej w wybranej walucie na kwotę
w innej wybranej walucie), pozwalający na wybór waluty bieżącej za pomocą odpowiedniej litery
(Z - złotówki, D - dolary itd), a następnie na wybór waluty docelowej (również za pomocą litery).
Program powinien pozwalać na wielokrotny wybór kwoty i waluty bieżącej (waluta docelowa powinna
być również wybrana ponownie)*/