class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(auto &i : stones)
            pq.push(i);
        
        int diff = 0;
        while(pq.size() != 1 && !pq.empty()){
            int diff = pq.top();
            pq.pop();
            diff -= pq.top();
            pq.pop();
            pq.push(diff);
        }
        if(pq.size() == 1)
            return pq.top();
        return 0;
    }
};