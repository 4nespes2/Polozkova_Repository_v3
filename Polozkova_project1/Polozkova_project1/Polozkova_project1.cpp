#include <iostream>
#include <string>

using namespace std;

int inputx() {
<<<<<<< HEAD
    
=======
<<<<<<< HEAD
    
=======
<<<<<<< HEAD
  
=======
    int x;
    cout << "������� ����������� ����� X: ";
    cin >> x;
    return x;
>>>>>>> 76eb10703dd6b59128a259afecb28548cf16f929
>>>>>>> 71000e23e75643d8dec1ae6dc48318c231f80a6f
>>>>>>> 2afb8a8d1d086fa3dff4b5287f68bed14ca7326d
}

int inputa() {
    
}

bool XnotinA(int x, int a) {
<<<<<<< HEAD
    
=======
    if (to_string(x).find(to_string(a)) == string::npos) {
        return true;
    }
    else {
        return false;
    }
>>>>>>> 2afb8a8d1d086fa3dff4b5287f68bed14ca7326d
}

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


