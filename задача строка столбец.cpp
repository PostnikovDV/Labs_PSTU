#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int N;
	cout << "Введите количество строк/столбцов: ";
	cin >> N;
	int **arr = new int*[N], k, p, t, z, y, x;
	for (int i = 0; i < N; i++)
		 arr[i] = new int[N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = rand() % 100 ;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "Введите номер строки и столбца: ";
	cin >> k >> p;
	z = arr[k - 1][k - 1];
	//int y = arr[p-1][p-1];
	x = arr[k - 1][p - 1];// элемент на пересечении
	for (int i = 0; i < N; i++)
	{
		if (i != k - 1 && i != p - 1)
		{
			t = arr[k - 1][i];
			arr[k - 1][i] = arr[i][p - 1];
			arr[i][p - 1] = t;
		}
		else
			arr[i][i] = x;
	}
	arr[k - 1][p - 1] = z;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << '\t';
		cout << endl;
	}
		for (int i = 0; i < N; i++) 
			delete[] arr[i];
	return 0;
}