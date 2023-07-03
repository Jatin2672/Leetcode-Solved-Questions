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
    int getDecimalValue(ListNode* head) {
        vector<int> arr;
        vector<int> arr2;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        for(int i=arr.size()-1;i>=0;i--){
            arr2.push_back(arr[i]);
        }
        int ans=0;
        for(int i=0;i<arr2.size();i++){
            ans = ans+(pow(2,i)*arr2[i]);
        }
        return ans;
    }
};