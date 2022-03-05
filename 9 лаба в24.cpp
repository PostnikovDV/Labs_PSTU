#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void fillarr(string* words, string row, int len) {
    int i = 0;
    for (int j = 0; j < len; j++) {
        words[j] = "";
        while (row[i] == ' ')
            i++;
        while (row[i] != ' ' && row[i] != '\0' && row[i] != '\n')
            words[j] += row[i++];
    }
}
int counter(string row) {
    int count = 0;
    int i = 0;
    while (i < row.length()) {
        while (row[i] == ' ')
            i++;
        while (row[i] != ' ' && row[i] != '\0' && row[i] != '\n')
            i++;
        count++;
    }
    return count;
}
void splitrow(string row, string*& array, int& qty_words) {
    qty_words = counter(row);
    array = new string[qty_words];
    fillarr(array, row, qty_words);

}

bool doubles(string* words, int len) {
    int i = 0, count = 0;
    bool f = false;
    while (i < len)
    {
        for (int j = i + 1; j < len; j++)
            if (words[i] == words[j]) 
                count++;                    
        if (count == 1)
            f = true;
        if (count > 1)
            f = false;
        i++;
    }
    return f;
}
bool letterA(char sym) {
    bool f = false;
    if (sym == 'a' || sym == 'A')
       f = true;
   return f;
}
int findword(string* words, int len) {
    int num = -1, maxA = 0;
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < words[i].length(); j++)
            if (letterA(words[i][j]))
                count++;
        if (count > maxA)
        {
            maxA = count;
            num = i;
        }
    }
    return num + 1;
}
int main()
{
    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "ru");
    char a[256];
    int qty;
    cout << "Введите количество строк: ";
    cin >> qty;
    ofstream output("File1.txt");
    getchar();
    if (output.is_open()) {
        for (int i = 0; i < qty; i++) {
            cin.getline(a, 256);
            output << a << endl;
        }
    }
    else
        cout << "Не удалось открыть файл";
    output.close();
    ifstream input("File1.txt");
    if (input.is_open()) {
        ofstream output1("File2.txt");
        int rowNum = 1;
        while (!input.eof()) {
            string row;
            string* words;
            int qty_words;
            getline(input, row);
            splitrow(row, words, qty_words);
            if (doubles(words, qty_words))

                output1 << row << endl;
            int numword = findword(words, qty_words);


            if ((numword != 0) && rowNum <= qty)
                cout << "В строке " << rowNum << " Слово с наибольшим количеством буквы а стоит под номером " << numword << ": " << words[numword - 1] << endl;
            else if (rowNum <= qty)
                cout << "В строке " << rowNum << " нет слов с буквой а " << endl;
            rowNum++;
        }
        output1.close();
    }
    else
        cout << "Не удалось открыть файл File1.txt" << endl;
    input.close();
    return 0;
}
