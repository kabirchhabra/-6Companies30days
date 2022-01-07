#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<int> q;
		    unordered_map<char, int> mp;
		    
		    for(int i=0;i<A.length();i++){
		        mp[A[i]-'a']++;
		        if(mp[A[i]-'a']==1) q.push(A[i]);
		        
		        while(!q.empty() && mp[q.front()-'a']!=1) q.pop();
		        
		        if(q.empty()) A[i]='#';
		        else A[i] = q.front();
		    }
		    
		    return A;
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends