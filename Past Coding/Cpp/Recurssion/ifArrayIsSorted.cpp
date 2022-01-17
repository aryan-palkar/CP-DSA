#include<iostream>

using namespace std;

bool checkSort(int a[], int n)
{
    if(n==1)
        return true;
    
    bool restArray = checkSort(a+1, n-1);
    return (a[0]<a[1] && restArray);
        
}

int main()
{
    int a[5]={1,6,3,4,5};
    cout<< checkSort(a, 5);
}