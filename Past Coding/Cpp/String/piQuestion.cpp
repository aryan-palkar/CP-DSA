#include<iostream>
#include<string>
using namespace std;

void pi(string str){

    // base case
    if(str.empty())
        return;
    // normal
    if(str[0]=='p' && str[1]=='i'){
        cout<<3.14;
        pi(str.substr(2, str.length()-2));
    }
    else{
        cout<<str[0];
        pi(str.substr(1, str.length()-1));
    }
}

int main(){
    string str;
    getline(cin, str);
    pi(str);
}