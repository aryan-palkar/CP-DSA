// https://leetcode.com/problems/minimum-cost-for-tickets/

// constraints => days[i] - 10^9
//                days.size - 10^5

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int test_case(){
    int n;
    cin>>n;
    vector<int> days(n), costs(3);
    for (int i = 0; i < n; i++)    cin>>days[i];
    for (int i = 0; i < 3; i++)    cin>>costs[i];

    vector<int> dp(n + 1);

    
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    // cin>>T;
    while(T--){
        cout<<test_case();

    }

return 0;
}