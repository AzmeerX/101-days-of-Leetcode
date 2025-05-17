class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<char> smap(256, 0);
        vector<char> tmap(256, 0);

        for(int i = 0;i < s.length();i++){
            if(smap[s[i]] != 0 && smap[s[i]] != t[i] || 
               tmap[t[i]] != 0 && tmap[t[i]] != s[i]) return false;

            smap[s[i]] = t[i];
            tmap[t[i]] = s[i];
        }
        
        return true;
    }
};