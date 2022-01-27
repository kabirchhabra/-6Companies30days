class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        int sum =0;
        int mx = -1;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            if(nums[i] > mx)
                mx = nums[i];
        }
        
        int start = mx;
        int end = sum;
        int res = -1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(isValid(nums, n, m, mid)) {
                res = mid;
                end = mid-1;
            }
            else start = mid+1;
        }
     return res;
    }
    
    bool isValid(vector<int> nums, int n, int m, int mid) {
        int partitions = 1;
        int sum = 0;
        for(int i=0; i<n;i++) {
            sum += nums[i];
            if(sum > mid) {
                partitions++;
                sum = nums[i];
            }
            if(partitions > m) return false;
        }
        return true;
    }
};