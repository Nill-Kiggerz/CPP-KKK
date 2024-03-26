#include <math.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;



int main() {
    setlocale(0,"rus");
    int n,x;
    double s,a,p,tg;
    double pi,s2;
    cout << "кол-во сторон"<<endl;
    cin >>n;
    cout << "длниа стороны"<<endl;
    cin  >>x;
    pi= 3.1415;
    double grad= 180/pi;
    p=x*n;
    tg=2*tan(180/n*grad);
    a= x/tg;
    s=(a*p)/2;
    cout <<"площадь N-ого многоугольника= "<<s;
return 0;
}

