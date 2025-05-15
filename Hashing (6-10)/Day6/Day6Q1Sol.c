class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        unordered_map<int, int> m;

        for(int i = 0;i < a.size();i++){
            int diff = t - a[i];
            if(m.count(diff))
                return {m[diff], i};
            m[a[i]] = i;
        }
        return {};
    }
};