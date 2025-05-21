class Solution {
private:
    bool check(string s, int l, int h){
        while(l < h){
            if(s[l++] != s[h--])
                return false;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int l = 0, h = s.length() - 1;
        while(l < h){
            if(s[l] != s[h])
                return check(s, l + 1, h) || check(s, l, h - 1);
            l++;
            h--;
        }
        return true;
    }
};