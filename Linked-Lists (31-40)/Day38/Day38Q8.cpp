class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long n = 0;
        while (head) {
            n = n * 2 + head->val;
            head = head->next;
        }
        return n; 
    }
};
