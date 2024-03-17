#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int A[10][10];
    int d,n,i,j;
    n=0;
    d=0;
        for (i=1;i<=9;i=i=i+1)
            {
                d=d+1;
            for (j=0;j<=9;j=j+1)
            {

                n=(n+1);
                A[i][j]=n*d;
                /*

                if( (i<5)  and (j>2)){
                    cout << A[i][j] << ' ';
                }
                else {
                    cout << A[i][j]<< ' ';
                }

                  */
            cout << A[i][j] << "\t";

            }
          n=0;
         cout << endl;
        }


return 0;
}
