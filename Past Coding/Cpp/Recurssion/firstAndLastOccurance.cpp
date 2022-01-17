#include<iostream>
using namespace std;

int firstOcc(int a[], int n, int i, int k){
    if(i==n)
            return -1;
   
    if(a[i]==k){
        return i;

    }
    return firstOcc(a, n, i+1, k);
    
}

int lastOcc(int a[], int n, int i, int k){
    
    if(i==n)
        return -1;
   
    int restArr = lastOcc(a, n, i+1, k);
   
    if(restArr != -1){
        return restArr;
    }

    if(a[i]==k)
        return i;
    return -1;
}

int main(){
    int a[5]={1,2,3,4,2};
    cout<<firstOcc(a,5,0,2)<<endl;
    cout<<lastOcc(a,5,0,2);
    return 0;
}