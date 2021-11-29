#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double c,b=-1,n=-1;
    cout <<"Введите шаг " <<endl;
    cin >> c;
    for (double x = 0; x <=10; x+=c)
    {
        double y = cbrt(x) +3*sqrt(x) + 2 * x -6-30 * sin(5 * x);
        cout << "x=" <<x<<'\t';
        cout <<"y=" <<y<<endl ;
        if (b*y<0){
            for(double j = x-c; j <=x; j+=c*0.1)
            {
                double y = cbrt(j) +3*sqrt(j) + 2 * j -6-30 * sin(5 * j);
                if (n*y<0){
                    cout << "Пересечение с осью: "<< (j+(j-0.01))/2 << endl;
                 }
                n=y;
            }
        }
    b=y;
    }
}
