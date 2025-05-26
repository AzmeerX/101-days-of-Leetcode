class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        long long ans = 1;

        while(ans <= n){
            if(ans == n) return true;
            ans *= 2;
        }
        return false;
    }

    /* Fancy Solution
        return n > 0 && (n & (n - 1)) == 0;  
    */ 
};