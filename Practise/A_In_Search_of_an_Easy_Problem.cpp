#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(temp == 1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
       
return 0;
}