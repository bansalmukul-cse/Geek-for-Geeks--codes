/* Should return true if linked list is circular, else false */
bool isCircular(struct Node *head){
    //code here
    if(head==NULL)
    return true;
    
    struct Node* curr = head;
    
    while(curr->next!=head){
        curr = curr->next;
        if(curr==NULL){
            break;
        }
        
        
        
    }
    
    if(curr==NULL){
        return false;
    }
    else{
        return true;
    }
}
