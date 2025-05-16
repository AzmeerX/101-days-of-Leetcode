class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

       int intVal = 0, n = s.length() - 1;
       for(int i = 0;i < n;i++){
            if(m[s[i]] < m[s[i + 1]]){
                intVal -= m[s[i]];
            } else{ 
                intVal += m[s[i]];
            }
       }
       intVal += m[s[n]];
       return intVal;
    }
};