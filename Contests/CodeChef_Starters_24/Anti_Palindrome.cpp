#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v(26);

    for(char c:s){
        v[c - 'a']++;
    }
    string ans(n, 'A');
    int mx = 0;
    for(int i:v){
        mx= max(mx, i);

    }

    if(n % 2 == 1 || mx >= (n+1)/2){
        cout<<"NO\n";
        return;
    }
    
    int start = 0;
    int it = 0;
    for(int i : v){
        if(start + v[i] >= n/2) break;
        
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