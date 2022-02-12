

#include <iostream>
#include <ctime>
using namespace std;
void FillArr(int* arr, int N) {
	for (int i = 0; i < N; i++) 
		arr[i] = rand() % 10;
}
void printArr(int* arr, int N) {
	for (int i = 0; i < N; i++) 
		cout << arr[i] << "\t";
	cout << endl;
}
void deleteZ(int*& arr, int& size, int y) {
	int* newArr = new int[size-1];
	for (int i = 0; i < y; i++) 
			newArr[i] = arr[i];	
	for (int j = y ; j < size; j++)
			newArr[j] = arr[j + 1];
	size--;
	delete[] arr;
	arr = newArr;
}
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int n,z,y,p;
	bool f = 1;
	cin >> n;
	int* arr = new int[n];
	FillArr(arr, n);
	printArr(arr, n);
	cin >> z;
	int i = 0;
	while(f ==true && i < n) {
		if (arr[i] == z) {
			y = i;
			f = false;
		}
		i++;
	}
	if (f == true) 
		cout << "Элемента   z нет ";
	else {
		deleteZ(arr, n, y);
		printArr(arr, n);
		cin >> p;
		arr[p - 1] = z;
		printArr(arr, n);
	}
	delete[] arr;
	return 0;
}


