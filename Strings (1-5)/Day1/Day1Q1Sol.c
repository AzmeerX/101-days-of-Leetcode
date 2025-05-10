int strStr(string haystack, string needle) {
        for(int i = 0;i < haystack.length();i++){
            if(needle[0] == haystack[i]){
                int t = i + 1, j;
                for(j = 1;j < needle.length();j++){
                    if(haystack[t] != needle[j])
                        break;
                    t++;
                }
                if(j == needle.length()) return i;
            }
        }
        return -1;
    }