#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int x,y;
    cin>>x>>y;


    int ans = x + y;

    if(x == y) ans--;
    
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