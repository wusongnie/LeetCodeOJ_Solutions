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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        ListNode* n = curr->next->next;
        bool dup = false;
        while(n){
            n = curr->next->next;
            dup = false;
            while(n && n->val == curr->next->val){
                n = n->next;
                dup=true;
            }
            if(dup){
                curr->next = n;
            }
            else{
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};
