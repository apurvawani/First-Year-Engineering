/*Write a C program to calculate the sum of all numbers from 1 to 100 that are divisible by 4.*/

#include<stdio.h>
int main()
{
int i,sum=0;
for(i=1;i<=100;i++)
{
	if(i%4==0)
	{
		sum=sum+i;	
	}
}
printf("Sum of numbers divisible by 4 =%d\n",sum);
return(0);
}
