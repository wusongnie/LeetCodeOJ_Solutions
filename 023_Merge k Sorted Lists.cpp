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
    
    typedef struct{
        bool operator()(const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        }
    }comp;
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode *,vector<ListNode*>,comp> pq;
        for(auto i : lists){
            if(i) 
                pq.push(i);
        }
        if(pq.size() <= 0) 
            return NULL;
        ListNode* res = pq.top();
        pq.pop();
        if(res->next) 
            pq.push(res->next);
        ListNode* tmp = res;
        while(!pq.empty()){
            tmp->next = pq.top();
            pq.pop();
            tmp = tmp->next;
            if(tmp->next) 
                pq.push(tmp->next);
        }
        return res;
    }
};
