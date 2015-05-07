/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
    {
        //cout<<"\n"<<temp->data<<"\n";
        return temp;
    }
    
    for(Node *t = head; t != NULL; t = t->next)
    {
        if(temp->data < t->data)
        {
            if(t->prev == NULL)
            {
                temp->next = t;
                t->prev = temp;
                head = temp;
                //cout<<"\n"<<head->data<<"\n";
                return head;
            }
            if(t->prev != NULL)
            {
                temp->next = t;
                temp->prev = t->prev;
                t->prev->next = temp;
                t->prev = temp;
                //cout<<"\n"<<head->data<<"\n";
                return head;
            }
        }
        
        if(temp->data > t->data && t->next == NULL)
        {
            
            t->next = temp;
            temp->prev = t;
            //cout<<"\n"<<head->data<<"\n";
            return head;
         }
         else
         {
             continue;
         }
        
    }
    
}