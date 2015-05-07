/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node *temp,*prev;
    temp = head;
    prev = NULL;
    int flag = 0;
    
    if(temp == NULL)
    {
        return temp;
    }
    
    while(temp != NULL)
    {
        if(prev == NULL)
        {  
             prev =temp;
            temp = temp->next;
            continue;
        }
        if(temp->data == prev->data)
        {
            flag++;
            prev->next = temp->next;
            prev = temp;
            temp = temp->next;
        }
        else
        {   prev = temp;
            temp = temp->next;
            continue;
        }
    }
    if(flag > 0)
    {
        head = RemoveDuplicates(head);
    }
    return head;
}