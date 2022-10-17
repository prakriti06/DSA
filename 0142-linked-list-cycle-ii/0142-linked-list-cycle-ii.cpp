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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, bool> chk;
        ListNode* temp = head;
        while(temp){
            if(chk[temp] == true)
                return temp;
            else 
                chk[temp] = true;
            
            temp = temp->next;
        }
        return NULL;
    }
};