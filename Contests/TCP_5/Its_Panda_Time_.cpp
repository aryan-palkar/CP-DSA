#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test_case(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }


    int ans = (n == 0 ? 0 : 2*n - 1 + v[0]);

    for(int i = 1; i < n; i++){
        ans += abs(v[i] - v[i-1]);
    }
    
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    // cin>>T;
    while(T--){
        test_case();
    }

return 0;
}