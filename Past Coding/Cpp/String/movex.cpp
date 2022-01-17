#include<iostream>
#include<string>
using namespace std;

string movex(string str){
    if(str.empty())
        return "";
    char ch = str[0];
    string ans = movex(str.substr(1));
    if(str[0]=='x')
        return ans+'x';
    else
        return (ch+ans); 
}

int main(){
    string str;
    getline(cin, str);
    cout<<movex(str);
    return 0;
}