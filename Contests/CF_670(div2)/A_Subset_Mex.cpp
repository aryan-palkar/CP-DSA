#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(102, 0);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            a[temp]++;
        }
        
        bool a1 = false;

        int ans = 0;

        for (int i = 0; i <= 100; i++)
        {
            if(a[i] == 1 && !a1){
                ans += i;
                a1 = true;
            }
            else if(a[i] == 0){
                ans += (a1 ? i : 2*i);
                break; 
            }
        }
        cout<<ans<<endl;
    }
return 0;
}