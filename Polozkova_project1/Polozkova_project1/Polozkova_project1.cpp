#include <iostream>
#include <string>

using namespace std;

int inputx() {
    int x;
    cout << "Введите натуральное число X: ";
    cin >> x;
    return x;
}

int inputa() {
    int a;
    cout << "Введите цифру A: ";
    cin >> a;
    return a;
}

bool XnotinA(int x, int a) {
    if (to_string(x).find(to_string(a)) == string::npos) {
        return true;
    }
    else {
        return false;
    }
}

bool XdoubleA(int x, int a) {

}

int main() {
    int choice;
    int X, A;

    do {
        cout << "Выберите действие:\n";
        cout << "1. Ввод натурального числа X\n";
        cout << "2. Ввод цифры A\n";
        cout << "3. Проверка отсутствия цифры A в числе X\n";
        cout << "4. Проверка наличия цифры A более чем 2 раза в числе X\n";
        cout << "5. Выход\n";
        cin >> choice;

        switch (choice) {
        case 1:
            X = inputx();
            break;
        case 2:
            A = inputa();
            break;
        case 3:
            if (XnotinA(X, A)) {
                cout << "Цифра " << A << " отсутствует в числе " << X << endl;
            }
            else {
                cout << "Цифра " << A << " присутствует в числе " << X << endl;
            }
            break;
        case 4:
            if (XdoubleA(X, A)) {
                cout << "Цифра " << A << " встречается более 2 раз в числе " << X << endl;
            }
            else {
                cout << "Цифра " << A << " встречается максимум 2 раза в числе " << X << endl;
            }
            break;
        case 5:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }
    } 
    
    while (choice != 5);

    return 0;
}


