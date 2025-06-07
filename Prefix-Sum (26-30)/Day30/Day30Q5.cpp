class Solution {
public:
    int maxScore(string s) {
        int n = s.length(), total_ones = 0;
        int zero = 0, ans = 0, ones = 0;

        for(auto i : s){
            if(i == '1')
                total_ones++;
        }

        for(int i = 0;i < n - 1;i++){
            if(s[i] == '0')
                zero++;
            else
                ones++;
            ans = max(ans, total_ones + zero - ones);
        }
        return ans;
    }
};