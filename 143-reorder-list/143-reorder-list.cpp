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
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr)
            return;	
		
		//2nd last node of list
        ListNode *last=head;
        while(last->next->next) 
            last=last->next;
			
        last->next->next=head->next;
        head->next=last->next;
        last->next=nullptr;
        reorderList(head->next->next);
    }
};




