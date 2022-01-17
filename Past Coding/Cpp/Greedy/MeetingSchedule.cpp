#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;


class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> vp(n);
        for(int i = 0; i < n; i++)
            vp[i] = {end[i], start[i]};
        
        sort(vp.begin(), vp.end(), greater<int>());
        int count = 1;
        int currEnd = vp[0].first;
        for(int i = 1; i < n; i++){
            if(vp[i].second >= currEnd){
                count++;
                currEnd = vp[i].first;
            }
        }
        return count;
    }
};

int main(){
    int N = 6;
    int S[] = {1,3,0,5,8,5};
    int F[] = {2,4,6,7,9,9};
    Solution ob;
    int ans = ob.maxMeetings(S, F, N);
    cout<<ans;
}


