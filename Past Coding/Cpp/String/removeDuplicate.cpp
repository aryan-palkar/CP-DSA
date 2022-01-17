#include<iostream>
#include<string>
using namespace std;

string removeDup(string str){
    if (str.empty())
        return "";

    char ch = str[0];
    string ans = removeDup(str.substr(1));
    if(ch==ans[0])
        return ans;
    else    
        return (ch+ans) ;
}

int main(){
    string str;
    getline(cin, str);
    cout<<removeDup(str);
    return 0;
}