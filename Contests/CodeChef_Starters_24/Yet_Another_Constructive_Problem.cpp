#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int temp = n;
    int t = 1;
    int ans = 1;
    
    while(temp > 1){
        temp /= 2;
        t *= 2;
        ans += t;
    }
    if(n == 1) cout<<"0 1 3\n";
    else if(n == ans) cout<<1<<" "<<n-1<<" "<<n<<"\n";
    else cout << 0 << " " << n << " "<<ans<<"\n";

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