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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* temp = head;
        while(temp){
            s.push(temp);
            temp = temp->next;
        }
        int n = s.size();
        ListNode* left = head;
        for(int i=0; i<n/2; i++){
            ListNode* right = s.top(); 
            s.pop();
            right->next = left->next;
            left->next = right;
            left = left->next->next;
        }
        left->next = nullptr;
    }
};




