#include <iostream>

using namespace std;



#include <iostream>
#include <cstring>
using namespace std;

void reve(string text){
    setlocale (0,"rus");
    cout << text << endl;
    int len;
    len=text.length();
    string text2=text;
    for  (int i=len;i>=0;i=i-1){
           text2[len-i]=text[i-1];
    }
    cout <<text2<< endl;
  }



int main() {
    string text = "Able was I ere I saw Elba";
    reve(text);

return 0;
}
