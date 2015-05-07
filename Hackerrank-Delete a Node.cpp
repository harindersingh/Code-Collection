/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp = new Node();
    Node *temp2 = new Node();
    temp = head;
    temp2 = head;
    int i;
    if(position==0)
    {
        temp=temp->next;
        return temp;
    }
    for(i=0;i<position;i++)
    {
        temp=temp->next;
    }
    for(i=0;i<position-1;i++)
    {
        temp2=temp2->next;
    }
    temp2->next=temp->next;
    
    return head;
}