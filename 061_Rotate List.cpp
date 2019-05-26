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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* tail = head;
        int count = 0;
        if(!head)
            return head;
        while(curr->next){
            count++;
            curr = curr->next;
        }
        tail = curr;
        count++;
        if(count <= 1)
            return head;
        k %= count;
        k = count - k - 1;
        tail->next = head;
        curr = head;
        for(int i = 1; i <= k; ++i){
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};
