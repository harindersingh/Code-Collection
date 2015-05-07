/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *tempa, *tempb;
    
    for(tempa = headA; tempa != NULL;tempa = tempa->next)
    {
        for(tempb = headB; tempb != NULL;tempb = tempb->next)
        {
            if(tempa->data == tempb->data)
                return (tempa->data);
        }
    }
}