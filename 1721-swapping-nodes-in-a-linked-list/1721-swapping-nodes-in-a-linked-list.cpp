/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p1 = head, *p2 = head;
        int len = 0;
        while(p1){
            p1 = p1->next;
            len++;
        }
        p1 = head;
        for(int i=1; i<len-k+1; i++){
            p2 = p2->next;
        }
        for(int i=1; i<k; i++){
            p1 = p1->next;
        }
        swap(p1->val, p2->val);
        
        return head;
    }
};