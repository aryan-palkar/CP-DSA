#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(), v.end(), [](ll a, ll b) {
            return abs(a) > abs(b);
        });

        ll ans = 0;

        if(v[n-1] < 0){
            ans = v[n-1] * v[n-2] * v[n-3] * v[n-4] * v[n-5];
        }

        ans = v[0]*v[1]*v[2]*v[3]*v[4];
        
    }
    
return 0;
}