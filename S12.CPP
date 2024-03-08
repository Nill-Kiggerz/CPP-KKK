#include <iostream>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int n,a;
    n=0;
    a=0;
       for (int n=1;n<=1000;n=n+4) {
        if ((n%7)==0) {

            a=a+n;
        }
       }
       cout << a;
return 0;
}
