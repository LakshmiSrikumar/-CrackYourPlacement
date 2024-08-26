Node* reverse(Node*head){
        Node*prev=NULL;
        Node* next=nullptr;
        Node*curr=head;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(Node* head) {
        if (!head || !head->next) return;
    Node* slow=head;
    Node*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* l2 =reverse(slow->next);
    slow->next=nullptr;
    Node* l1= head;
    while (l2){
        Node* temp1=l1->next;
        Node* temp2= l2->next;
        l1->next=l2;
        l2->next=temp1;
        l1=temp1;
        l2=temp2;
    }
    
    }