/*Write a C program to find the factorial of given number using both non-recursive function.*/

#include<stdio.h>
void main(){
	int i, n, fact=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("Factorial of the given number is: %d\n",fact);
}
