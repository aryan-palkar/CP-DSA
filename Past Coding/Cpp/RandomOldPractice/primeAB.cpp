#include<iostream>
using namespace std;
void prime(int,int);
int main()
{
    int a,b;
    cout<<"give 2 numbers in ascending order"<<endl;
    cin>>a>>b;
    prime(a,b);
    return 0;
    

}

void prime(int a,int b)
{
    for(int i=a+1;i<b;i++){
        int counter=2;
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            else
            {
                counter++;
            }
        }
        if(counter==i){
            cout<<i<<" ";
        }
    }

}