#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin>>a;

    int count = 0;
    for(char c : a){
        if(c == '4' || c == '7')
            count++;
    }

    if(count == 4 || count == 7) cout<<"YES";
    else cout<<"NO";
return 0;
}