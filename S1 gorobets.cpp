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

    cout << "������� ����� �����" "\n";
    cin >> a ;
    cout << "������� ������� ����� " "\n";
    cin >> b ;
    cout << "������� ������� ������� ����� " "\n";
    cin >> c ;
    cout << "������� ������" "\n";
    cin >> d ;

    cout <<"��������� �������� = "<< a + 1 << endl ;
    cout << "��������� �������� = "<<a - 1  << endl ;
    cout << "��������� ��������� = "<<a * 2 << endl ;
    cout << "��������� ������� = " <<a / 2 << endl ;

    cout <<"��������� �������� = "<< b + 2.9 << endl ;
    cout << "��������� �������� = "<<b - 2.9  << endl ;
    cout << "��������� ��������� = "<<b * 2.9 << endl ;
    cout << "��������� ������� = " <<b / 2.9 << endl ;

    cout <<"��������� �������� = "<< c + 2.9321321321 << endl ;
    cout << "��������� �������� = "<<c - 2.931231231  << endl ;
    cout << "��������� ��������� = "<<c * 2.9312312321 << endl ;
    cout << "��������� ������� = " <<c / 2.931232132131 << endl ;


    cout << "��������� �������� = " <<d +f << endl ;


    return 0;
}
