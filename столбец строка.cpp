#include <iostream>
#include <ctime>
using namespace std; 

void fillarr(int** arr, int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) 
			arr[i][j] = rand() % 100;
		
	}
}
void printarr(int** arr, int N) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << '\t';
		cout << endl;
	}
	cout << endl;
}
void swap(int** arr, int N,int k, int p, int x) {
	int t;
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
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int N;
	cout << "Введите количество строк/столбцов: ";
	cin >> N;
	int** arr = new int* [N];
		int k, p, z, y, x;
	fillarr(arr, N);
	printarr(arr, N);
	cout << "Введите номер строки и столбца: ";
	cin >> k >> p;
	z = arr[k - 1][k - 1];
	y = arr[p-1][p-1];
	x = arr[k - 1][p - 1]; // элемент на пересечении
	swap(arr, N, k, p, x);
	if (k != p) {
		arr[k - 1][p - 1] = z;
		cout << "Первый вариант: " << endl;
		printarr(arr, N);
		cout << "Второй вариант: " << endl;
		arr[k - 1][p - 1] = y;
		printarr(arr, N);
	}
	else
		printarr(arr, N);
	for (int i = 0; i < N; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}