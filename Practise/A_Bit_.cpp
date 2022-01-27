#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    string s;
    cin>>s;
    return (s[1] == '+' ? n+1 : n-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    int ans = 0;
    while(T--){
        ans = solve(ans);
    }
    cout<<ans;
return 0;
}