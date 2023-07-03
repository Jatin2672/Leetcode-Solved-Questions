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
        ListNode *temp=head;
        vector <int> arr;
        vector <int> arr2;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=arr.size()-1;i>=0;i--){
            arr2.push_back(arr[i]);
        }
        ListNode *n=new ListNode;
        ListNode *t=n;
        for(int i=0;i<arr2.size();i++){
            n->next=new ListNode(arr2[i]);
            n=n->next;
        }
        return t->next;
    }
};