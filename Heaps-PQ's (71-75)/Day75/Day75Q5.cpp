class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        int n = nums.size();
        for(int i = 0;i < n;i++){
            pq.push({nums[i], i});

            if(pq.size() > k)
                pq.pop();
        }
        
        vector<int> idx;
        while(!pq.empty()){
            idx.push_back(pq.top().second);
            pq.pop();
        }

        sort(idx.begin(), idx.end());

        vector<int> ans;
        
        for(int i = 0;i < k;i++)
            ans.push_back(nums[idx[i]]);
        return ans;
    }
};