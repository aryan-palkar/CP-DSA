#include<iostream>
using namespace std;

int Z(int a)
{
    int zero=-1;
    while (a>0)
    {
        zero++;
        a-=5;
    }
    return zero;
}
int main()
{
    int t;
    cin >> t;
    int a[t];
    for(int i=0; i<t; i++)
    {   
        int b;
        cin>>b;
        a[i]=Z(b);
    }
    for(int i=0;i<t;i++)
    {
        cout>>a[i];
    }
    return 0;
}