/*
Write a program to store N numbers in a sorted array and search particular number using Binary Search , Iterative Approach.
*/

#include<stdio.h>
void main(){
	int i, N, r;
	printf("Enter the size of an array:\n");
	scanf("%d",&N);
	int s[N];
	printf("Enter the sorted array:\n");
	for(i=0;i<N;i++){
		scanf("%d",&s[i]);
	}
	printf("Enter the search element:\n");
	scanf("%d",&r);
	int top=0, bot=N-1, mid;
	mid=(top+bot)/2;
	while(top<=bot){
		if(s[mid]==r){
			printf("%d is at %d position in the array.\n",r,(mid+1));
			break;
		}
		else{
			if(s[mid]>r){
				bot=mid-1;
				mid=(top+bot)/2;
			}
			else{
				top=mid+1;
				mid=(top+bot)/2;
			}
		}
	}
}
