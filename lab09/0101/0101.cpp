#include <iostream>
#include <string>
using namespace std;

struct card {
    int nym_bus, nym_rout;
    bool condit;
    string name_driv;
    card* next;
};
void my_cin(int& z) {
    setlocale(LC_CTYPE, "ukr");
    while (!(cin >> z) || (cin.peek() != '\n')) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Помилка ввода" << endl;
    }
}
void add_card(card*& bus_park) {
    setlocale(LC_CTYPE, "ukr");
    card* ptr = new card;
    cout << "Введіть ім'я водія: ";
    cin >> ptr->name_driv;
    cout << "Введіть номер автобуса: ";
    my_cin(ptr->nym_bus);
    ptr->nym_rout = ptr->condit = 0;
    ptr->next = nullptr;
    if (bus_park) {
        for (auto ptr2 = bus_park;; ptr2 = ptr2->next)
            if (!ptr2->next) {
                ptr2->next = ptr;
                break;
            }
    }
    else
        bus_park = ptr;
}
void send_ret(card& bus_park, int x) {
    setlocale(LC_CTYPE, "ukr");
    int y;
    cout << "Введіть номер автобуса: "; my_cin(y);
    auto* time_ptr = &bus_park;
    for (; time_ptr; time_ptr = time_ptr->next)
        if (time_ptr->nym_bus == y)
            break;
        else if (!time_ptr->next) {
            cout << "Номер автобуса " << y << " не знайдено..." << endl;
            return;
        }
    if (x == 2 && time_ptr->condit || x == 3 && !time_ptr->condit) {
        if (x == 2)
            cout << "(помилка) Автобус на маршруті." << endl;
        else
            cout << "(помилка) Автобус стоїть у парку." << endl;
        return;
    }
    else
        if (x == 2) {
            time_ptr->condit = 0;
            cout << "Автобус повертається в парк." << endl;
        }
        else {
            time_ptr->condit = 1;
            time_ptr->nym_rout = rand() % 100;
        }
}
void show_bus_card(card*& bus_card) {
    setlocale(LC_CTYPE, "ukr");
    int c;
    cout << "Щоб показати автобус у маршруті введіть 1, щоб показати автобус у парку, введіть 2: ";
    my_cin(c);
    for (auto time_ptr(bus_card); time_ptr; time_ptr = time_ptr->next)
        if (c == 1 && time_ptr->condit)
            cout << "\nНомер автобуса " << time_ptr->nym_bus <<
            "\nВодій " << time_ptr->name_driv <<
            "\nНомер маршруту " << time_ptr->nym_rout << endl;
        else if (c == 2 && !time_ptr->condit)
            cout << "\nНомер автобуса " << time_ptr->nym_bus <<
            "\nВодій " << time_ptr->name_driv << endl;
}
int main()
{
    setlocale(LC_CTYPE, "ukr");
    card* bus_park(nullptr);
    int x(1);
    while (x) {
        cout << "//-----------------------------------------------------------------------\n";
        cout << "Щоб додати карту водія 1" <<
            " вхід 2 або для повернення до входу 3, щоб показати вхід 4. Щоб вийти, введіть 0: ";
        my_cin(x);
        cout << "//-----------------------------------------------------------------------\n";
        switch (x) {
        case 1:
            add_card(bus_park);
            break;
        case 2: case 3:
            if (bus_park) send_ret(*bus_park, x);
            else cout << "Для початку додайте запис про автобуси!\n";
            break;
        case 4:
            if (bus_park) show_bus_card(bus_park);
            else cout << "Для початку додайте запис про автобуси!\n";
            break;
        default:
            if (x)
                cout << "Введіть номер 1 з 2 або 3, або 4 або 0...\n";
        }
    }
    return 0;
}