 Node *reverse(Node *head) {
        Node*curr=head;
        Node*prev=NULL;
        Node*next=NULL;
        while (curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node *compute(Node *head) {
        head=reverse(head);
        Node*maxnode=head;
        Node*curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if (curr->next->data <maxnode->data){
                Node*temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
            else{
                curr=curr->next;
                maxnode = curr;
            }
        }
        head=reverse(head);
        return head;
    }