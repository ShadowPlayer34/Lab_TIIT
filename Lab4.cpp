#include <iostream>
#include<cmath>
using namespace std;
int main() {
   double x[]={-1,1,3};
   double y[]={-9,-2,14};
   double f,fx,fx1,d,z;
   f=(y[1]-y[0])/(x[1]-x[0]);
   fx=(y[2]-y[1])/(x[2]-x[1]);
   fx1=(fx-f)/(x[2]-x[0]);
   cout << f <<"\n"<< fx << "\n" << fx1;
   d=(9.0/8.0)* pow(5,2)+(7.0/2.0)*5-(53.0/8.0);
   z=(9.0/8.0)* pow(7,2)+(7.0/2.0)*7-(53.0/8.0);
   cout << "\n" << d << "\n" << z;
}
