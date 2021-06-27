struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    struct Node* p = head;
    struct Node* r = NULL ;
    struct Node* q = NULL ;
    
    while(p != 0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    head =q;
    return q;
}
