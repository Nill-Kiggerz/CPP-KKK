#include <iostream>

using namespace std;



#include <iostream>
#include <cstring>
using namespace std;

void get_products(int digitals[]){
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (digitals[j] > digitals[j + 1]) {
        int b = digitals[j];
        digitals[j] = digitals[j + 1];
        digitals[j + 1] = b;
      }
    }
  }

  cout << "Отсортированный массив: ";

  for (int i = 0; i < 10; i++) {
    cout << digitals[i] << " "; // выводим элементы массива
  }
}


int main() {
     setlocale (0,"rus");
   int digitals[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
   cout << "Изначальный массив: ";
   for (int j = 0; j < 9; j++) {
    cout <<  digitals[j]<<" ";

   }
   cout << endl;
    get_products(digitals);

return 0;
}




