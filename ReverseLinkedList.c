/*Given a pointer head to a linked list reverse the linked list and return the address of new head.*/

/*
Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  };
*/
Node* Reverse(Node *head)
{
    Node *pre , *post , *temp = head;
    pre = NULL;
    while(temp!=NULL) {
        post = temp->next;
        temp->next = pre;
        pre = temp;
        temp = post;
    }
    head = pre;
    return head;
    // Complete this method
}