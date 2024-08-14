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
        vector<int>pos;
        ListNode *fast=head;
        while(fast!=NULL){
            pos.push_back(fast->val);
            fast=fast->next;
        }
        int n= pos.size();
        int deci=0;
        for(int i=0;i<n;i++){
            deci +=pos[i]*pow(2,n-i-1);
        }
        return deci;
    }
};