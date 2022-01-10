
 // } Driver Code Ends

#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(1e6, -1);
class Solution
{
    public:
    long long countWays(int m)
    {
        // your code here
        if(m==0 || m==1){
            dp[m]=1;
            return 1;
        }
        
        if(dp[m]!=-1) return dp[m];
        
        dp[m] = 1+countWays(m-2);
        return dp[m];
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}  // } Driver Code Ends