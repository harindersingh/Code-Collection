/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    Node *curr,*prev,*next;
    curr = head;
    prev = NULL;
    
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    head = prev;
    return head;
    /*Node *p = head;
    if(head->next == NULL)
    {
        head = p;
        return head;
    }
    
    head = Reverse(p->next);
    Node *q = new Node();
    q = p->next;
    q->next = p;
    p->next = NULL;
    return head;
    */
}