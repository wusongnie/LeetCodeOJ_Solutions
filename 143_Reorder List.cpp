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
    void reorderList(ListNode* head) {
        if(!head)
            return;
        vector<ListNode*> list;
        auto curr = head;
        while(curr != NULL){
            list.push_back(curr);
            curr = curr->next;
        }
        int r = list.size() - 1;
        int l = 0;
        bool choose = true;
        
        while(l < r){
            if(choose)
                list[l++]->next=list[r];
            else
                list[r--]->next=list[l];
            choose=!choose;
        }
        
        list[l]->next=NULL;
    }
};
