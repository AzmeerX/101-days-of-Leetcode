class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0;i < s.length();i += 2 * k){
            int l = i;
            int h = min(i + k - 1, int(s.length()) - 1);
            reverse(s.begin() + l, s.begin() + h + 1);
        }
        return s;
    }
};