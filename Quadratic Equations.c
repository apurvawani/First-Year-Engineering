/*Write a C program to compute the roots of given quadratic equation for non-zero coefficients. */

#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, D;
	printf("Enter the coefficients of the quadratic equation:\n");
	scanf("%f %f %f",&a,&b,&c);
	D=b*b-4*a*c;
	float x1, x2, c1, c2;
	if(D==0){
		x1=(-b/(2*a));
		printf("Equation %f*x*x + %f*x + %f =0 has real & unique solution %f.\n",a,b,c,x1);
	}
	else if(D>0){
		x1=((-b+sqrt(D))/2*a);
		x2=((-b-sqrt(D))/2*a);
		printf("Equation %f*x*x + %f*x + %f =0 has real & distinct solution %f  %f.\n",a,b,c,x1,x2);
	}
	else{
		x1=(-b/(2*a));
		c1=(sqrt(-D)/(2*a));
		c2=(-sqrt(-D)/(2*a));
		printf("Equation %f*x*x + %f*x + %f =0 has complex solution.\nFirst root: real part %f  imaginary part %f\nSecond root: real part %f  imaginary part %f\n",a,b,c,x1,c1,x1,c2);
	}
	return(0);
}
