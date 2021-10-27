
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, h;
	bool f = 1;
	bool g = false;
	srand(time(0));
	i = 1 + rand() % 100;
	cout << "Введите число: ";
	cin >> h;
	while (g == false)
	{
		if (h > i)
		{
			cout << "Ваше число больше данного \n";
			cin >> h;
		}
		else if (h < i)
		{
			cout << "Ваше число меньше данного \n";
			cin >> h;
		}
		else  g = true;

	}
	cout << "вы угадали число " << '('<<i<<')';
	return 0;
}
