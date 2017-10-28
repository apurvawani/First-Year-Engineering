/*Implementation of LinkList using Structure.*/

#include<stdio.h>
#include<stdlib.h>
struct linkList {
	int data;
	struct linkList *link;
};
int main() {
	struct linkList *firstNode = (struct linkList *)malloc(sizeof(struct linkList));
	struct linkList *head;
	struct linkList *temp;
	printf("Enter data:\n");
	scanf("%d", &firstNode->data);
	firstNode->link = NULL;
	head = firstNode;
	temp = head;
	char c;
	printf("Want to add more nodes? If yes enter 'y' else enter 'n'.\n");
	scanf(" %c",&c);
	while(c=='y') {
		struct linkList *newNode = (struct linkList *)malloc(sizeof(struct linkList));
		 printf("Enter data:\n");
		 newNode->link = NULL;
		 scanf("%d",&newNode->data);
		 temp->link = newNode;
		 temp = temp->link;
		 printf("Want to add more nodes? If yes enter 'y' else enter 'n'.\n");
		 scanf(" %c",&c);
	}
	temp =head;
	while(temp!=NULL) {
		printf("%d\n",temp->data );
		temp = temp->link;
	}
	return 0;
}
