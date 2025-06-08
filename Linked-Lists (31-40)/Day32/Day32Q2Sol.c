/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* middle(ListNode* head){
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* aft = head->next;
            head->next = prev;
            prev = head;
            head = aft;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middle(head);
        ListNode* reversedMiddle = reverse(mid);
        ListNode* temp = head;

        while(temp && reversedMiddle){
            if(temp->val != reversedMiddle->val) return false;
            reversedMiddle = reversedMiddle->next;
            temp = temp->next;
        }
        return true;
    }
};