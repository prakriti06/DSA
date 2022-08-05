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
    ListNode* temp;
    bool helper(ListNode* head){
        if(!head) return true;
        bool pal = helper(head->next) and head->val == temp->val;
        temp = temp->next;
        return pal;
    }
    
    bool isPalindrome(ListNode* head) {
        temp = head;
        return (helper(head));
    }
};