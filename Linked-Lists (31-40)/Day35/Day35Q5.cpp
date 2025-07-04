class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* temp = dummy;

        while(temp && temp->next){
            if(temp->next->val == val){
                temp->next = temp->next->next; 
            } else {
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};