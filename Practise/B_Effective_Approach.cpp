#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {   
        int temp;
        cin>>temp;
        v[temp] = i;
    }
    
    int m;
    cin>>m;

    ll f = 0,b = 0;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin>>q;
        f += v[q];
        b += n + 1 - v[q];
    }

    cout<<f<<" "<<b;
return 0;
}