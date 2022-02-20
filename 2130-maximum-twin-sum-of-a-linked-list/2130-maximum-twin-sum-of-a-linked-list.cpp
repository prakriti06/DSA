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
        ListNode* temp = head;
        stack<int> s;
        while(temp){
            s.push(temp->val);
            temp = temp->next;
        }
       
        while(s.size()>s.size()/2){
            ans = max(ans, s.top() + head->val);
            s.pop();
            head = head->next;
        }
        return ans;
    }
};







