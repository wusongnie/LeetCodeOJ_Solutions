/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* target = dummy;
        int count = 0;
        while(curr != NULL){
            count++;
            if(count > n){
                target = target->next;
            }
            curr = curr->next;
        }
        if(target->next == head)
            head = target->next->next;
        target->next = target->next->next;
        
        return head;
        
    }
};
