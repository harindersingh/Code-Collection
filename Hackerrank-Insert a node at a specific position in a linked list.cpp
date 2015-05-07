/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(position == 0)
    {
        temp -> next = head;
        head = temp;
        return head;
    }
        
    Node *temp2 = head;
    int i = 0;
    for(i=0 ;i < position-1;i++)
        temp2=temp2->next;
    
    temp->next = temp2->next;
    temp2->next = temp;
    return head;
}