

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");//подключение Кириллицы
    char a, b, c, d, f;//обьявление переменных
    cout << "Введите 5 символов: ";
    cin >> a >> b >> c >> d >> f;//ввод переменных
    cout << f << d << c << b << a;//вывод переменных в обратном порядке
    return 0;
}


