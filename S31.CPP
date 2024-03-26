#include <iostream>
#include <cstring>
using namespace std;


int main() {
    setlocale (0,"rus");
    int i;
    string a[10]={"ноль","один","два","три","четыре","пять","шесть","семь","восемь","деваять"};
    cout <<"введите число от 0 до 9"<< endl;
    cin  >> i ;
    cout <<  a[i];


return 0;
}
