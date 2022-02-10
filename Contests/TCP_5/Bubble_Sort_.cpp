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

    vector<int> sorted(v);
    sort(sorted.begin(), sorted.end());

    int l = 0;
    for(int i=0; i<n; i++){
        if(v[i] == sorted[i] && (i == n-1 || v[i] != v[i+1])){
            l++;
        }
    }

    cout<<l;

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