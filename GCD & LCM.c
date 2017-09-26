/*Write a C program to find GCD & LCM of two numbers using Euclid's formula.*/

#include<stdio.h>
int main(){
	int a, b, LCM, x, y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	x=(a>b)?a:b;
	int i;
	if(x==a){
		y=b;
		while(a%b!=0){
			i=a%b;
			a=b;
			b=i;
		}
	printf("GCD of given numbers is: %d\n",b);
	LCM=(x*y)/b;
	printf("LCM of given numbers is: %d\n",LCM);
	}
	if(x==b){
		y=a;
		while(b%a!=0){
			i=b%a;
			b=a;
			a=i;
		}
	printf("GCD of given numbers is: %d\n",a);
	LCM=(x*y)/a;
	printf("LCM of given numbers is: %d\n",LCM); 
	}	
	return 0;
}
