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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp, *prev=nullptr;
        int len = 0;
        for(temp = head; temp!=nullptr; temp = temp->next){
            len++;
        }
        temp = head;
        if(len<n) return head;
        if(len==n){
            head = temp->next;
            delete temp;
        }
        else{
            int i = 1;
            while(i!=len-n+1){
                prev = temp;
                temp = temp->next;
                i++;
            }
            prev->next = temp->next;
            delete temp;
       }
    return head;
    }
};