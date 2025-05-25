class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        while(n){
            c += n % 2;
            n = n >> 1; //divide n by 2
        }
        return c; 
    }

    /*
        Fancy Solution:
            while(n){
                n &= (n - 1);
                c++;
            }
    */
};