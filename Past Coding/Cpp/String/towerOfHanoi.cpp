#include<iostream>
using namespace std;

void towerOfHanoi(int n, char start, char dest, char helper){
    if(n==0)
        return;

    towerOfHanoi(n-1, start, helper, dest);
    cout<<"moved from "<<start<<" to "<<dest<<endl;
    towerOfHanoi(n-1, helper, dest, start);
}

int main(){
    towerOfHanoi(4,'a','c','b');
    return 0;
}