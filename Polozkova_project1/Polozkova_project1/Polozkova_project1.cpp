#include <iostream>
#include <string>

using namespace std;

int inputx() {
    int x;
    cout << "������� ����������� ����� X: ";
    cin >> x;
    return x;
}

int inputa() {
    int a;
    cout << "������� ����� A: ";
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


