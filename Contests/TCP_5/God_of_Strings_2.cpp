#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test_case(){
    int n;
    cin>>n;
    vector<int> v(26);
    for (int i = 0; i < n; i++)
    {
        int temp;
        char ch;
        cin>>ch>>temp;
        v[ch-'a'] = temp;
    }
    
    bool flag = false;
    for(int i:v){
        if(i % 2 == 1){
            if(!flag) flag = true;
            else{
                cout<<"Sad";
                return;
            }
        }
    }

    string ans;
    int index = -1;
    for(int i = 25; i >= 0; i--){
        if(v[i] % 2 == 1){
            index = i;
            for (int j = 0; j < v[i]/2; j++){
                ans += ('a' + i);
            }
            continue;  
        }


        for (int j = 0; j < v[i]/2; j++)
        {
            ans += ('a' + i);
        }  
    }

    string rev = ans;
    reverse(rev.begin(), rev.end());

    if(index != -1){
        ans += (index + 'a');
    }
    ans += rev;

    cout<<ans;
       
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