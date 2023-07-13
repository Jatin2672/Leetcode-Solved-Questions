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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=new ListNode(-1);
        temp->next=head;
        ListNode *n=temp;
        while(n->next!=nullptr){
            if(n->next->val==val){
                n->next=n->next->next;
                
            }
            else{
                n=n->next;
            }
        }
        return temp->next;
    }
};