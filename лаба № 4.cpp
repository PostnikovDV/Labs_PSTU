
#include <iostream>
#include <ctime>
using namespace std;
void fillarr(int* arr,int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100 -50;
	}
}
void printarr(int* array, int  n) {
	for (int i = 0; i < n; i++)
		cout << '[' << i + 1 << "] " << array[i] << "\t";
	cout << endl;
}
void printarr1(int* array, int  N, int k) {
	cout << "Массив с к-го элемента до k-1: ";
	for (int i = k -1 ; i < N ; i++) 
		cout << array[i] <<" ";
		for(int i = 0; i <k -1 ;i++)
		cout  << array[i] << " ";
		cout << endl;
}
void sortarr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j]; 
				arr[j] = arr[j + 1]; 
				arr[j + 1] = b; 
			}
		}
	}
}
void deleteZ(int*& arr, int& size, int y) {
	int* newArr = new int[size - 1];
	for (int i = 0; i < y; i++)
		newArr[i] = arr[i];
	for (int j = y; j < size; j++)
		newArr[j] = arr[j + 1];
	size--;
	delete[] arr;
	arr = newArr;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int n,u,k, y =0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* arr = new int[n];
	fillarr(arr,n);
	printarr(arr, n);
	cout  << "Введите кол-во элементов кольца: ";
	cin >> u;
	for (int i = 0; i < n; i++) {
		cout  << '[' << i+1 << "] " << arr[i] << "\t";
		y++;
		if (i + 1  == n) 
			i = -1;
		if (y == u)
			i = n;
	}
	cout << endl;
	do {
		cout << "Введите номер элемента: " << endl;
		cin >> k;
	} while (k > n);
	printarr1(arr, n, k);
	sortarr(arr, n);
	cout << "Отсортированный массив: " << endl;
	printarr(arr, n);
	cout << "Масиив без четных чисел: " << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			deleteZ(arr, n, i);
			i = -1;
		}
	}
	printarr(arr, n);
	do {
		cout << "Введите номер элемента: " << endl;
		cin >> k;
	} while (k > n);
	printarr1(arr, n, k);
	delete[] arr;
	return 0;
}

