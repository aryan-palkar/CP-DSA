

// COMPARISON 
// works same as a dictionary

// + OPERATOR
// When we mix strings and string or character literals, at least one operand to each + operator must be of string type
/* string s4 = s1 + ", ";  ok: adding a string and a literal
   string s5 = "hello" + ", ";  error: no string operand
    string s6 = s1 + ", " + "world";  ok: each + has a string operand
    tring s7 = "hello" + ", " + s2;  error: can't add string literals*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1("str");
    string s2("phrase");

    // if(s1>s2)
    //     cout<<"first is bigger";
    // if(s1<s2)
    //     cout<<"second is bigger";
    // if(s1==s2)
    //     cout<<"both are equal";

    // auto len = s1.length();
    // cout<< len;
    return 0;
}


