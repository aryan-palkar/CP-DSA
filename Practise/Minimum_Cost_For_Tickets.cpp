// https://leetcode.com/problems/minimum-cost-for-tickets/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int test_case(){
    int n;
    cin>>n;
    vector<int> days(n), costs(3);
    for (int i = 0; i < n; i++)    cin>>days[i];
    for (int i = 0; i < 3; i++)    cin>>costs[i];

    vector<int> dp(days[n-1] + 1);
    
    dp[0] = 0;
    int counter = 0;
    for(int i = 1; i <= days[n-1]; i++){
        if(i == days[counter]){
            counter++;
            dp[i] = min({dp[i-1] + costs[0],
            (i >= 7 ? dp[i-7] + costs[1] : costs[1]),
            (i >= 30? dp[i-30] + costs[2]: costs[2])});
        }else{
            dp[i] = dp[i-1];
        }
    }
    return dp[days[n-1]];
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