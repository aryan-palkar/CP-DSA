// Didn't complete

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
        
        if(ans < 0){
            for (int i = 5; i < n; i++)
            {
                if(v[i] > 0) ans *= v[i];
            }

            if(ans > 0){
                if(v[4] < 0) ans /= v[4];
                else if(v[3] < 0) ans /= v[3];
                else if(v[2] < 0) ans /= v[2];
                else if(v[1] < 0) ans /= v[1];
                else if(v[0] < 0) ans /= v[0];
            }
        }

        cout<<ans<<"\n";

    }
    
return 0;
}