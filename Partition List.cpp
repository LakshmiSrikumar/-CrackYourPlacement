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

   ListNode* partition(ListNode* head, int x) {
       ListNode* tempL=new ListNode(0);
       ListNode* tempH=new ListNode(0);
       ListNode* lo=tempL;
       ListNode* hi=tempH;
       ListNode*temp=head;
       while (temp){
            if (temp->val < x){
                tempL->next=temp;
                tempL=tempL->next;
            }
            else{
                tempH->next=temp;
                tempH=tempH->next;
            }
            temp=temp->next;
       }
       delete temp;
       tempL->next=hi->next;
       tempH->next=NULL;
        return lo->next;
    }
};

/ *
   OR



    void insert(ListNode*&head,int val){
        if (head==NULL){
            head=new ListNode(val);
            return;
        }
        ListNode* node = new ListNode(val);
        node->next=head;
        head=node;
    }
    void reverse(ListNode*&head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode*temp;
        while (curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head = prev;
        return;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* res=NULL;
        ListNode* temp1=head;
        while (temp1){
            if (temp1->val<x){
                insert(res,temp1->val);
            }
            temp1=temp1->next;
        }
        ListNode*temp2=head;
        while (temp2){
            if (temp2->val>=x){
                insert(res,temp2->val);
            }
            temp2=temp2->next;
        }
        reverse(res);
        return res;
    }

*/
