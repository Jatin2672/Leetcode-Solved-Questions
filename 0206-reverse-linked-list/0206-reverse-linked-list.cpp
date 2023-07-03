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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode *prev=NULL;
        ListNode *current=head;
        ListNode *forward=head->next;
        
        while(current->next!=NULL){
            current->next=prev;
            
            prev=current;
            current=forward;
            forward=forward->next;
            
        }
        current->next=prev;
        return current;
    }
};