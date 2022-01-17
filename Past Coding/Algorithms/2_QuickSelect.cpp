#include<bits/stdc++.h>
using namespace std;

int partiton(int a[], int l, int r){
    int pivot = a[r];
    int i = l-1;
    for (int j = l; j < r; i++)
    {
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

void kthSmallest(int a[], int l, int r, int k){
    
    if(l < r || r-1 == k || l+1 == k){
        int pi = partiton(a, l, r);
        
        if(pi < k) kthSmallest(a, l, pi - 1, k);
        else if( pi > k) kthSmallest(a, pi + 1, r, k - pi);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[5] = {5, 3, 4, 1, 2};
    int k = 2;
    int n = 5;
    kthSmallest(a, 0, n-1, --k);
    cout<<a[k];
return 0;
}