class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int l = 1, h = num - 1;

        while(l <= h){
            int mid = l + (h - l) / 2;
            if((long long)mid * mid == num)
                return true;
            else if((long long)mid * mid < num)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return false;
    }
};