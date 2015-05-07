/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head != NULL)
        temp->next = head;
    head = temp;
    return head;
    /*if(head->next == NULL)
        return temp;
    
    Node *temp2;
    for(temp2 = head;temp2->next != NULL;temp2 = temp2->next);
    temp2->next=temp;
    return head;
    */
        // Complete this method
}