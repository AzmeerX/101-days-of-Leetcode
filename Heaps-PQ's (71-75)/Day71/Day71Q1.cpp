class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        int x = 1;

        for(int i = 0;i < score.size();i++) 
            pq.push({score[i], i});
        
        vector<string> ans(score.size());

        while(!pq.empty()){
            if(x == 1)
                ans[pq.top().second] = "Gold Medal";
            else if(x == 2)
                ans[pq.top().second] = "Silver Medal";
            else if(x == 3)
                ans[pq.top().second] = "Bronze Medal";
            else
                ans[pq.top().second] = to_string(x);
                pq.pop();
                x++;
        }
        return ans;
    }
};