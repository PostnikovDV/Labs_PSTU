#include <iostream>
#include <ctime>
using namespace std;
void fillArr(int* arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100  -50;
}
void printArr(int* arr, int n) {
    cout << '{';
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
        cout << '}';
        cout << endl;
}
void sortArr(int* arr, int n) {
    fillArr(arr, n);
    printArr(arr, n);
    int d = n / 2;
    while (d != 0) {
        for (int i = 0; i < n - d; i++)
        {
            int j;
            j = i;
            while ( j >= 0 && arr[j] > arr[j + d])
            {
                int st = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = st;
                j--;
            }
        }
        d = d / 2;
    }
printArr(arr, n);
}
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* arr=new int[n];
    sortArr(arr, n);
    return 0;
}
