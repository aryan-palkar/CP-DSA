#include<iostream>
using namespace std;
#define MAX 100
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int idx[MAX];
    for(int i=0; i<MAX ;i++)
    {
        idx[i]=-1;
    }

    for(int i=0; i<n; i++)
    {
        idx[a[i]]=1;
    }

    int counter = 0;
    for(int i = 0; i< MAX; i++)
    {
        if(idx[i]==1)
        counter++;

        if(counter == k)
        {
            cout<<i;
            break;
        }
    }

    return 0;
}

