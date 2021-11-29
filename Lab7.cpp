#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int p,q,e,d,n=0,l,c1,c2=0,c3=0,m1=0,m2=0,m3=0,o;
    int surname[5]={1,2,3,4,5};
    string srname[5]={"х","д","к","у","и"};
    cout << "\nВвести p: ";
    cin >> p;
    cout << "Ввести q: ";
    cin >> q;
    n = p * q;
    l = (p - 1) * (q - 1);
    cout << "n: "<< n << "\t" << "l: " << l << "\n";
    cout << "Выбрать взаимно простое число числу " << l << ": ";
    cin >> d;
    cout << "Ввести число e: ";
    cin >> e;
    if (int ((e*d)%l==1)){

    }
        else{
            cout << "Введите другое число: ";
            cin >> e;
        }
    c1= int (pow(surname[0],e))%n;
    c2= int(pow(surname[3],e))%n;
    c3= int (pow(surname[1],e))%n;
    cout << c1 << "\t" << c2 << "\t" << c3 << "\n";
    m1= int (pow(c1,d))%n;
    m2= int (pow(c2,d))%n;
    m3= int (pow(c3,d))%n;
    cout << m1 << "\t" << m2 << "\t" << m3 << "\n";
    cout << srname[m1-1] << srname[m2-1] << srname[m3-1] << srname[4] << srname[2];
}
