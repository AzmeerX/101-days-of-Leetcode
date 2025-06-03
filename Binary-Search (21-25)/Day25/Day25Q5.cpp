class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, h = n, ans = 0;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            long long s = 1LL * mid * (mid + 1) / 2;

            if (s <= n) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        return ans;
    }
};
