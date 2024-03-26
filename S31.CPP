#include <iostream>
#include <cstring>
using namespace std;


int main() {
    setlocale (0,"rus");
    int i;
    string a[10]={"íîëü","îäèí","äâà","òðè","÷åòûðå","ïÿòü","øåñòü","ñåìü","âîñåìü","äåâàÿòü"};
    cout <<"ââåäèòå ÷èñëî îò 0 äî 9"<< endl;
    cin  >> i ;
    cout <<  a[i];


return 0;
}
