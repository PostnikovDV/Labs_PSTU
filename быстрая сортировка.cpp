#include <iostream>
#include <ctime>
using namespace std;
void fillArr(int* arr, int n);
void printArr(int* arr, int n);
void sortarr(int* arr, int first, int last);
void fillArr(int* arr, int n) {
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100 - 50;
}
void printArr(int* arr, int n) {
	cout << '{';
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1)
			cout << ", ";
	}
	cout << '}';
}
void sortarr(int* arr, int first, int last)
{
	int mid, st;
	int f = first, l = last;
	mid = arr[(f + l) / 2];
	do
	{
		while (arr[f] < mid) 
			f++;
		while (arr[l] > mid) 
			l--;
		if (f <= l) //перестановка элементов
		{
			st = arr[f];
			arr[f] = arr[l];
			arr[l] = st;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) 
		sortarr(arr, first, l);
	if (f < last) 
		sortarr(arr, f, last);
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* arr = new int[n];
	fillArr(arr, n);
	printArr(arr, n);
	sortarr(arr, 0, n-1);
	cout << endl << "Отсортированный массив: ";
	printArr(arr, n);
	delete[] arr;
	return 0;
}