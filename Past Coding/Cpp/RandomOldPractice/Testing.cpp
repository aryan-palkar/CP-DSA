#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    long long int ans = 0;
	    int x = n/2;
	    for(int c = 1; c <= x; c++){
            cout<<".";
	        for(int b=2*c; b < n; b += c){
	           for(int a = c; a < n; a += b){
	               ans++;
	           }
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}