// https://leetcode.com/problems/number-of-good-ways-to-split-a-string/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int n = s.length();

    vector<int> v(26), l(n), r(n);
    
    for(int i=0; i<n; i++){
        v[s[i] - 'a']++;
        
        if(i == 0){
            l[i] = 1;
            continue;
        }
        
        if(v[s[i]- 'a'] == 1){
            l[i] = l[i-1] + 1;
        }else{
            l[i] = l[i-1];
        }
    }

    for(int i = n-1; i >= 0; i--){
        r[i] = l[n-1] - l[i];
    }


    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(l[i] == r[i]){
            ans++;
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout<<l[i]<<" "<<r[i]<<"\n";
    // }
    
    cout<<ans;
return 0;
}