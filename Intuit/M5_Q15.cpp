class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int n = piles.size();
        int k = high;
        
        if(n == h) 
            return high;
        
        while(low <= high) {
            int mid = low + (high-low)/2;
            
            if(isValid(piles,n,h,mid)) {
                k = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return k;
    }
    
    
    bool isValid(vector<int> piles, int n, int h, int mid) {
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += piles[i]/mid;
            if(piles[i]%mid) sum++;
        }
        return sum <= h;
    }
};