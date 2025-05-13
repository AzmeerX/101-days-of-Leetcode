class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> wordmap(26, "");
        unordered_map<string, char> chmap;
        int i = 0, n = s.length();

        for (char ch : pattern) {
            if (i >= n) return false; 

            string t = "";
            while (i < n && s[i] != ' ') t += s[i++];
            i++; 

            if (chmap.count(t) && chmap[t] != ch) return false;
            else chmap[t] = ch;

            int idx = ch - 'a';
            if (!wordmap[idx].empty() && wordmap[idx] != t) return false;
            else wordmap[idx] = t;
        }
        return i >= n;
    }
};
