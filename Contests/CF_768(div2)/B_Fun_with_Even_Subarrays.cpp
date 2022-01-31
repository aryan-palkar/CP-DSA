#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int ans = 0;
        reverse(v.begin(), v.end());
        for (int i = 1; i < n;)
        {
            if(v[i] != v[0]){
                // cout<<"i:"<<i;
                ans++;
                i = 2*i;
            }else{
                i++;
            }
        }
        

        cout<<ans<<"\n";
        
    }
return 0;
}