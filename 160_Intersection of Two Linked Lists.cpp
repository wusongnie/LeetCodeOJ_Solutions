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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        while(curr1 != curr2){
            curr1 = curr1? curr1->next:headB;
            curr2 = curr2? curr2->next:headA;
        }
        return curr1;
    }
};
