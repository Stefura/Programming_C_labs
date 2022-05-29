#include <iostream>
#include <cstdlib>


using namespace std;

bool isDigitPresent(int x, int d) {
    while (x > 0) {
        if (x % 10 == d)
            break;
        x = x / 10;
    }
    return (x > 0);
}

int random_in_range(int minimum, int maximum) {
    int result = 0;
    while (result < minimum  !isDigitPresent(result, 7)) {
        result = rand();
    }
    return result;
}

int main() {
    int arr_length;
    cout << "¬вед≥ть розм≥р масиву: ";
    cin >> arr_length;

    int array[arr_length];
    for (int i = 0; i < arr_length; i++) {
        array[i] = random_in_range(100, 999);
    }
    for (int i = 0; i < arr_length; i++) {
        cout << array[i] << ' ';
    }
    return 0;
}