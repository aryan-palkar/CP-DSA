#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;

    int ans = 0; 
    if(n % 2 == 0){
        ans = n / 2 + 1;
    }else{
        ans = (n + 1)/ 2;
    }

    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }   
return 0;
}