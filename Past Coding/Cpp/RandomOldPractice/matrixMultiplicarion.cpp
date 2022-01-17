#include<iostream>
using namespace std;

int main()
{
    //Input
    int p,q,r;

    cout<<"Enter size of matrix \n p*q  and q*r \n input in format of p q r";
    cin>>p>>q>>r;

    int a[p][q] , b[q][r];
    cout<<"Enter first matrix";

    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter second matrix";

        for(int i=0; i<q; i++)
    {
        for(int j=0; j<r; j++)
        {
            cin>>b[i][j];
        }
    }
    //Input End

    int product[p][r];
    //Processing...
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<r; j++)
        {
            //sum
            int sumOfProduct = 0;
            for(int k=0; k<q; k++)
            {
                sumOfProduct += a[i][k] * b[k][j];
            }
            product[i][j] = sumOfProduct;
        }
    }
    
    //Output
    for(int i=0; i<p; i++)
    {
        cout<<"| ";
        for(int j=0; j<r; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"|"<<endl;
    }
    return 0;
}