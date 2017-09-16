/*Write a c program to check whether input number is prime or not.*/

#include<stdio.h>
#include<math.h>
int main()
{
int num,i,r;
printf("Enter any integer:");
scanf("%d",&num);
double k;
k=pow(num,0.5);
for(i=2;i<k;i++)
{
	r=num%i;
	if(r==0)
	{
		printf("The given number is composite.\n");
		break;
	}
}
if(r!=0)
{
printf("The given number is prime.\n");
}
return(0);
}
