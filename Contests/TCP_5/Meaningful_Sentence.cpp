#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test_case(){
    int n,m;
    string s;
    cin>>n>>s>>m;

    vector<bool> visited(n, false);
    vector<string> vs(m);
    for (int i = 0; i < m; i++){
        cin>>vs[i];
    }

    for(string str: vs){
        for (int i = 0; i < n - str.length() + 1;){
            if(visited[i] == true){
                continue;
            }

            if(s.substr(i, str.length()) == str){
                for (int j = i; j < i + str.length(); j++){
                    visited[j] = true;
                }  
            }
        }
    }

    for(bool b: visited){
        if(b == false){
            cout<<"NO";
            return;
        }
    }
    
    cout<<"YES";
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