#include<iostream>
using namespace std;

void number(int n){

    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    number(n-1);
    
    return;
}

int main(){

    int n;
    cin>>n;
    number(n);
    return 0;
}