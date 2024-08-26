 Node* zigZag(Node* head) {
        bool flag=true;
        if (!head || !head->next) return head;
        Node* curr= head;
        while (curr->next!=NULL){
        if (flag){
            if (curr->data > curr->next->data){
                swap(curr->data,curr->next->data);
            }
        }
        else{
            if (curr->data < curr->next->data){
                swap(curr->data,curr->next->data);
            }
        }
        curr=curr->next;
        flag=!flag;
        }
        return head;
    }