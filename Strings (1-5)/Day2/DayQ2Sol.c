class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];
        int c = prefix.length();
        
        for(int i = 1;i < strs.size();i++){
            for(int j = 0;j < c;j++){
                if(j >= strs[i].length() || prefix[j] != strs[i][j]){
                    c = j;
                    break;
                }
            }
        }
        return prefix.substr(0, c);
    }
};