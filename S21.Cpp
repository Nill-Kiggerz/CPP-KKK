#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int n,a,c;
     cout << "������� ������ ����� = ";
     cin >> n;
     cout << "������� ������ ����� ������� ������ ������� = ";
     cin >> a;
    fstream file_to_write;
    file_to_write.open("S21.txt");
   for (n=n;n<=a;n=n+1) {
    c=n*3;
    file_to_write <<c<< endl;
    cout<< n;
    }
file_to_write.close();
return 0;
}
