#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

bool sol()
{
    int size, key;
    cin>>size>>key;
    vector<int> v(size);
    for(int i = 0; i < size; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int sum;
    for(int i = 0; i < size; i++)
    {
        sum = v[i];
        for(int j = i+1; i < size; i++)
        {
            if(binary_search(*(v+i+j+1), *(v+size), key - v[i] - v[j])) return true;
            if(v[i] + v[j] > key) return false;
        }
    }
    return false;
}

int main()
{
   if(sol()){
       cout<<"Found";
   } 
   else{
       cout<<"not found";
   }
}