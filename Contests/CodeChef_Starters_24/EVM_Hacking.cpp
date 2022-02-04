#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;

    int mx = p + q + r;
    if(max({a + b + r, p + b + c, a + q + c}) > (mx)/2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
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