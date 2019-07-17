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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode dummy(-1);
        ListNode* cur = &dummy;
        cur->next = head;
        
        int cnt = 1;
        while (cnt < m) {
            cnt++;
            cur = cur->next;
        }
        // 1->2->3->4->5->NULL
        cnt = 0;
        ListNode* node = cur->next;
        
        while (cnt < n - m) {
            ListNode* next = node->next; 
            node->next = next->next;
            next->next = cur->next;
            cur->next = next;
            cnt++;
        }
        return dummy.next;
    }
};
