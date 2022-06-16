class Solution{
  public:
    //Function to check whether the list is palindrome.
     struct Node* reverseList(struct Node *head){
       Node* cur=head;
       Node* prv=NULL;
       Node* nextptr;
       while(cur!=NULL){
           nextptr=cur->next;
           cur->next=prv;
           prv=cur;
           cur=nextptr;
       }
       return prv;
   }
   struct Node* middle(struct Node *head){
       Node* slow=head;
       Node* fast=head;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
   bool isPalindrome(Node *head)
   {
       //Your code here
       if(head==NULL){
           return true;
       }
       Node* mid=middle(head);
       Node* last=reverseList(mid);
       Node* curr=head;
       while(last!=NULL){
           if(last->data!=curr->data){
               return false;
           }
           last=last->next;
           curr=curr->next;
       }
       return true;
    }
};
