

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int n = 4;
    const int m = 4;
    int arr[n][m], y = 0, k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++  )
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > arr[k-1][k-1])
                y++;
        }
    }
    cout << y;
    return 0;
}