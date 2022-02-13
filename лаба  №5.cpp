

#include <iostream>
#include <ctime>
using namespace std;
const int n = 4;
const int m = 4;
template<typename type>
void maxfunc(type arr)
{
    int max = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] > max)
            max = arr[i][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max)
                y++;
        }
    }
    cout << "Элементов больше, чем наибольший на главной диагонали: " << y;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    maxfunc(arr);
    return 0;
}