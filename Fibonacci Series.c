/*Write a C program to generate first 20 Fibonacci number.*/

#include<stdio.h>
int main()
{
int a,b,c,i;
a=0;
b=1;
printf("Fibonacci series:\n");
printf("%d\n%d\n",a,b);
for(i=3;i<=20;i++)
{
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
}
return(0);
}
