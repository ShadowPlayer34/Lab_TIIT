#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a=2,p,x,x1,f,z,i,y;
    cout << "Введите ключ: ";
    cin >> p;
    cout<<"Введите число меньше или равно " << p << ": ";
    cin >> x;
    y= int (pow(a,x))%p;
    cout << "Введите ключ: ";
    cin >> p;
    cout<<"Введите число меньше или равно " << p << ": ";
    cin >> x1;
    i= int (pow(a,x1))%p;
    f= int (pow(y,x1))%p;
    z= int (pow(i,x))%p;
    cout << f << "\n" << z;
    if (z==f){
        cout << "\nКлюч верен";
    }
    else
    {
        cout << "\nНе лезь в чужие файлы!!!";
    }
}
