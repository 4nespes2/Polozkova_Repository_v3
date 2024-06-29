/**
    @file		Polozkova_project1.cpp
    @brief		������������ ���� 
    @copyright	����
    @author		��������� �.�.
    @date		29-06-2024
    @version	1.0.0
\par ���������� ����:
    @ref Polozkova_project1.cpp
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief ���� ������������ ����� X �� ������������.
 *
 * @return ��������� ����������� ����� X.
 */
int inputx() {

    int x;
    cout << "������� ����������� ����� X: ";
    cin >> x;
    return x;

}

/**
 * @brief ���� ������������ ����� A �� ������������.
 *
 * @return ��������� ����������� ����� A.
 */
int inputa() {
    int a;
    cout << "������� ����������� ����� A: ";
    cin >> a;
    return a;
}

/**
 * @brief �������� ���������� ����� A � ����� X.
 *
 * @param x ����������� ����� X.
 * @param a ����� A.
 * @return true, ���� ����� A ����������� � ����� X, ����� false.
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
 * @brief �������� ������� ����� A ����� ��� 2 ���� � ����� X.
 *
 * @param x ����������� ����� X.
 * @param a ����� A.
 * @return true, ���� ����� A ����������� ����� 2 ��� � ����� X, ����� false.
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
 * @brief ������� ������� ���������.
 *
 * @return 0 � ������ ��������� ���������� ���������.
 */
int main() {
    int choice;
    int X, A;

    do {
        cout << "�������� ��������:\n";
        cout << "1. ���� ������������ ����� X\n";
        cout << "2. ���� ����� A\n";
        cout << "3. �������� ���������� ����� A � ����� X\n";
        cout << "4. �������� ������� ����� A ����� ��� 2 ���� � ����� X\n";
        cout << "5. �����\n";
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
                cout << "����� " << A << " ����������� � ����� " << X << endl;
            }
            else {
                cout << "����� " << A << " ������������ � ����� " << X << endl;
            }
            break;
        case 4:
            if (XdoubleA(X, A)) {
                cout << "����� " << A << " ����������� ����� 2 ��� � ����� " << X << endl;
            }
            else {
                cout << "����� " << A << " ����������� �������� 2 ���� � ����� " << X << endl;
            }
            break;
        case 5:
            cout << "����� �� ���������.\n";
            break;
        default:
            cout << "������������ �����. ���������� �����.\n";
        }
    }

    while (choice != 5);

    return 0;
}


