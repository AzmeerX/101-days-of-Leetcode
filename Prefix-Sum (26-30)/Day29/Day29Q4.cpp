class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2, prefix = 0;

        for(int i = 1;i <= n;i++){
            prefix += i;
            if(sum - prefix + i == prefix)
                return i;
        }
        return -1;
    }
};