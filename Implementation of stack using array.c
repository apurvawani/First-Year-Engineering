/*Write a C program for implementation of stack using array without structure.*/

#include<stdio.h>
int a[100], top=-1;
int pop();
void push(int);
int main(){
	int n, i, c, k, x;
	printf("Enter number of operations:\n");
	scanf("%d",&n);
	printf("Enter:\n0-PUSH\n1-POP\n");
	for(i=0;i<n;i++){
		scanf("%d",&c);
		if(c==0){
			//printf("Enter data:\n");
			scanf("%d",&x);
			push(x);
		}	
		else{
			k=pop();
			if(k==-1){
				printf("Stack is empty!!\nCannot pop more elements.\n");
			}
			else{
				printf("Poped value is: %d\n",k);
			}
		}
	}	
	return(0);
}
void push(int t){
	if(top==99){
		printf("Stack is full!!\nCannot push more elements.\n");
	}
	else{
		a[++top]=t;
	}
}
int pop(){
	if(top==-1){
		return(-1);
	}
	else{
		return(a[top--]);
	}
}
