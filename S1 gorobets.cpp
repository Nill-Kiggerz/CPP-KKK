#include <iostream>
#include <math.h>


int main() {
    setlocale(LC_ALL, "Russian");
    using namespace std;
    int a;
    float b;
    double c;
    char d,f;
    f='++';

    cout << "введите целое число" "\n";
    cin >> a ;
    cout << "введите дробное число " "\n";
    cin >> b ;
    cout << "введите большое дробное число " "\n";
    cin >> c ;
    cout << "введите символ" "\n";
    cin >> d ;

    cout <<"результат сложения = "<< a + 1 << endl ;
    cout << "результат разности = "<<a - 1  << endl ;
    cout << "результат умножения = "<<a * 2 << endl ;
    cout << "результат деления = " <<a / 2 << endl ;

    cout <<"результат сложения = "<< b + 2.9 << endl ;
    cout << "результат разности = "<<b - 2.9  << endl ;
    cout << "результат умножения = "<<b * 2.9 << endl ;
    cout << "результат деления = " <<b / 2.9 << endl ;

    cout <<"результат сложения = "<< c + 2.9321321321 << endl ;
    cout << "результат разности = "<<c - 2.931231231  << endl ;
    cout << "результат умножения = "<<c * 2.9312312321 << endl ;
    cout << "результат деления = " <<c / 2.931232132131 << endl ;


    cout << "результат сложения = " <<d +f << endl ;


    return 0;
}
