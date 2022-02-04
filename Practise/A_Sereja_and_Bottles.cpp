#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vp[i].first>>vp[i].second;
    }
    
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        bool opened = false;
        for (int j = 0; j < n; j++)
        {
            if(j == i) continue;
            if(vp[i].first == vp[j].second) {
                opened = true;
                break;
            }
        }

        if(!opened){
            ans++;
        }
        
    }
    
    cout<<ans;
return 0;
}