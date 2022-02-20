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
    ListNode* left = nullptr;
    int ans = 0;
    int maxSum(ListNode* right){
        
        if(!right)
            return 0;
        maxSum(right->next);
        ans = max(ans, left->val + right->val);
        left = left->next;
        return ans;
    }
    
    int pairSum(ListNode* head) {
        left = head;
        return maxSum(head);
    }
};