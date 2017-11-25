/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  };
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *tempA = headA , *tempB = headB;
    Node *head = NULL , *temp;
    if(headA==NULL) {
        return headB;
    }
    else if(headB==NULL) {
        return headA;
    }
    while(tempA!=NULL && tempB!=NULL) {
        if(tempA->data < tempB->data) {
            Node *newnode = (Node *)malloc(sizeof(Node *));
            newnode->data = tempA->data;
            newnode->next = NULL;
            if(head==NULL) {
                head = newnode;
            }
            else {
                temp = head;
                while(temp->next!=NULL) {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
            tempA = tempA->next;
            if(tempA==NULL){
                newnode->next = tempB;
                break;
            }
        }
        else {
            Node *newnode = (Node *)malloc(sizeof(Node *));
            newnode->data = tempB->data;
            newnode->next = NULL;
            if(head==NULL) {
                head = newnode;
            }
            else {
                temp = head;
                while(temp->next!=NULL) {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
            tempB = tempB->next;
            if(tempB==NULL){
                newnode->next = tempA;
                break;
            }
        }
        /*if(tempA==NULL && tempB!=NULL) {
            Node *newnode = tempB;
            temp->next = newnode;
        }
        else if(tempB==NULL && tempA!=NULL) {
            Node *newnode = tempA;
            temp->next = newnode;
        }*/
    }        
    return head;
   
  // This is a "method-only" submission. 
  // You only need to complete this method 
}