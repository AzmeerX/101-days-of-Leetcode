class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size(), sum = 0, prefix = 0;
        
        for(int i = 0;i < n;i++){
            sum += nums[i];
        }

        for(int i = 0;i < n;i++){
            int t = prefix;
            prefix += nums[i];
            if(sum - prefix == t)
                return i;
        }
        return -1;
    }
};