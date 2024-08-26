 Node* divide(Node* head) {
        Node* evenstart=NULL;
        Node* evenend=NULL;
        Node* oddstart=NULL;
        Node* oddend=NULL;
        Node* curr=head;
        while(curr!=NULL){
            int val= curr->data;
                if (val%2==0){
                    if (evenstart==NULL){
                        evenstart=curr;
                        evenend=evenstart;
                    }
                    else{
                        evenend->next=curr;
                        evenend=evenend->next;
                    }
                }
                else{
                    if (oddstart==NULL){
                        oddstart=curr;
                        oddend=oddstart;
                    }
                    else{
                        oddend->next=curr;
                        oddend=oddend->next;
                    }
                }
                curr=curr->next;
            }
            if (oddstart==NULL || evenstart==NULL) return evenstart;
            evenend->next=oddstart;
            oddend->next=NULL;
           return evenstart; 
        }


/*
            OR
    
    Node* divide(Node* head) {
       Node* end=head;
       Node* curr=head;
       Node* prev=NULL;
       while (end->next!=nullptr){
           end=end->next;
       }
       Node* new_end=end;
       while(curr->data%2!=0 && curr!=end){
               new_end->next=curr;
               curr=curr->next;
               new_end->next->next=nullptr;
               new_end=new_end->next;
               
       }
       if(curr->data%2==0){
           head=curr;
           while(curr!=end){
               if (curr->data%2==0){
                   prev=curr;
                   curr=curr->next;
               }
               else{
                   prev->next=curr->next;
                   curr->next=nullptr;
                   new_end->next=curr;
                   new_end=curr;
                   curr=prev->next;
               }
           }
       }
       else{
            prev=curr;   
       }
       if(new_end!=end && end->data%2!=0){
           prev->next=end->next;
           end->next=nullptr;
           new_end->next=end;
       }
       return head;
    }


 */