#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите трехзначное число: ";
	int a, b, c, x, t, d;
	bool flag, flag1, flag2, flag3, flag4;
	bool f = false;
	cin >> x;
	a = x % 10;
	d = x / 10;
	b = d % 10;
	c = d / 10;
	while (!f)
	{
		flag1 = (a == b || a == c || b == c);
		flag = (x < 100 || x>999);
		if (flag)
		{ 
			cout << "Введите трехзначное число еще раз: ";
			cin >> x;
			a = x % 10;
			d = x / 10;
			b = d % 10;
			c = d / 10;

		}
		else if (flag1)
		{
			cout << "Введите трехзначное число еще раз: ";
			cin >> x;
			a = x % 10;
			d = x / 10;
			b = d % 10;
			c = d / 10;

		}
		else f = true;
	}
	cout << "Все варианты комбинаций чисел: ";
	cout << c << b << a << " ";
	t = a;
	a = b;
	b = t;
	cout << c << b << a << " ";
	t = c;
	c = b;
	b = t;
	cout << c << b << a << " ";
	t = a;
	a = c;
	c = t;
	cout << c << b << a << " ";
	t = a;
	a = b;
	b = t;
	cout << c << b << a << " ";
	t = c;
	c = b;
	b = t;
	cout << c << b << a << endl;
	flag2 = (a > b) && (a > c);
	flag3 = (b > a) && (b > c);
	flag4 = (c > a) && (c > b);
	if (flag2)
	{
		if (b > c)
			cout << "Самое большое число: " << a << b << c;
		else
			cout << "Самое большое число: " << a << c << b;
	}
	else
	{
		if (flag3)
		{
			if (a > c)
				cout << "Самое большое число: " << b << a << c;
			else
				cout << "Самое большое число: " << b << c << a;
		}
		else
		{
			if (flag4)
			{
				if (a > b)
					cout << "Самое большое число: " << c << a << b;
				else
					cout << "Самое большое число: " << c << b << a;
			}
		}
	}
	return 0;
}