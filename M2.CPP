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
    cout << "���-�� ������"<<endl;
    cin >>n;
    cout << "����� �������"<<endl;
    cin  >>x;
    pi= 3.1415;
    double grad= 180/pi;
    p=x*n;
    tg=2*tan(180/n*grad);
    a= x/tg;
    s=(a*p)/2;
    cout <<"������� N-��� ��������������= "<<s;
return 0;
}

