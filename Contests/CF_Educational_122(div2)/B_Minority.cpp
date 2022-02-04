#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a0 = 0, a1 = 0;
        for(char c : s){
            if(c == '0'){
                a0++;
            }else{
                a1++;
            }
        }

        if(a0 == a1){
            cout<< a0 - 1;
        }else{
            cout<< (a0 > a1 ? a1 : a0);
        }
        cout<<"\n";
    }   
return 0;
}