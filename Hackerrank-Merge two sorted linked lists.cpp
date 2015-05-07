/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
    Node* result = NULL;
 
  /* Base cases */
  if (headA == NULL) 
     return(headB);
  else if (headB==NULL) 
     return(headA);
 
  /* Pick either a or b, and recur */
  if (headA->data <= headB->data) 
  {
     result = headA;
     result->next = MergeLists(headA->next, headB);
  }
  else
  {
     result = headB;
     result->next = MergeLists(headA, headB->next);
  }
  return(result);
}