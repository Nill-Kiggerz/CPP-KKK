#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int n;
    n=0;
    string text;
    ifstream in_file("S21.txt");

    while(true){
        n=n+1;
        in_file >>text;
            cout <<n <<"-"<<text<< "\n";

        if (in_file.eof()) { break; }
    }
    in_file.close();

return 0;
}

/*3
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(0,"Russian");
    string text;
    ifstream in_file("OUTPUT3.txt");

    while(true){
        in_file >>text;
        cout << text << "#";
        if (in_file.eof())break;
    }
    in_file.close();
return 0;
}
*/
