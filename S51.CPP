#include <iostream>
#include <cstring>
using namespace std;


int main() {
    setlocale (0,"rus");
    string text = "Able was I ere I saw Elba";
    int len;
    len=text.length();
    string text2=text;
    string a,b,c;



    for  (int i=len;i>=0;i=i-1){
           text2[len-i]=text[i-1];
    }
cout <<text2<< endl;
return 0;
}
