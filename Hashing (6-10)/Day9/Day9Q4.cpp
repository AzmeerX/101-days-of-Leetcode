class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        unordered_map<int, int> m;
        int c = 0;

        for(int i = 0;i < a.size();i++){
            if(m.count(a[i]))
                c += m[a[i]];
            m[a[i]]++;
        }
        return c;
    }
};