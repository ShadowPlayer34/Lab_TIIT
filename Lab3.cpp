#include <iostream>
#include <math.h>

using namespace std;
double y,x=1,z,g=0;
int main(){
    for (double i = -5; i < 10; i+=0.01) {

        y = pow(x, 2) - 4 * x - 10;
        z = 2 * x - 4;
        g+=1;
        x = x-y / z;

    }

    cout << x;
}