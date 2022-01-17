#include<iostream>
using namespace std;

int main()
{
    string s, word[100];
    getline(cin,s);
    int wordcount = 0;
    for(char c: s){
        if(c != ' ')
            word[wordcount] += c;
        else
            wordcount++;
    }
    int max_count = 0, curr_count = 1;
    if(wordcount>0){
        for(int i = 1; i <= wordcount; i++){
            
            if(word[i-1] == word[i]){
                curr_count++;
            }else{
                curr_count = 1;
            }
            max_count = max(max_count, curr_count);
        }
    }
    cout<<max_count;
    return 0;
}