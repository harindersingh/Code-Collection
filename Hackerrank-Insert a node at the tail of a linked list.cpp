/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
/*Node *a=new Node();
a->data=NULL;
a->link=NULL;
*/
Node* Insert(Node *head,int data)
{
    /*Node *tail=new Node();
    tail->data=data;
    tail->next=NULL;
    if(head->next==NULL)
    {
        //a=tail;
        head=tail;
    }
    else
    {
        Node *tail2=new Node();
        tail2->data=data;
        tail2->next=NULL;
    
        tail->next=tail2;
        tail=tail->next;
    }
    return head;
    */
    
   Node *temp = new Node();
   temp->data = data;
   temp->next = NULL;
   if(head == NULL) 
   {
       return temp;
   }
   Node *temp1;
   for(temp1 = head;temp1->next!=NULL;temp1= temp1->next);
   temp1->next = temp;
        return head;
  // Complete this method
}