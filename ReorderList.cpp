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
        vector<ListNode*>temp;
        ListNode*prev=head;
        while(prev!=NULL){
            temp.push_back(prev);
            prev=prev->next;
        }
        int i=0;
        int j= temp.size()-1;
        vector<ListNode*>ans;
        while(i<=j){
            if (i==j){
                ans.push_back(temp[i]);
                break;
            }
            ans.push_back(temp[i]);
            ans.push_back(temp[j]);
            i++;
            j--;
        }
        head->next=NULL;
        prev=head;
        for(int i=1;i<ans.size();i++){
            ListNode* node=new ListNode(ans[i]->val);
            prev->next=node;
            prev=prev->next;
        }
        
    }
};