class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, prefix = 0;
        for(auto i : nums)
            sum += i;
        
        for(int i = 0;i < nums.size();i++){
            int t = prefix;
            prefix += nums[i];
            if(sum - prefix == t)
                return i;
        }
        return -1;
    }
};