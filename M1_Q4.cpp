#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int n= src.size();
  string ans;
  
  int i=0;
  while(i<n){
      int count=1;
      while(src[i]==src[i+1]){
          count++;
          i++;
      }
      ans=ans+src[i]+to_string(count);
      i++;
  }
  return ans;
}     
 
