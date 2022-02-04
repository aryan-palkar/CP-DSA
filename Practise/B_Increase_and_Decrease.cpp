// https://codeforces.com/problemset/problem/246/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        sum += temp;
        sum %= n;
    }

    if(sum == 0){
        cout<<n;
    }else{
        cout<<n-1;
    }
    
return 0;
}