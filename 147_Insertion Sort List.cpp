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
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr)
            return nullptr;
        ListNode* tail = head;
        ListNode* new_head = new ListNode(0);
        new_head->next = head;
        while(tail->next != nullptr)
        {
            ListNode* temp = tail->next;
            if(temp->val >= tail->val)
            {
                tail = temp;
                continue;
            }
            ListNode* trav = new_head;
            while(true)
            {
                if(temp->val < trav->next->val)
                    break;
                trav = trav->next;
            }
            tail->next = temp->next;
            temp->next = trav->next;
            trav->next = temp;
        }
        return new_head->next;
    }
};
