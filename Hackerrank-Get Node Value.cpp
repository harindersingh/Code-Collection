/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *temp,*temp2;
    int i,a = 0,b;
    
    for(temp = head;temp != NULL;temp = temp->next)
        a++;
    
    b = a - positionFromTail;
    temp2 = head;
    for(i = 0;i < b-1; i++)
    {
        temp2 = temp2->next; 
    }
    return (temp2->data);
}