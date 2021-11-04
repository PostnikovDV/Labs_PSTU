
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");//подключение Кириллицы
    float a, b;//обьявление переменных
    cout << "Введите числа: \n";
    cin >> a >> b;//ввод чисел
    cout << a * b;//вывод произведения данных чисел
    return 0;
}

