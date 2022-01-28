#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    cin>>n>>m;
    
    vector<string> input(n);
    for (int i = 0; i < n; i++){
        cin>>input[i];
    }
    
    vector<ll> ansWt(m);
    for (int i = 0; i < m; i++){
        cin>>ansWt[i];
    }
    
    ll ans = 0;

    for (int i = 0; i < m; i++)
    {
        vector<ll> v(5, 0);
        for (int j = 0; j < n; j++)
        {
            v[input[j][i] - 'A']++;
        }

        ans += ansWt[i] * *max_element(v.begin(), v.end());
    }
    
    cout<<ans;
     

return 0;
}