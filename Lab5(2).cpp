#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int  S, y, Sh, Sr, S1, j, f;
    int a[13];

    for (int i = 0; i < 13; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> a[i];
    }
    cout << "Введите номер положения, где хотите удалить цифру в штрихкоде: ";
    cin >> f;
    cout << "\n";
    f=f-1;
    a[f]=0;

    for (int z = 0; z < 10; ++z) {
        Sr=0;
        for (int r = 0; r < 12; r++) {
            if (r % 2 != 0 && r != 12) {
                Sr += a[r];

            }
            Sh = 0;
            for (int f = 0; f < 12; f++) {
                if (f % 2 == 0) {
                    Sh += a[f];
                }
            }


        }
        S1 = Sr * 3;
        S = S1 + Sh;
        y = S % 10;
        j = 10 - y;
        if (j == a[12]) {
            for (int i = 0; i < 13; ++i) {
                cout << a[i] << "\t";
            }
            cout << "\nШтрих-код верный\n";

        }

        a[f]=a[f]+1;
        j=0;
        y=0;
        S=0;
        S1=0;
    }
}