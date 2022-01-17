#include<iostream>
#include<vector>
using namespace std;

void BuildSieve(vector<bool> &prime)
{
    int n = prime.size();
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false; // Multiples are marked not prime
            }
        }
    } 
}
int main()
{
    int n; //Number till which prime numbers are required
    cin>>n;
    vector<bool> prime(n+1, true); // All numbers are assummed prime first
    BuildSieve(prime);

    for(int i=2;i<=n;i++)
        if(prime[i] == true)
            cout<<i<<" ";


    return 0;
}
 