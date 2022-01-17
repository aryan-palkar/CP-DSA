#include<iostream>
#include<vector>
using namespace std;

void permutate(string str, string res){
    int len = str.length();
    // base case
    if(len==0){
        cout<<res<<" ";
        return;
    }
    //recursive case
    for(int i=0; i<len; i++){
        permutate(str.substr(0,i) + str.substr(i+1), res + str[i]);
    }
    return;
}

int main(){
    vector<string> a;
    string str, res;
    cout<<"Enter a string";
    cin>>str;
    permutate(str, res);
    for(int i =0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
}