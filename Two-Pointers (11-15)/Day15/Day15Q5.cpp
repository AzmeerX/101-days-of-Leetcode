class Solution {
private:
    int sumDigits(int n){
        int sum = 0;
        while(n){
            int ld = n % 10;
            sum += ld * ld;
            n /= 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        int slow = n, fast = sumDigits(n);
        while(fast != slow && fast != 1){
            slow = sumDigits(slow);
            fast = sumDigits(sumDigits(fast));
        }
        return fast == 1;
    }
};