struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node* prev=NULL;
node* curr=head;
node* q;
int counter=k;
while(counter-- && curr!=NULL){
q=curr->next;
curr->next=prev;
prev=curr;
curr=q;
}
if(head!=NULL) head->next=reverse(q,k);
return prev;
}
