/*Write a C program to find factorial of the given number using recursive function.*/

#include<stdio.h>
int factorial(int);
void main(){
	int n, fact=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n<0){
		printf("Factorial of negative numbers is not defined.\n");
	}
	else{
	fact*=factorial(n);
	printf("Factorial of the given number is: %d\n",fact);
	}
}
int factorial(int a){
	int f;
	if(a==1||a==0){
		return(1);
	}
	else{
		f=a*factorial(a-1);
	}
} 
