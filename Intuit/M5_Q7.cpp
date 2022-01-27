class Solution {
public:
    
    bool helper(int mid, vector<int>&weights, int days){
        int count=1, sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
            if(sum>mid){
                sum = weights[i];
                count++;
            }
        }
        
        if(count<=days){
            return true;
        }
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int high=0, low=-1, res=0;
        for(int i=0;i<weights.size();i++){
            high = high+weights[i];
            if(low<weights[i]){
                low = weights[i];
            }
        }
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(helper(mid,weights,days)){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return res;
    }
};