/*Write a C program to store N numbers in an array and reverse the elements of the array.*/

#include<stdio.h>
int swap(int *,int *);
int main(){
	int i,N;
	printf("Enter the size of the array:\n");
	scanf("%d",&N);
	int s[N];
	printf("Enter the elements of the array:\n");
	for(i=0;i < N;i++){
		scanf("%d",&s[i]);
	}
	for(int k=0;k<N/2;k++){
		swap(&s[k],&s[N-1-k]);		
	}	
	printf("Reversed Array:\n");
	for(i=0;i < N;i++){
		printf("%d\n",s[i]);
	}
	return(0);
}
int swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}







/*#include<stdio.h>
int main(){
	int i,N;
	printf("Enter the size of the array:\n");
	scanf("%d",&N);
	int s[N];
	printf("Enter the elements of the array:\n");
	for(i=0;i < N;i++){
		scanf("%d",&s[i]);
		//printf("%d",i);
	}
	printf("Reversed Array:\n");
	for(i=N-1;i>=0;i--){
		printf("%d\n",s[i]);	
	}
	return(0);
}*/


