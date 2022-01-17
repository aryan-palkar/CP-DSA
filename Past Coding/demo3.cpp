#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        m[temp]++;
    }

    int ans = 0;
    int spare = 0;

    for(auto it = m.rbegin(); it != m.rend(); it++){
        if(spare >= it->second){
            ans += it->second;
        }else{
            ans += spare;
            spare = it->second;
        }
    }
    cout<<ans; 
}

int main(){
    solve();
return 0;
}