#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }    
        cout<<endl;
    }

    for(int i=n;i>=1;i--){

        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }    
        cout<<endl;
    }
    return 0;
}