ListNode* deleteDuplicates(ListNode* head) {
        if (!head ||head->next ==NULL) return head; 
       ListNode* curr=head->next;
       ListNode* prev=head;
       while(curr!=NULL)
       {
        if (curr->val !=prev->val)
        {
            prev->next=curr;
            prev=curr;
            curr=curr->next;
        }
        else{
            prev->next=curr->next;
            delete curr;
            curr=prev->next;
        }
       }
        return head;
    }
};

/*

        OR
 set<int>vis;
        ListNode* curr= head;
        ListNode*prev=NULL;
        while (curr!=NULL )
        {
            if (vis.find(curr->val)!=vis.end()) 
            {
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else
            {
                vis.insert(curr->val);
                prev=curr;
                curr=curr->next;
            }
           
        }
        return head; 
    } */