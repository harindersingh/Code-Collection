/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node *temp1,*temp2,*temp3,*temp4;
    int a,b;
    a = b = 0;
    temp1 = headA;
    temp2 = headB;
    temp3 = headA;
    temp4 = headB;
    while(temp1!=NULL)
    {
        a++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL)
    {
        b++;
        temp2 = temp2->next;
    }
    if(a == b)
    {
    
    for(int i=0;i < a;i++)
    {
        if(temp3->data == temp4->data)
        {
            temp3 = temp3->next;
            temp4 = temp4->next;
        }
        else
           return 0;
    }
    return 1;
    }
    else
        return 0;
}