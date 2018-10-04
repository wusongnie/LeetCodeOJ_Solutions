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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        if(curr == NULL || curr->next == NULL)
            return head;
        head = curr->next;
        ListNode* prev = new ListNode(0);
        prev->next = head;
        while(curr!= NULL && curr->next != NULL){
            ListNode*temp = curr->next;
            curr->next = curr->next->next;
            temp->next = curr;
            prev->next = temp;
            prev = prev->next->next;
            curr = curr->next;
        }
        return head;
    }
};
