#include <iostream>

using namespace std;

int main() {
    int num;
    int a = 0, b = 1, sum = 0;

    cout << "�� �ױ��� ���ұ��: ";
    cin >> num;

    cout << "0 1 ";

    for (int i = 0; i < num - 2; i++) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}