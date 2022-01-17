#include <iostream>
using namespace std;

int main()
{
    int count,n,i,j;
    cin>>n;
    count=0;
    if(n%2==0){
        count=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n){
            cout<<"*";
            
        }
        else{
            cout<<" ";
        }
        if(i==(n/2)){
            cout<<"*";
        }
        }
        
        cout<<endl;
    }
return 0;
}