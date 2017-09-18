/*Write a C program to store N numbers in an array and search particular number.*/

#include<stdio.h>
int main(){
	int i,n,r;	
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	int s[n];
	printf("Enter elements of an array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}		
	printf("Enter the search element:\n");
	scanf("%d",&r);
	for(i=0;i<n;i++){
		if(s[i]==r){
			printf("%d is the %d element in the array.\n",r,(i+1));
			break;			
		}		
	}	
	return(0);
}	
