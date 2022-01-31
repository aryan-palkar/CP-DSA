#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin>>n;

    for (int i = 0; i < n.length(); i++)
    {
        if(i == 0 && n[0] == '9') continue;

        if(n[i] >= '5'){
            n[i] = '9' - n[i] + '0';
        }
    }

    cout<<n;
    
return 0;
}