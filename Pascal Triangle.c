/*Write a C program to display pascal triangle.*/

#include<stdio.h>
int fact(int);
void main(){
	int i, j, n, k;
	printf("Enter number upto which pascal triangle is to be implemented:\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++){
		printf("  ");
	}
	printf("1\n");
	int a, b, c, t;
	t=n-2;
	for(i=2;i<=n;i++){
		for(k=t;k>=1;k--){
			printf("  ");
		}
		t--;	
		for(j=0;j<=i;j++){
			a=fact(i);
			b=fact(j);
			c=fact(i-j);
			printf("%d  ",(a/(b*c)));
		}
		printf("\n");
	}
}
int fact(int x){
	int fact=1, i;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return(fact);
}
