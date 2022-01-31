#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    vector<int> dp(n);

    dp[0] = 0;
    for (int i = 1; i < n; i++){
        int cMin = INT_MAX;
        for (int j = i-1; j >= 0 && j >=  i - k ; j--)
        {
            cMin = min(cMin , dp[j] + abs(v[i] - v[j]));
        }
        dp[i] = cMin;
    }
    cout<<dp[n-1];

return 0;
}