#include<iostream>
using namespace std;

void repeatingElement()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int MAX=1000000;
    int idx[MAX];
    for(int i=0; i=MAX; i++)
        idx[i]=-1;

    for(int i=0; i<n; i++)
    {
        if(idx[a[i]]==1)
        {
            cout<<"yes";
            return;
        }
        else
        {
            idx[a[i]]=1;
        }
        
    }   

}

int main()
{
    int T;
    cin>> T;
    for(int i=0; i<T; i++)
        repeatingElement();
    return 0;
}