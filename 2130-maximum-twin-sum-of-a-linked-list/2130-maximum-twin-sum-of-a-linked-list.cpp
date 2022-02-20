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
    int pairSum(ListNode* head) {
        int ans = 0;
        ListNode* fast = head, *slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        stack<int> s;
        while(slow){
            s.push(slow->val);
            slow = slow->next;
        }
       
        while(!s.empty()){
            ans = max(ans, s.top() + head->val);
            s.pop();
            head = head->next;
        }
        return ans;
    }
};







