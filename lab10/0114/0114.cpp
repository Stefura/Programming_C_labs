#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

int main() {
    char c;
    setlocale(LC_ALL, "ukr");
    FILE* fin;
    fin = fopen("input.txt", "r");
    if (!fin) { puts("помилка "); 
    return 1; }
    while (!feof(fin))
    {
        fscanf(fin, "%c", &c);
        if (c == '0') cout << "ноль"; else
        if (c == '1') cout << "один"; else
        if (c == '2') cout << "два"; else
        if (c == '3') cout << "три"; else
        if (c == '4') cout << "чотири"; else
        if (c == '5') cout << "п'ять"; else
        if (c == '6') cout << "шість"; else
        if (c == '7') cout << "сім"; else
        if (c == '8') cout << "вісім"; else
        if (c == '9') cout << "дев'ять"; else
        if (c == '.') { cout << endl; } else
        if (c == '?') { cout << endl; } else
        if (c == '!') { cout << endl; } else
        cout << c;
       
        cout << endl;
        _getch();
        
    }
}