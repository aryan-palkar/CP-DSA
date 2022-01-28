#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    while(k >= 0){
        int r = n%10;
        if(k >= r+1){
            k -= r+1;
            n /= 10;
        }else{
            n -= k;
            break;
        }
    }
    cout<<n;
    

return 0;
}