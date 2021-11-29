#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y,S,t=0,Sh=0,Sr=0,S1,j;
    int a[13]={8,5,9,0,7,2,1,0,0,1,2,0,9};
/*
    for (int i = 0; i < 13; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> a[i];
    }
*/
    for (int r = 0; r < 12; r++) {
        if (r % 2!=0 && r!=12){
            Sr+=a[r];

        }
    Sh=0;
    for (int f = 0; f < 12; f++) {
        if (f % 2==0){
            Sh+=a[f];
        }
    }


    }

    cout << Sr << "\n";
    cout << Sh << "\n";
    S1=Sr*3;
    S=S1+Sh;
    y=S%10;
    j=10-y;
    cout << j << "\n";
    if (j==a[12])
        cout << "Штрих-код верный";
    else cout << "Штрих-код неверный";
}
