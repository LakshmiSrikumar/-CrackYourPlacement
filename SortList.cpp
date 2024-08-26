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
    ListNode* mid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast= head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        } 
        return slow;
    }
    ListNode* mergesort(ListNode* l1, ListNode* l2){
        ListNode*dummy = new ListNode (0);
        ListNode* curr=dummy;
        while (l1!=NULL && l2 !=NULL){
            if (l1->val < l2->val){
                curr->next = l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if (l1!=NULL) curr->next=l1;
        else curr->next=l2;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* midnode= mid(head);
        ListNode* newnode = midnode->next;
        midnode->next=NULL;
        ListNode* left= sortList(head);
        ListNode* right= sortList(newnode);
        return mergesort(left,right);
    }
};