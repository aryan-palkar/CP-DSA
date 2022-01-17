#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans = s;
    for(int i = 0; i < (k+1)/2; i++) ans[k-1-2*i] = s[i];
    if(k%2==1){
        for(int i = (k+1)/2, c = 1; i < k; i++, c++) ans[k-2*c] = s[i];
    }else{
        for(int i = (k+1)/2, c = 0 ; i < k; i++, c++) ans[2*c] = s[i];
        
    }
    for(int i = k; i < n; i++) ans[i] = s[i];
    
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