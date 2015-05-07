/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    /*Node *temp = new Node();
    for(temp = head;temp->next!=NULL;temp = temp->next);
    
    cout<<temp->data<<endl;
    */
    if(head == NULL)
        return;
    ReversePrint(head->next);
    cout<<head->data<<endl;
}