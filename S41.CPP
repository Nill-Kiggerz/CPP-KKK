/*S41 (1б) Напишите функцию squared_sum(),
 которая принимает два дробных числа и возвращает квадрат их суммы
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
    cout << "введите дробное число" << endl;
    cin >> a1;

    cout << "введите дробное число"<< endl;
    cin >> b1;

    cout << "квадрат суммы введенных чисел = "<<sqr_sum(a1,b1);
return 0;
}

