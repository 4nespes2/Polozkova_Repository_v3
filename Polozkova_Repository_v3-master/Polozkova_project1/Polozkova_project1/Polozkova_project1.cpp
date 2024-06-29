/**
    @file		Polozkova_project1.cpp
    @brief		Заголовочный файл 
    @copyright	ВоГУ
    @author		Полозкова Е.С.
    @date		29-06-2024
    @version	1.0.0
\par Использует файл:
    @ref Polozkova_project1.cpp
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Ввод натурального числа X от пользователя.
 *
 * @return Введенное натуральное число X.
 */
int inputx() {

    int x;
    cout << "Введите натуральное число X: ";
    cin >> x;
    return x;

}

/**
 * @brief Ввод натурального числа A от пользователя.
 *
 * @return Введенное натуральное число A.
 */
int inputa() {
    int a;
    cout << "Введите натуральное число A: ";
    cin >> a;
    return a;
}

/**
 * @brief Проверка отсутствия цифры A в числе X.
 *
 * @param x Натуральное число X.
 * @param a Цифра A.
 * @return true, если цифра A отсутствует в числе X, иначе false.
 */
bool XnotinA(int x, int a) {

    if (to_string(x).find(to_string(a)) == string::npos) {
        return true;
    }
    else {
        return false;
    }

}

/**
 * @brief Проверка наличия цифры A более чем 2 раза в числе X.
 *
 * @param x Натуральное число X.
 * @param a Цифра A.
 * @return true, если цифра A встречается более 2 раз в числе X, иначе false.
 */
bool XdoubleA(int x, int a) {
    int count = 0;
    while (x > 0) {
        if (x % 10 == a) {
            count++;
        }
        x /= 10;
    }
    if (count > 2) {
        return true;
    }
    else {
        return false;
    }
}

/**
 * @brief Главная функция программы.
 *
 * @return 0 в случае успешного завершения программы.
 */
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


