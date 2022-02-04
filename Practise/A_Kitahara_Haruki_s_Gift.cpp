#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(temp == 100) a++;
        else b++;
    }
    
    bool ans = true;

    if(b % 2 == 1){
        if(a < 2){
            ans = false;
        }
    }

    if(a % 2 == 1) ans = false;

    cout<<(ans ? "YES" : "NO")<<"\n";
return 0;
}