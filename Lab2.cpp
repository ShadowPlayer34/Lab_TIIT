#include <iostream>
#include <cmath>
using namespace std;

double integral( double x)
{
    return (x)/1+pow(x, 2);

}
double CalcIntegral( double a,  double b, int n) {

    double result = 0.0,

            h = (b - a) / n;

    for (int i = 0; i < n; i++) {
        result += integral(a + h * (i + 0.5));
    }

    result *= h;
    return result;

}
int main(){
    int n;
    cout << "Введите частоту: ";
    cin >> n;
    cout << "При разбиении на " << n << " отрезков, интеграл равен: ";
    cout << CalcIntegral(1, 2, n);
}