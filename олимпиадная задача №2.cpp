#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, h, g;
	srand(time(0));
	i = 1 + rand() % 100;
	cout << "Введите число: ";
	cin >> h;
	
	for (g = 0; g < 6; g++)
	{
		if (h < 1 || h >100)
		{
			cout << "Введите число еще раз: ";
			cin >> h;
		}
		
	    
		if (h > i)
		{
			cout << "Загаданное число меньше введенного  \n";
			cin >> h;
		}
		else if (h < i)
		{
			cout << "Загаданное число больше введенного  \n";
			cin >> h;
		}
		
	}
	if(h == i)
		cout << "вы угадали число " << '(' << i << ')';
	else
	cout << "вы  не угадали число за 7 попыток " <<"загадонное число - " <<'(' << i << ')';
	return 0;
}