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
    if (!fin) { puts("������� "); 
    return 1; }
    while (!feof(fin))
    {
        fscanf(fin, "%c", &c);
        if (c == '0') cout << "����"; else
        if (c == '1') cout << "����"; else
        if (c == '2') cout << "���"; else
        if (c == '3') cout << "���"; else
        if (c == '4') cout << "������"; else
        if (c == '5') cout << "�'���"; else
        if (c == '6') cout << "�����"; else
        if (c == '7') cout << "��"; else
        if (c == '8') cout << "���"; else
        if (c == '9') cout << "���'���"; else
        if (c == '.') { cout << endl; } else
        if (c == '?') { cout << endl; } else
        if (c == '!') { cout << endl; } else
        cout << c;
       
        cout << endl;
        _getch();
        
    }
}