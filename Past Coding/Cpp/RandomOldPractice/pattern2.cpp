#include<iostream>
using namespace std;

int main() {
    int n,f=0;
    cout << "upto :"; cin >> n;
    for (int c =1 ; c <= (n*2)-1 ; c++) {
        if (c <= n) { f++; } else { f--; }
        int a,m=n;
        /* start */
        for (a = 1; a <= f; a++) {
            cout << m-- << " ";
        }
        /* Middle */
        int t = (n*2)+1;
        for(int b = 1 ; b <= t -a -f ; b++) cout << m+1 << " ";
        /* End */
        m++;
        for (a =1 ; a < f ; a++) {
            cout << ++m << " ";
        }
        cout << endl ;
    }
    return 0;
}