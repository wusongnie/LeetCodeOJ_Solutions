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
    vector<int> v;
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        sort(v.begin(),v.end());
        curr = head;
        int i = 0;
        while(curr){
            curr->val = v[i++];
            curr = curr->next;
        }
        return head;
    }
};
