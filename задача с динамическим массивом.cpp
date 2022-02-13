

#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int* arr, int N) {
	for (int i = 0; i < N; i++)
		arr[i] = rand() % 100;
}
void printArr(int* arr, int N) {
	for (int i = 0; i < N; i++)
		cout << arr[i] << "\t";
	cout << endl;
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
void pushP(int*& arr, int& size, int p, int z) {
	int* newArr = new int[size + 1];
	for (int i = 0; i < p - 1; i++)
		newArr[i] = arr[i];
	for (int i = p - 1; i < size + 1; i++) {
		if (i == p - 1)
			newArr[i] = z;
		newArr[i + 1] = arr[i];
	}
	size++;
	delete[] arr;
	arr = newArr;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int n, z, y, p;
	bool f = 1;
	cout << "Введите размер массива: ";
	cin >> n;
	int* arr = new int[n];
	FillArr(arr, n);
	printArr(arr, n);
	cout << "Введите искомый элемент: ";
	cin >> z;
	int i = 0;
	while (f == true && i < n) {
		if (arr[i] == z) {
			y = i;
			f = false;
		}
		i++;
	}
	if (f)
		cout << "Элемента   z нет ";
	else {
		deleteZ(arr, n, y);
		printArr(arr, n);
		cout << "Введите номер элемента, на место которого нужно поставить z: ";
		cin >> p;
		pushP(arr, n, p, z);
		printArr(arr, n);
	}
	delete[] arr;
	return 0;
}


