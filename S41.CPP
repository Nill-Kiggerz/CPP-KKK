/*S41 (1�) �������� ������� squared_sum(),
 ������� ��������� ��� ������� ����� � ���������� ������� �� �����
 */


#include <iostream>
#include <cstring>
using namespace std;

float sqr_sum(float a,float b){
    return (a+b)*(a+b);


    }

int main() {
    setlocale(0, "Rus");
    float a1 , b1;
    cout << "������� ������� �����" << endl;
    cin >> a1;

    cout << "������� ������� �����"<< endl;
    cin >> b1;

    cout << "������� ����� ��������� ����� = "<<sqr_sum(a1,b1);
return 0;
}

