class Solution {
public:
    int longestMountain(vector<int>& A) {
        int n = A.size();
        if(n<3)return 0;
        
        int left=0;int right;int m=0;
        
        while(left<n-2){
            while(left<n-1 && A[left]>=A[left+1]) left++;
            right=left+1;
            
            while(right<n-1 && A[right]<A[right+1]) right++;
            
            while(right<n-1 && A[right]>A[right+1]){
                right++;
                m=max(m,right-left+1);
            }
            left=right;
        }
        return m;
    }
};